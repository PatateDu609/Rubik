#ifndef __RUBIK_INCLUDE_GRAPHICS_CUBES__
#define __RUBIK_INCLUDE_GRAPHICS_CUBES__

#include "game/utils.h"
#include "utils.h"

#include <set>
#include <vector>

namespace graphics::geometry {

using game::Colors;

struct Cube {
	std::string				   name;
	std::set<Colors> colors{};
	std::vector<VertexData>	   vertices{};
	std::vector<uint32_t>	   indices{};
};

extern std::vector<Cube> cubes;

} // namespace graphics::geometry

#endif //__RUBIK_INCLUDE_GRAPHICS_CUBES__
