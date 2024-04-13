#define IGNORE_VULKAN
#include "graphics/geometry.h"

#include <algorithm>
#include <filesystem>
#include <format>
#include <fstream>
#include <iostream>
#include <iterator>
#include <ranges>
#include <regex>
#include <set>
#include <sstream>
#include <string>
#include <vector>

using game::Colors;

namespace fs = std::filesystem;

static std::ostream &toggle_formatter(std::ostream &os) {
	static bool enabled = true;
	os << "// clang-format " << (enabled ? "off" : "on") << "\n";
	enabled = !enabled;
	return os;
}

class ColorsConverter {
	typedef std::tuple<std::string, float, float, float> RowType;

public:
	ColorsConverter() {
		color_to_name[game::RED]	 = "RED";
		color_to_name[game::BLUE]	 = "BLUE";
		color_to_name[game::YELLOW]	 = "YELLOW";
		color_to_name[game::GREEN]	 = "GREEN";
		color_to_name[game::ORANGE]	 = "ORANGE";
		color_to_name[game::WHITE]	 = "WHITE";
		color_to_name[game::DEFAULT] = "DEFAULT";

		for (const auto &[col, name] : color_to_name) {
			name_to_color[name] = col;
		}

		for (size_t &cell : extent) {
			cell = 0;
		}
	}

	void register_color_vec(const Colors col, const glm::vec3 &vec) {
		const auto [it, has_inserted] = col_vecs.try_emplace(col, vec);
		if (has_inserted) {
			update_rows(col, vec.x, vec.y, vec.z);
			return;
		}

		if (it->second != vec) {
			throw std::runtime_error("tried to insert same color with 2 intensities");
		}
	}

	void register_color_vec(const std::string &col_name, const glm::vec3 &vec) {
		return register_color_vec((*this)(col_name), vec);
	}

	Colors operator()(const std::string_view &name) {
		return (*this)(std::string{name});
	}

	Colors operator()(const std::string &name) {
		const auto &it = name_to_color.find(name);

		if (it == name_to_color.end()) {
			std::ostringstream oss;
			oss << "color " << quoted(name) << " does not exist in converter";
			throw std::runtime_error(oss.str());
		}

		return it->second;
	}

	[[nodiscard]] std::string operator()(const Colors col) const {
		return "game::" + color_to_name.at(col);
	}

	[[nodiscard]] std::optional<std::string> operator()(const glm::vec3 &vec) const {
		for (const auto &[col, value] : col_vecs) {
			if (vec == value) {
				return (*this)(col);
			}
		}
		return std::nullopt;
	}

	void dump_colors(std::ostream &target) const {
		target << "using game::Colors;\n\n";

		target << toggle_formatter << "\n";
		target << "static const std::unordered_map<Colors, glm::vec3> colors{\n";

		const auto &biggest = get_biggest_color();

		for (const auto &row : rows) {
			const auto &key = std::get<0>(row);
			const auto &x	= std::get<1>(row);
			const auto &y	= std::get<2>(row);
			const auto &z	= std::get<3>(row);

			target << "\t{ " << std::format("{:{}s}, {{ {:>{}.6f}, {:>{}.6f}, {:>{}.6f} }}", key, extent[0], x, extent[1], y, extent[2], z, extent[3])
				   << " },\n";
		}
		target << "};\n\n";
		target << toggle_formatter;
	}

	static void dump_includes(std::ostream &target) {
		target << "#include <unordered_map>\n";
	}

private:
	[[nodiscard]] std::pair<Colors, size_t> get_biggest_color() const {
		using ElemType = decltype(color_to_name)::value_type;

		auto comp_elem = [](const ElemType &a, const ElemType &b) {
			return a.second.length() < b.second.length();
		};

		const auto max_elem = std::ranges::max_element(color_to_name.begin(), color_to_name.end(), comp_elem);
		return {max_elem->first, max_elem->second.length()};
	}

	void update_rows(const Colors col, float x, float y, float z) {
		const auto new_row	 = rows.emplace_back((*this)(col), x, y, z);
		extent[0]			 = std::max(std::get<0>(new_row).length(), extent[0]);

		auto get_comp_extent = [](float val) {
			const std::string str = std::format("{:.6f}", val);
			return str.length();
		};

		std::array local_extents{
			extent[1],
			get_comp_extent(std::get<1>(new_row)),
			get_comp_extent(std::get<2>(new_row)),
			get_comp_extent(std::get<3>(new_row)),
		};
		extent[1] = *std::ranges::max_element(local_extents);
		extent[2] = extent[1];
		extent[3] = extent[1];
	}

	std::unordered_map<Colors, glm::vec3>		   col_vecs;
	std::unordered_map<std::string, Colors>		   name_to_color;
	std::unordered_map<Colors, std::string>		   color_to_name;

	std::vector<RowType>						   rows{};
	std::array<size_t, std::tuple_size_v<RowType>> extent{};
};

ColorsConverter col_conv;

std::istream   &operator>>(std::istream &ifs, glm::vec3 &target) {
	  ifs >> target.x >> target.y >> target.z;
	  return ifs;
}

std::istream &operator>>(std::istream &ifs, glm::vec2 &target) {
	ifs >> target.x >> target.y;
	return ifs;
}

struct Context {
	Context(const int ac, char **av) {
		if (ac != 3) {
			std::cerr << "usage: " << av[0] << " <obj path> <target dir>" << std::endl;
			std::exit(1);
		}

		obj_filename = fs::path(av[1]);
		const fs::path target_dir(av[2]);

		if (!exists(obj_filename) || !is_regular_file(obj_filename)) {
			std::cerr << "error: " << obj_filename.string() << ": expecting an existing regular file" << std::endl;
			std::exit(1);
		}

		if (!exists(target_dir) || !is_directory(target_dir)) {
			std::cerr << "error: " << target_dir.string() << ": expecting an existing directory" << std::endl;
			std::exit(1);
		}

		target_file = target_dir / "geometry.cpp";
		if (exists(target_file) && !is_regular_file(target_file)) {
			std::cerr << "error: " << target_file.string() << ": the file exists and is not a regular file" << std::endl;
			std::exit(1);
		}
	}

	fs::path obj_filename;
	fs::path target_file;
};

struct Obj {
	Obj() = default;
	Obj(std::string obj_name, const size_t voffset, const size_t toffset, const size_t noffset)
		: name(obj_name), vertex_offset(voffset), vertex_texture_offset(toffset), vertex_normal_offset(noffset) {
	}

	struct FaceIndices {
		uint32_t				vertex{};
		std::optional<uint32_t> texture;
		std::optional<uint32_t> normal;
	};

	struct Group {
		std::string								name;
		std::vector<std::array<FaceIndices, 3>> faces;
		std::string								material;
	};

	std::optional<std::string> name;

	size_t					   vertex_offset{};
	size_t					   vertex_texture_offset{};
	size_t					   vertex_normal_offset{};

	std::string				   material;
	std::vector<glm::vec3>	   vertices;
	std::vector<glm::vec2>	   textures;
	std::vector<glm::vec3>	   normals;
	std::vector<Group>		   groups;
};

struct File {
	std::vector<std::shared_ptr<Obj>> objects;

	std::vector<fs::path>			  mtllibs;
};

struct Material {
	float	  Ns;
	glm::vec3 Ka;
	glm::vec3 Kd;
	glm::vec3 Ks;
};

std::vector<std::string> split(const std::string &str) {
	std::stringstream		 ss(str);
	std::vector<std::string> ret;

	std::string				 word;
	while (std::getline(ss, word, '/')) {
		ret.push_back(word);
	}

	return ret;
}

std::shared_ptr<File> load(std::ifstream &obj) {
	auto		ret		= std::make_shared<File>();
	auto		cur_obj = ret->objects.emplace_back(std::make_shared<Obj>());

	std::string line;
	auto		grp_it = cur_obj->groups.end();
	while (std::getline(obj, line)) {
		std::istringstream iss(line);

		std::string		   id;
		iss >> id;

		if (id == "mtllib") {
			iss >> ret->mtllibs.emplace_back();
		} else if (id == "v") {
			iss >> cur_obj->vertices.emplace_back();
		} else if (id == "vt") {
			iss >> cur_obj->textures.emplace_back();
		} else if (id == "vn") {
			iss >> cur_obj->normals.emplace_back();
		} else if (id == "g") {
			std::string name;
			iss >> name;

			Obj::Group grp{};
			grp.name = name;
			grp_it	 = cur_obj->groups.insert(cur_obj->groups.begin(), grp);
		} else if (id == "usemtl") {
			if (grp_it == cur_obj->groups.end()) {
				throw std::runtime_error("expecting materials only within groups");
			}

			iss >> grp_it->material;
		} else if (id == "f") {
			if (grp_it == cur_obj->groups.end()) {
				throw std::runtime_error("expecting faces only within groups");
			}

			auto					  &face = grp_it->faces.emplace_back();
			std::array<std::string, 3> vertices;

			iss >> vertices[0] >> vertices[1] >> vertices[2];
			for (size_t i = 0; i < 3; i++) {
				std::vector arr = split(vertices[i]);

				face[i].vertex	= std::stoi(arr[0]);

				if (arr.size() > 1 && !arr[1].empty())
					face[i].texture = std::stoi(arr[1]);
				if (arr.size() > 2 && !arr[2].empty())
					face[i].normal = std::stoi(arr[2]);
			}
		} else if (id == "o") {
			std::string name;
			iss >> name;

			if (cur_obj->name.has_value()) {
				size_t new_vertex_offset		 = cur_obj->vertex_offset + cur_obj->vertices.size();
				size_t new_vertex_texture_offset = cur_obj->vertex_texture_offset + cur_obj->textures.size();
				size_t new_vertex_normal_offset	 = cur_obj->vertex_normal_offset + cur_obj->normals.size();
				cur_obj = ret->objects.emplace_back(std::make_shared<Obj>(name, new_vertex_offset, new_vertex_texture_offset, new_vertex_normal_offset));
				grp_it	= cur_obj->groups.end();
			} else {
				cur_obj->name = name;
			}
		}
	}

	return ret;
}

std::unordered_map<std::string, Material> load_materials(const fs::path &obj, const std::vector<fs::path> &mtllib) {
	fs::path								  dir = absolute(obj).parent_path();

	std::unordered_map<std::string, Material> ret;
	auto									  cur = ret.end();
	for (const auto &lib : mtllib) {
		std::ifstream ifs;

		if (lib.is_absolute()) {
			ifs.open(lib);
		} else {
			ifs.open(dir / lib);
		}

		std::string line;
		while (std::getline(ifs, line)) {
			std::istringstream iss(line);
			std::string		   id;
			iss >> id;

			if (id == "newmtl") {
				std::string name;
				iss >> name;
				auto [it, is_inserted] = ret.insert_or_assign(name, Material{});
				cur					   = it;

				std::cout << (is_inserted ? "Inserted" : "Replaced") << " material with name " << name << std::endl;
			} else if (id == "Ka") {
				if (cur == ret.end()) {
					throw std::runtime_error("can't update non existent material, please declare one before anything else");
				}
				iss >> cur->second.Ka;
			} else if (id == "Ks") {
				if (cur == ret.end()) {
					throw std::runtime_error("can't update non existent material, please declare one before anything else");
				}
				iss >> cur->second.Ks;
			} else if (id == "Kd") {
				if (cur == ret.end()) {
					throw std::runtime_error("can't update non existent material, please declare one before anything else");
				}
				iss >> cur->second.Kd;
			} else if (id == "Ns") {
				if (cur == ret.end()) {
					throw std::runtime_error("can't update non existent material, please declare one before anything else");
				}
				iss >> cur->second.Ns;
			}
		}
	}

	return ret;
}

std::vector<graphics::geometry::Cube> fill_subcubes(const std::vector<std::shared_ptr<Obj>> &objs, const std::unordered_map<std::string, Material> &mtls) {
	std::vector<graphics::geometry::Cube> final;

	graphics::VertexData				  dat;
	std::regex							  re("^(.+)_Cube.*$");
	std::smatch							  match;

	using std::operator""sv;

	for (const auto &obj : objs) {
		auto &el = final.emplace_back();

		el.name	 = obj->name.value_or("NO_NAME");

		if (std::regex_match(el.name, match, re) && match.size() == 2) {
			std::string				 raw_colors = match[1];
			std::vector<std::string> colors;

			for (auto col : std::ranges::split_view(raw_colors, "-"sv)) {
				std::string_view view{col};
				el.colors.emplace(col_conv(view));
			}
		}

		std::unordered_map<graphics::VertexData, size_t> seen;

		for (const auto &grp : obj->groups) {
			const Material &mtl = mtls.at(grp.material);

			dat.color			= mtl.Kd;
			col_conv.register_color_vec(grp.material, mtl.Kd);

			for (const auto &face : grp.faces) {
				for (const auto &[vertex_ind, tex_ind, normal_ind] : face) {
					dat.position = obj->vertices[vertex_ind - obj->vertex_offset];

					size_t ind	 = el.vertices.size();
					try {
						ind = seen.at(dat);
					} catch (const std::out_of_range &) {
						seen[dat] = ind;
						el.vertices.push_back(dat);
					}

					el.indices.push_back(ind);
				}
			}
		}
	}

	return final;
}

std::ostream &operator<<(std::ostream &os, const std::set<Colors> &set) {
	os << "{ ";

	bool first = true;
	for (const auto &el : set) {
		if (!first) {
			os << ", ";
		}

		os << col_conv(el);
		first = false;
	}

	return os << " }";
}

void dump_subcubes(std::ostream &src, const std::vector<graphics::geometry::Cube> &subcubes) {
	src << "namespace graphics::geometry {\n\n";

	src << toggle_formatter;
	src << "std::vector<Cube> cubes{\n";

	for (const auto &[name, colors, vertices, indices] : subcubes) {
		src << "\t{\n";
		src << "\t\t.name = " << std::quoted(name) << ",\n";
		src << "\t\t.colors = " << colors << ",\n";

		src << "\t\t.vertices = { // " << vertices.size() << " vertex\n";

		for (const auto &[pos, col] : vertices) {
			src << "\t\t\tVertexData{\n";
			src << "\t\t\t\t.position = { " << std::format("{:+.2f}f, {:+.2f}f, {:+.2f}f", pos.x, pos.y, pos.z) << " },\n";
			src << "\t\t\t\t.color = ";
			if (auto col_name = col_conv(col); col_name) {
				src << "colors.at(" << *col_name << ")";
			} else {
				src << "{ " << std::format("{:.3f}f, {:.3f}f, {:.3f}f", col.r, col.g, col.b) << " }";
			}
			src << "\n\t\t\t},\n";
		}
		src << "\n\t\t},\n\n";

		src << "\t\t.indices = { // " << indices.size() << " values\n\t\t\t";
		for (size_t i = 0; i < indices.size(); i++) {
			src << indices[i] << "," << (i && i % 3 == 0 ? "\n\t\t\t" : (i + 1 == indices.size() ? "\n" : " "));
		}
		src << "\t\t},\n";

		src << "\t},\n";
	}

	src << "};\n";
	src << toggle_formatter;

	src << "\n\n}";
}

void dump_includes(std::ostream &target) {
	target << "#include \"graphics/geometry.h\"\n";
	ColorsConverter::dump_includes(target);
	target << "\n";
}

int main(const int ac, char **av) {
	Context		  ctx(ac, av);
	std::ifstream obj(ctx.obj_filename);
	std::ofstream target(ctx.target_file, std::ios::trunc);

	if (!obj) {
		std::cerr << "error: " << ctx.obj_filename << ": couldn't open obj file for reading" << std::endl;
		return 1;
	}
	if (!target) {
		std::cerr << "error: " << ctx.target_file << ": couldn't open target file in write mode" << std::endl;
		return 1;
	}

	auto obj_ctx  = load(obj);
	auto mtls	  = load_materials(ctx.obj_filename, obj_ctx->mtllibs);
	auto subcubes = fill_subcubes(obj_ctx->objects, mtls);

	dump_includes(target);

	col_conv.dump_colors(target);
	target << "\n\n";
	dump_subcubes(target, subcubes);

	return 0;
}
