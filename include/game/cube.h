#ifndef CUBE_HPP
#define CUBE_HPP

#include "utils.h"

#include <functional>
#include <memory>
#include <optional>
#include <set>
#include <vector>

namespace game {
class Cube;
}

namespace game {

class Cube : std::enable_shared_from_this<Cube> {
public:
	explicit					 Cube(std::set<Colors> colors);

	static std::shared_ptr<Cube> bind(const std::set<Colors> &colors);
	static std::shared_ptr<Cube> bind(const std::set<Colors> &colors, size_t graphics_idx);

	bool						 operator==(const Cube &other) const noexcept;
	bool						 operator!=(const Cube &other) const noexcept;

	static void					 assert_all_init() noexcept(false);

private:
	static std::vector<std::shared_ptr<Cube>>						  instances;
	static std::function<const Cube &(const std::shared_ptr<Cube> &)> project;

	std::optional<size_t>											  graphics_idx{};
	std::set<Colors>												  colors;
	Face															  faces{NONE};

	static std::optional<std::shared_ptr<Cube>>						  search_cube(const std::function<bool(const Cube &)> &cond);
	static std::optional<std::shared_ptr<Cube>>						  search_cube(const std::set<Colors> &colors);
	static std::optional<std::shared_ptr<Cube>>						  search_cube(size_t graphics);
};

} // namespace game

#endif // CUBE_HPP
