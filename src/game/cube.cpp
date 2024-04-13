#include "game/cube.h"

#include <algorithm>
#include <iostream>
#include <ranges>

namespace ranges = std::ranges;

std::vector<std::shared_ptr<game::Cube>>							   game::Cube::instances;
std::function<const game::Cube &(const std::shared_ptr<game::Cube> &)> game::Cube::project = [](const decltype(instances)::value_type &ptr) {
	return *ptr;
};


namespace game {

Cube::Cube(std::set<Colors> colors) : colors(std::move(colors)) {
	if (this->colors.empty()) {
		throw std::invalid_argument("a cube can't be only composed of default colors");
	}

	if (search_cube(this->colors)) {
		throw std::runtime_error("a cube with the same colors already exists");
	}
}

std::shared_ptr<Cube> Cube::bind(const std::set<Colors> &colors, size_t graphics_idx) {
	if (const auto instance = bind(colors); instance) {
		instance->graphics_idx = graphics_idx;
		return instance;
	}
	return nullptr;
}

std::shared_ptr<Cube> Cube::bind(const std::set<Colors> &colors) {
	try {
		const auto instance = std::make_shared<Cube>(colors);

		return instance;
	} catch (const std::runtime_error &e) {
		std::cerr << "error: " << e.what() << "\n";
	} catch (const std::invalid_argument &e) {
		std::cerr << "error: invalid arguments: " << e.what() << "\n";
	}
	return nullptr;
}

bool Cube::operator==(const Cube &other) const noexcept {
	return graphics_idx == other.graphics_idx && colors == other.colors;
}

bool Cube::operator!=(const Cube &other) const noexcept {
	return !(*this == other);
}

std::optional<std::shared_ptr<Cube>> Cube::search_cube(const std::function<bool(const Cube &)> &cond) {
	const auto it = ranges::find_if(instances, cond, project);

	if (it == instances.end())
		return std::nullopt;
	return *it;
}

std::optional<std::shared_ptr<Cube>> Cube::search_cube(const std::set<Colors> &colors) {
	return search_cube([colors](const Cube &cube) { return cube.colors == colors; });
}

std::optional<std::shared_ptr<Cube>> Cube::search_cube(const size_t graphics) {
	return search_cube([graphics](const Cube &cube) { return cube.graphics_idx == graphics; });
}

void Cube::assert_all_init() noexcept(false) {
	std::set<decltype(colors)> unique_colors;

	auto					   assert_validity = [&unique_colors](const Cube &cube) {
		  if (unique_colors.contains(cube.colors)) {
			  throw std::runtime_error("current cube colors already exists");
		  }
		  if (!cube.graphics_idx) {
			  throw std::runtime_error("current cube not bound to graphics");
		  }
	};

	ranges::for_each(instances, assert_validity, project);
}

} // namespace game
