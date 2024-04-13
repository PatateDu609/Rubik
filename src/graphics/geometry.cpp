#include "graphics/geometry.h"
#include <unordered_map>

using game::Colors;

// clang-format off

static const std::unordered_map<Colors, glm::vec3> colors{
	{ game::WHITE  , { 1.000000, 1.000000, 1.000000 } },
	{ game::DEFAULT, { 0.034151, 0.034151, 0.034151 } },
	{ game::RED    , { 0.900000, 0.050000, 0.050000 } },
	{ game::ORANGE , { 0.800000, 0.270000, 0.005000 } },
	{ game::YELLOW , { 0.975450, 1.000000, 0.000000 } },
	{ game::GREEN  , { 0.100000, 0.900000, 0.100000 } },
	{ game::BLUE   , { 0.050000, 0.050000, 0.950000 } },
};

// clang-format on


namespace graphics::geometry {

// clang-format off
std::vector<Cube> cubes{
	{
		.name = "WHITE_Cube.001",
		.colors = { game::WHITE },
		.vertices = { // 238 vertex
			VertexData{
				.position = { -0.87f, -2.98f, +0.95f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.91f, -2.99f, +0.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.87f, -2.87f, +1.00f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.91f, -2.99f, +0.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.91f, -2.97f, +0.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.94f, -2.97f, +0.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.91f, -2.87f, +0.99f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.94f, -2.96f, +0.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.95f, -2.98f, -0.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.91f, -2.99f, -0.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.00f, -2.87f, -0.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.87f, -2.99f, -0.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.94f, -2.97f, -0.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.91f, -2.97f, -0.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.99f, -2.87f, -0.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.94f, -2.96f, -0.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.95f, -2.98f, +0.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.91f, -2.99f, +0.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.00f, -2.87f, +0.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.87f, -2.99f, +0.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.94f, -2.97f, +0.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.97f, -2.94f, +0.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.87f, -2.98f, +0.95f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.91f, -2.97f, +0.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.99f, -2.87f, +0.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.94f, -2.96f, +0.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.96f, -2.94f, +0.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.87f, -2.98f, -0.95f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.91f, -2.99f, -0.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.87f, -2.87f, -1.00f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.91f, -2.99f, -0.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.91f, -2.97f, -0.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.94f, -2.97f, -0.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.91f, -2.87f, -0.99f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.94f, -2.96f, -0.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.95f, -2.98f, +0.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.87f, -2.98f, -0.95f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.87f, -2.91f, +0.99f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.95f, -2.98f, -0.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.99f, -2.87f, -0.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.00f, -1.13f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, -2.87f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -2.99f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -1.13f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -2.87f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -2.99f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -1.13f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -1.13f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, -1.13f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -1.09f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -2.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -2.99f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, -1.13f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, -2.87f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -2.99f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -2.94f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, -2.98f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -2.99f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -2.94f, +0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -2.87f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, -2.87f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -2.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -2.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -2.91f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, -2.91f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -2.95f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -2.91f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.96f, -2.94f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, -2.95f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -2.91f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -2.87f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, -2.94f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -2.97f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, -2.87f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -1.13f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -2.96f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -1.05f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -1.09f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -1.00f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -1.13f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -1.06f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -1.03f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, -1.13f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -1.09f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -1.01f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -1.06f, +0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -1.04f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, -1.02f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -1.01f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, -1.13f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -1.01f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -1.03f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, -1.06f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -1.02f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -1.13f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.96f, -1.06f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, -1.13f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -1.09f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -1.09f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, -1.09f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, -1.05f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -3.00f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, -2.94f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -2.98f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -2.99f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.96f, -2.94f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -2.87f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, -2.87f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -2.91f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -2.91f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, -2.91f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -2.91f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, -2.95f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -2.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -2.94f, -0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -2.95f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -2.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -2.87f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -2.94f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -2.97f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, -2.87f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -1.00f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -2.96f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -1.02f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -1.01f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -1.01f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -1.03f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -1.06f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, -1.02f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -1.03f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -1.13f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -1.04f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -1.06f, -0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, -1.13f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -1.09f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -1.09f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -1.09f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, -1.09f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -1.05f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -1.09f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.96f, -1.06f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, -1.05f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -1.09f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -1.01f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -1.13f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, -1.06f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, -1.13f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -3.00f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, -2.87f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -2.91f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -2.91f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, -2.91f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -2.91f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, -2.95f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, -2.94f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -2.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.96f, -2.94f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -2.94f, +0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -2.95f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -2.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -2.87f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -2.94f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -2.97f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, -2.87f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -1.00f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -2.96f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -2.87f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -1.02f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -1.01f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -1.01f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -1.03f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -1.06f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, -1.02f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -1.03f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -1.13f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -1.04f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -1.06f, +0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, -1.13f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -1.09f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -1.09f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -1.09f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, -1.09f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -1.05f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -1.09f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.96f, -1.06f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, -1.05f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -1.09f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -1.01f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -1.13f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, -1.06f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, -1.13f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -3.00f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -2.94f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, -2.98f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -2.99f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -2.94f, -0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -2.87f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, -2.87f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -2.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -2.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -2.91f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, -2.91f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -2.95f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -2.91f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.96f, -2.94f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, -2.95f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -2.91f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -2.87f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, -2.94f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -2.97f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, -2.87f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -1.00f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -2.96f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, -1.02f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -1.01f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -1.01f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -1.03f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, -1.06f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -1.02f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -1.03f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -1.13f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -1.04f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.96f, -1.06f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, -1.13f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -1.09f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -1.09f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, -1.09f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -1.09f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, -1.05f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -1.09f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -1.06f, -0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -1.05f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -1.09f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -1.01f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -1.13f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -1.06f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, -1.13f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.00f, +0.00f, +0.00f },
				.color = colors.at(game::DEFAULT)
			},

		},

		.indices = { // 1284 values
			0, 1, 2, 3,
			4, 0, 4,
			5, 1, 4,
			6, 7, 8,
			9, 10, 11,
			12, 8, 12,
			13, 9, 12,
			14, 15, 16,
			17, 18, 19,
			20, 16, 21,
			22, 19, 20,
			23, 17, 20,
			24, 25, 26,
			24, 22, 27,
			28, 29, 30,
			31, 27, 31,
			32, 28, 31,
			33, 34, 2,
			8, 10, 1,
			11, 8, 10,
			27, 29, 9,
			30, 27, 29,
			16, 18, 28,
			19, 16, 32,
			21, 19, 18,
			0, 2, 17,
			3, 0, 29,
			2, 10, 0,
			4, 1, 3,
			35, 4, 4,
			7, 5, 4,
			35, 6, 8,
			12, 9, 11,
			36, 12, 12,
			15, 13, 12,
			36, 14, 16,
			20, 17, 19,
			22, 20, 21,
			26, 22, 20,
			25, 23, 20,
			22, 24, 26,
			37, 24, 27,
			31, 28, 30,
			38, 31, 31,
			34, 32, 31,
			38, 33, 2,
			1, 8, 1,
			5, 11, 10,
			9, 27, 9,
			13, 30, 29,
			28, 16, 28,
			32, 19, 32,
			39, 21, 18,
			17, 0, 17,
			23, 3, 29,
			18, 2, 40,
			41, 42, 43,
			44, 45, 46,
			47, 48, 49,
			50, 51, 52,
			53, 54, 55,
			56, 57, 58,
			59, 56, 60,
			61, 41, 62,
			63, 60, 64,
			65, 62, 63,
			55, 61, 63,
			66, 58, 67,
			66, 65, 68,
			69, 51, 70,
			71, 68, 72,
			73, 70, 71,
			64, 69, 71,
			74, 67, 75,
			74, 73, 59,
			66, 74, 76,
			77, 78, 79,
			80, 76, 81,
			82, 79, 80,
			83, 77, 80,
			84, 85, 86,
			84, 82, 87,
			88, 89, 90,
			91, 87, 92,
			93, 90, 91,
			81, 88, 91,
			94, 86, 95,
			94, 93, 96,
			97, 49, 98,
			99, 96, 83,
			100, 98, 99,
			92, 97, 99,
			101, 95, 85,
			101, 100, 84,
			94, 101, 102,
			103, 104, 105,
			106, 103, 107,
			108, 50, 109,
			110, 107, 111,
			112, 109, 110,
			102, 108, 110,
			113, 105, 114,
			113, 112, 115,
			116, 54, 117,
			118, 115, 119,
			120, 117, 118,
			111, 116, 118,
			121, 114, 122,
			121, 120, 106,
			113, 121, 123,
			124, 46, 125,
			126, 123, 127,
			128, 125, 126,
			129, 124, 126,
			130, 131, 132,
			130, 128, 133,
			134, 52, 135,
			136, 133, 137,
			138, 135, 136,
			127, 134, 136,
			139, 132, 140,
			139, 138, 141,
			142, 143, 144,
			145, 141, 129,
			146, 144, 145,
			137, 142, 145,
			147, 140, 131,
			147, 146, 130,
			139, 147, 148,
			149, 44, 150,
			151, 148, 152,
			153, 150, 151,
			154, 149, 151,
			155, 156, 157,
			155, 153, 158,
			159, 42, 160,
			161, 158, 162,
			163, 160, 161,
			152, 159, 161,
			164, 157, 165,
			164, 163, 166,
			155, 164, 167,
			168, 47, 169,
			170, 167, 171,
			172, 169, 170,
			173, 168, 170,
			174, 175, 176,
			174, 172, 177,
			178, 40, 179,
			180, 177, 181,
			182, 179, 180,
			171, 178, 180,
			183, 176, 184,
			183, 182, 185,
			186, 187, 188,
			189, 185, 173,
			190, 188, 189,
			181, 186, 189,
			191, 184, 175,
			191, 190, 174,
			183, 191, 192,
			193, 194, 195,
			196, 193, 197,
			198, 53, 199,
			200, 197, 201,
			202, 199, 200,
			192, 198, 200,
			203, 195, 204,
			203, 202, 205,
			206, 45, 207,
			208, 205, 209,
			210, 207, 208,
			201, 206, 208,
			211, 204, 212,
			211, 210, 196,
			203, 211, 213,
			214, 48, 215,
			216, 213, 217,
			218, 215, 216,
			219, 214, 216,
			220, 221, 222,
			220, 218, 223,
			224, 43, 225,
			226, 223, 227,
			228, 225, 226,
			217, 224, 226,
			229, 222, 230,
			229, 228, 231,
			232, 233, 234,
			235, 231, 219,
			236, 234, 235,
			227, 232, 235,
			237, 230, 221,
			237, 236, 220,
			229, 237, 72,
			102, 104, 70,
			108, 102, 68,
			50, 108, 78,
			60, 41, 77,
			62, 60, 83,
			64, 62, 98,
			69, 64, 96,
			51, 69, 46,
			87, 89, 124,
			90, 87, 129,
			92, 90, 144,
			97, 92, 141,
			49, 97, 54,
			133, 52, 116,
			135, 133, 111,
			137, 135, 109,
			142, 137, 107,
			143, 142, 119,
			192, 194, 117,
			198, 192, 115,
			53, 198, 48,
			123, 46, 214,
			125, 123, 219,
			127, 125, 234,
			134, 127, 231,
			52, 134, 45,
			223, 43, 206,
			225, 223, 201,
			227, 225, 199,
			232, 227, 197,
			233, 232, 207,
			149, 154, 205,
			44, 149, 47,
			213, 48, 168,
			215, 213, 173,
			217, 215, 188,
			224, 217, 185,
			43, 224, 42,
			177, 40, 159,
			179, 177, 152,
			181, 179, 150,
			186, 181, 148,
			187, 186, 162,
			55, 57, 160,
			61, 55, 158,
			41, 61, 89,
			167, 47, 88,
			169, 167, 81,
			171, 169, 79,
			178, 171, 76,
			40, 178, 40,
			78, 41, 43,
			187, 44, 46,
			89, 47, 49,
			143, 50, 52,
			233, 53, 55,
			58, 56, 58,
			66, 59, 60,
			63, 61, 62,
			65, 63, 64,
			67, 65, 63,
			58, 55, 63,
			65, 66, 67,
			74, 66, 68,
			71, 69, 70,
			73, 71, 72,
			75, 73, 71,
			67, 64, 71,
			73, 74, 75,
			59, 74, 76,
			80, 77, 79,
			82, 80, 81,
			86, 82, 80,
			85, 83, 80,
			82, 84, 86,
			94, 84, 87,
			91, 88, 90,
			93, 91, 92,
			95, 93, 91,
			86, 81, 91,
			93, 94, 95,
			101, 94, 96,
			99, 97, 98,
			100, 99, 83,
			85, 100, 99,
			95, 92, 99,
			100, 101, 85,
			84, 101, 102,
			105, 103, 105,
			113, 106, 107,
			110, 108, 109,
			112, 110, 111,
			114, 112, 110,
			105, 102, 110,
			112, 113, 114,
			121, 113, 115,
			118, 116, 117,
			120, 118, 119,
			122, 120, 118,
			114, 111, 118,
			120, 121, 122,
			106, 121, 123,
			126, 124, 125,
			128, 126, 127,
			132, 128, 126,
			131, 129, 126,
			128, 130, 132,
			139, 130, 133,
			136, 134, 135,
			138, 136, 137,
			140, 138, 136,
			132, 127, 136,
			138, 139, 140,
			147, 139, 141,
			145, 142, 144,
			146, 145, 129,
			131, 146, 145,
			140, 137, 145,
			146, 147, 131,
			130, 147, 148,
			151, 149, 150,
			153, 151, 152,
			157, 153, 151,
			156, 154, 151,
			153, 155, 157,
			164, 155, 158,
			161, 159, 160,
			163, 161, 162,
			165, 163, 161,
			157, 152, 161,
			163, 164, 165,
			166, 164, 167,
			170, 168, 169,
			172, 170, 171,
			176, 172, 170,
			175, 173, 170,
			172, 174, 176,
			183, 174, 177,
			180, 178, 179,
			182, 180, 181,
			184, 182, 180,
			176, 171, 180,
			182, 183, 184,
			191, 183, 185,
			189, 186, 188,
			190, 189, 173,
			175, 190, 189,
			184, 181, 189,
			190, 191, 175,
			174, 191, 192,
			195, 193, 195,
			203, 196, 197,
			200, 198, 199,
			202, 200, 201,
			204, 202, 200,
			195, 192, 200,
			202, 203, 204,
			211, 203, 205,
			208, 206, 207,
			210, 208, 209,
			212, 210, 208,
			204, 201, 208,
			210, 211, 212,
			196, 211, 213,
			216, 214, 215,
			218, 216, 217,
			222, 218, 216,
			221, 219, 216,
			218, 220, 222,
			229, 220, 223,
			226, 224, 225,
			228, 226, 227,
			230, 228, 226,
			222, 217, 226,
			228, 229, 230,
			237, 229, 231,
			235, 232, 234,
			236, 235, 219,
			221, 236, 235,
			230, 227, 235,
			236, 237, 221,
			220, 237, 72,
			70, 102, 70,
			68, 108, 68,
			51, 50, 78,
			77, 60, 77,
			83, 62, 83,
			98, 64, 98,
			96, 69, 96,
			49, 51, 46,
			124, 87, 124,
			129, 90, 129,
			144, 92, 144,
			141, 97, 141,
			143, 49, 54,
			116, 133, 116,
			111, 135, 111,
			109, 137, 109,
			107, 142, 107,
			50, 143, 119,
			117, 192, 117,
			115, 198, 115,
			54, 53, 48,
			214, 123, 214,
			219, 125, 219,
			234, 127, 234,
			231, 134, 231,
			233, 52, 45,
			206, 223, 206,
			201, 225, 201,
			199, 227, 199,
			197, 232, 197,
			53, 233, 207,
			205, 149, 205,
			45, 44, 47,
			168, 213, 168,
			173, 215, 173,
			188, 217, 188,
			185, 224, 185,
			187, 43, 42,
			159, 177, 159,
			152, 179, 152,
			150, 181, 150,
			148, 186, 148,
			44, 187, 162,
			160, 55, 160,
			158, 61, 158,
			42, 41, 89,
			88, 167, 88,
			81, 169, 81,
			79, 171, 79,
			76, 178, 76,
			78, 40,
		},
	},
	{
		.name = "WHITE-RED_Cube.002",
		.colors = { game::RED, game::WHITE },
		.vertices = { // 260 vertex
			VertexData{
				.position = { -0.91f, -2.99f, -1.13f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.94f, -2.97f, -1.09f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.87f, -3.00f, -1.13f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.87f, -3.00f, -2.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.87f, -2.99f, -1.09f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.87f, -2.99f, -1.09f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.91f, -2.99f, -2.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.87f, -3.00f, -2.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.91f, -2.99f, -1.13f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.91f, -2.99f, -2.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.87f, -2.99f, -2.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.87f, -2.99f, -2.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.87f, -2.98f, -2.95f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.91f, -2.99f, -2.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.87f, -2.98f, -2.95f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.91f, -2.97f, -2.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.96f, -2.94f, -2.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.95f, -2.98f, -2.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.95f, -2.98f, -1.13f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.94f, -2.97f, -1.09f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.97f, -2.94f, -1.09f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.94f, -2.96f, -1.06f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.98f, -2.95f, -1.13f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.98f, -1.13f, -2.95f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.87f, -2.95f, -2.98f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.97f, -2.94f, -2.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.94f, -2.96f, -1.06f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.98f, -2.95f, -2.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.91f, -2.97f, -1.06f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.91f, -2.99f, -1.09f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.87f, -2.95f, -1.02f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.91f, -2.97f, -1.06f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.96f, -2.94f, -1.06f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.91f, -2.99f, -1.09f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.99f, -2.91f, -1.13f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.00f, +0.00f, +0.00f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.99f, -2.91f, -2.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.96f, -2.94f, -2.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.94f, -2.94f, -1.04f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.94f, -2.94f, -1.04f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.91f, -2.97f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.87f, -2.95f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.87f, -2.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.91f, -2.94f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.87f, -2.99f, -2.91f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.87f, -2.87f, -3.00f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.91f, -2.87f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.91f, -2.94f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.00f, +0.00f, +0.00f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.91f, -2.87f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.91f, -2.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.94f, -2.91f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.97f, -2.91f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.94f, -2.96f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.87f, -2.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.91f, -2.97f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.95f, -2.87f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.94f, -2.94f, -2.96f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.96f, -2.94f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.87f, -1.09f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.94f, -1.06f, -2.96f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.91f, -1.06f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.91f, -1.09f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.95f, -1.13f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.91f, -1.03f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.91f, -1.13f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.98f, -2.87f, -2.95f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.91f, -1.13f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.91f, -1.06f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.87f, -1.13f, -3.00f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.91f, -1.09f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.94f, -1.09f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.97f, -1.09f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.94f, -1.04f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.87f, -1.09f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.91f, -2.99f, -2.87f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.95f, -1.13f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.94f, -1.06f, -2.96f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.94f, -2.94f, -2.96f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.87f, -2.87f, -3.00f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.91f, -2.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.95f, -2.87f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.94f, -2.96f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.87f, -2.95f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.94f, -2.91f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.97f, -2.94f, -2.91f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.87f, -1.05f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.97f, -1.06f, -2.91f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.98f, -1.13f, -2.95f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.96f, -2.94f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -2.96f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, -2.94f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -2.97f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -2.94f, -2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, -2.98f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, -2.95f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, -2.98f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -2.91f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, -2.87f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -2.91f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, -2.94f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, -2.87f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -2.91f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.96f, -1.06f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, -1.13f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -2.87f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, -1.13f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -1.09f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -1.09f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -1.13f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -1.09f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -1.13f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, -1.06f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, -1.05f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, -1.02f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, -1.05f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, -1.02f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, -1.06f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.96f, -1.06f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, -1.09f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -1.03f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -1.01f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -1.09f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -1.09f, -2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -1.06f, -2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, -1.13f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, -1.13f, -2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -1.04f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -1.05f, -2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -1.03f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -1.01f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -1.09f, -2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -1.02f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -1.02f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -1.01f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -1.03f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -1.06f, -2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, -1.02f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -1.05f, -2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -1.09f, -2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.96f, -1.06f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -1.04f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, -1.06f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -1.03f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -1.06f, -2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -1.01f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, -1.05f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -1.01f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -1.09f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, -1.13f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, -1.02f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -1.01f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -1.03f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, -1.06f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -1.02f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, -1.05f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -1.09f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, -1.13f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -1.09f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -2.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, -2.87f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -1.13f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -2.91f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -2.87f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -2.91f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -2.87f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, -2.87f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -2.91f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, -2.94f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, -2.95f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, -2.98f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, -2.95f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, -2.98f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, -2.94f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.96f, -2.94f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, -2.91f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -2.97f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, -1.13f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -2.91f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -2.91f, -2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -2.94f, -2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, -2.87f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, -2.87f, -2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -2.91f, -2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -2.99f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -2.99f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, -2.91f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -2.95f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -2.97f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -2.94f, -1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.96f, -2.94f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, -2.87f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, -2.87f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -2.91f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -2.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -2.87f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -2.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -2.94f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -1.13f, -3.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -2.98f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -2.95f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -2.97f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -2.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -2.87f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -2.94f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -2.98f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -2.99f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -2.91f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.96f, -2.94f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -2.94f, -1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, -2.87f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -2.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, -2.91f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -2.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -2.87f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -1.13f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -1.13f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -1.09f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -1.09f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -1.09f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, -1.13f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, -1.09f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, -1.13f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, -2.87f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -1.04f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -1.06f, -1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -1.03f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -1.01f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -1.09f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -1.03f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -1.01f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -1.00f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -1.05f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -1.01f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -1.01f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -1.00f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -1.00f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -1.00f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -1.01f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -1.01f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -1.05f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -1.06f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -1.09f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -1.03f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -1.13f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -1.06f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -1.09f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -1.13f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -1.06f, -1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, -1.09f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, -1.13f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, -1.13f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.96f, -1.06f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -1.04f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -1.09f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -1.13f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -1.02f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -2.91f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -2.97f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, -2.91f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},

		},

		.indices = { // 1284 values
			0, 1, 2, 3,
			4, 0, 5,
			3, 0, 6,
			0, 2, 7,
			8, 5, 6,
			7, 5, 9,
			10, 6, 2,
			9, 6, 11,
			12, 9, 13,
			11, 9, 1,
			13, 2, 14,
			15, 13, 12,
			16, 17, 12,
			18, 10, 10,
			19, 7, 18,
			20, 19, 19,
			21, 7, 20,
			22, 19, 14,
			23, 24, 25,
			14, 1, 4,
			25, 1, 26,
			27, 4, 26,
			28, 29, 8,
			30, 3, 21,
			31, 8, 21,
			32, 33, 34,
			32, 22, 30,
			26, 3, 0,
			4, 1, 3,
			26, 4, 5,
			8, 3, 6,
			5, 0, 7,
			21, 8, 6,
			10, 7, 9,
			12, 10, 2,
			13, 9, 11,
			35, 12, 13,
			15, 11, 1,
			14, 13, 14,
			24, 15, 12,
			35, 16, 12,
			17, 18, 10,
			18, 19, 18,
			36, 20, 19,
			22, 21, 20,
			34, 22, 14,
			37, 23, 25,
			37, 14, 4,
			27, 25, 26,
			29, 27, 26,
			38, 28, 8,
			31, 30, 21,
			33, 31, 21,
			22, 32, 34,
			39, 32, 30,
			38, 26, 40,
			41, 42, 40,
			43, 44, 42,
			45, 43, 42,
			46, 47, 43,
			48, 44, 49,
			43, 45, 47,
			50, 45, 51,
			45, 50, 52,
			49, 51, 49,
			53, 54, 55,
			56, 52, 57,
			53, 56, 54,
			58, 48, 59,
			60, 61, 59,
			62, 63, 64,
			59, 65, 65,
			61, 66, 67,
			68, 69, 64,
			69, 68, 65,
			70, 69, 71,
			69, 70, 72,
			67, 71, 67,
			73, 74, 75,
			76, 72, 77,
			73, 76, 46,
			78, 79, 46,
			80, 81, 47,
			79, 82, 82,
			71, 70, 79,
			72, 71, 70,
			50, 82, 83,
			80, 41, 72,
			84, 75, 51,
			66, 61, 52,
			61, 60, 40,
			83, 41, 40,
			42, 43, 42,
			47, 45, 42,
			41, 46, 43,
			54, 48, 49,
			54, 43, 47,
			82, 50, 51,
			49, 45, 52,
			56, 49, 49,
			56, 53, 55,
			57, 56, 57,
			85, 53, 54,
			53, 58, 59,
			63, 60, 59,
			86, 62, 64,
			86, 59, 65,
			59, 61, 67,
			74, 68, 64,
			65, 69, 65,
			66, 70, 71,
			67, 69, 72,
			76, 67, 67,
			76, 73, 75,
			77, 76, 77,
			87, 73, 46,
			81, 78, 46,
			41, 80, 47,
			46, 79, 82,
			79, 71, 79,
			78, 72, 70,
			66, 50, 83,
			88, 80, 72,
			78, 84, 51,
			50, 66, 52,
			51, 61, 89,
			90, 91, 92,
			91, 93, 94,
			91, 95, 96,
			95, 97, 97,
			92, 98, 99,
			100, 101, 97,
			101, 100, 98,
			102, 101, 103,
			101, 102, 98,
			104, 105, 105,
			106, 107, 107,
			102, 105, 108,
			107, 109, 106,
			109, 107, 110,
			102, 111, 108,
			110, 111, 112,
			113, 108, 112,
			109, 114, 115,
			116, 112, 115,
			114, 117, 114,
			118, 117, 119,
			114, 109, 120,
			121, 118, 119,
			122, 120, 123,
			119, 106, 124,
			125, 123, 126,
			122, 125, 127,
			128, 129, 130,
			131, 128, 132,
			121, 130, 132,
			127, 133, 121,
			122, 131, 133,
			134, 135, 127,
			136, 134, 134,
			137, 135, 136,
			138, 134, 139,
			140, 138, 140,
			141, 142, 143,
			142, 144, 145,
			142, 146, 147,
			146, 148, 148,
			143, 149, 137,
			140, 145, 137,
			147, 150, 150,
			151, 152, 147,
			153, 151, 151,
			154, 152, 153,
			155, 151, 156,
			153, 157, 148,
			157, 153, 149,
			158, 157, 159,
			157, 158, 149,
			160, 161, 160,
			162, 161, 158,
			162, 163, 164,
			162, 165, 166,
			165, 162, 159,
			163, 167, 164,
			167, 163, 168,
			169, 164, 168,
			165, 170, 171,
			172, 168, 171,
			170, 173, 170,
			174, 173, 175,
			170, 165, 176,
			177, 174, 175,
			178, 176, 179,
			175, 166, 180,
			181, 179, 182,
			178, 181, 177,
			178, 183, 179,
			160, 184, 143,
			184, 160, 185,
			186, 172, 187,
			188, 189, 188,
			190, 186, 169,
			186, 191, 191,
			190, 192, 169,
			193, 167, 193,
			192, 194, 194,
			195, 196, 195,
			190, 187, 196,
			197, 198, 195,
			199, 197, 199,
			189, 200, 201,
			199, 200, 202,
			197, 199, 202,
			203, 204, 201,
			205, 202, 206,
			207, 205, 208,
			209, 207, 203,
			207, 210, 210,
			209, 211, 203,
			212, 213, 212,
			211, 214, 204,
			213, 215, 215,
			216, 217, 213,
			218, 216, 216,
			219, 217, 218,
			220, 216, 221,
			222, 218, 212,
			221, 218, 113,
			221, 110, 214,
			110, 221, 214,
			99, 103, 223,
			224, 222, 113,
			225, 223, 226,
			224, 225, 227,
			225, 116, 228,
			226, 229, 230,
			226, 227, 230,
			115, 231, 232,
			230, 233, 233,
			231, 234, 234,
			235, 236, 231,
			117, 235, 235,
			133, 236, 117,
			132, 235, 236,
			135, 237, 237,
			234, 236, 237,
			152, 238, 135,
			150, 237, 238,
			233, 234, 152,
			239, 238, 154,
			240, 239, 239,
			232, 233, 240,
			241, 232, 240,
			242, 243, 241,
			229, 232, 220,
			241, 219, 243,
			219, 241, 244,
			217, 219, 244,
			245, 246, 243,
			247, 244, 247,
			248, 245, 247,
			249, 250, 248,
			251, 252, 250,
			253, 251, 252,
			156, 159, 156,
			253, 254, 254,
			255, 155, 249,
			255, 253, 154,
			255, 256, 256,
			249, 242, 252,
			167, 193, 248,
			193, 194, 245,
			194, 196, 246,
			196, 198, 217,
			198, 215, 204,
			198, 197, 220,
			224, 228, 99,
			209, 257, 258,
			124, 123, 104,
			123, 106, 92,
			258, 104, 92,
			95, 91, 94,
			89, 91, 96,
			94, 95, 97,
			95, 92, 99,
			257, 100, 97,
			98, 101, 98,
			105, 102, 103,
			99, 101, 98,
			92, 104, 105,
			104, 106, 107,
			111, 102, 108,
			111, 107, 106,
			119, 109, 110,
			103, 102, 108,
			113, 110, 112,
			116, 113, 112,
			108, 109, 115,
			227, 116, 115,
			112, 114, 114,
			120, 118, 119,
			120, 114, 120,
			122, 121, 119,
			125, 122, 123,
			125, 119, 124,
			126, 125, 126,
			131, 122, 127,
			130, 128, 130,
			121, 131, 132,
			118, 121, 132,
			130, 127, 133,
			127, 134, 127,
			129, 136, 134,
			138, 137, 136,
			139, 138, 139,
			141, 140, 143,
			146, 142, 145,
			140, 142, 147,
			145, 146, 148,
			146, 143, 137,
			138, 140, 137,
			145, 147, 150,
			147, 151, 147,
			148, 153, 151,
			155, 154, 153,
			254, 155, 156,
			254, 153, 148,
			149, 157, 149,
			161, 158, 159,
			156, 157, 149,
			143, 160, 160,
			166, 162, 158,
			161, 162, 164,
			163, 162, 166,
			175, 165, 159,
			158, 163, 164,
			169, 167, 168,
			172, 169, 168,
			164, 165, 171,
			185, 172, 171,
			168, 170, 170,
			176, 174, 175,
			176, 170, 176,
			178, 177, 175,
			181, 178, 179,
			181, 175, 180,
			182, 181, 182,
			183, 178, 179,
			166, 160, 143,
			144, 184, 185,
			188, 186, 187,
			190, 188, 169,
			172, 186, 191,
			186, 190, 169,
			191, 193, 193,
			191, 192, 194,
			192, 195, 195,
			192, 190, 196,
			195, 197, 195,
			187, 199, 199,
			187, 189, 201,
			202, 199, 202,
			204, 197, 202,
			205, 203, 201,
			206, 205, 206,
			208, 207, 203,
			205, 207, 210,
			207, 209, 203,
			210, 212, 212,
			210, 211, 204,
			203, 213, 215,
			213, 216, 213,
			212, 218, 216,
			220, 219, 218,
			222, 220, 221,
			223, 222, 212,
			214, 221, 113,
			223, 221, 214,
			103, 110, 214,
			211, 99, 223,
			225, 224, 113,
			116, 225, 227,
			226, 225, 228,
			224, 226, 230,
			229, 226, 230,
			227, 115, 232,
			229, 230, 233,
			230, 231, 234,
			231, 235, 231,
			115, 117, 235,
			132, 133, 117,
			118, 132, 236,
			133, 135, 237,
			238, 234, 237,
			150, 152, 135,
			137, 150, 238,
			239, 233, 152,
			154, 239, 154,
			256, 240, 239,
			240, 232, 240,
			243, 241, 240,
			256, 242, 241,
			228, 229, 220,
			228, 241, 243,
			244, 219, 244,
			246, 217, 244,
			247, 245, 243,
			242, 247, 247,
			250, 248, 247,
			242, 249, 248,
			250, 251, 250,
			249, 253, 252,
			251, 156, 156,
			251, 253, 254,
			253, 255, 154,
			155, 255, 256,
			255, 249, 252,
			159, 167, 248,
			252, 193, 245,
			248, 194, 246,
			245, 196, 217,
			246, 198, 204,
			215, 198, 220,
			222, 224, 99,
			211, 209, 258,
			259, 124, 104,
			258, 123, 92,
			93, 258,
		},
	},
	{
		.name = "WHITE-ORANGE_Cube.003",
		.colors = { game::ORANGE, game::WHITE },
		.vertices = { // 258 vertex
			VertexData{
				.position = { -0.91f, -2.99f, +2.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.94f, -2.97f, +2.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.87f, -3.00f, +2.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.87f, -3.00f, +1.13f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.87f, -2.99f, +2.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.87f, -2.99f, +2.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.91f, -2.99f, +1.13f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.87f, -3.00f, +1.13f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.91f, -2.99f, +2.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.91f, -2.99f, +1.09f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.87f, -2.99f, +1.09f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.87f, -2.99f, +1.09f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.87f, -2.98f, +1.05f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.91f, -2.99f, +1.09f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.87f, -2.98f, +1.05f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.91f, -2.97f, +1.06f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.96f, -2.94f, +1.06f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.95f, -2.98f, +1.13f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.95f, -2.98f, +2.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.94f, -2.97f, +2.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.97f, -2.94f, +2.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.94f, -2.96f, +2.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.98f, -2.95f, +2.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.98f, -1.13f, +1.05f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.87f, -2.95f, +1.02f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.97f, -2.94f, +1.09f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.94f, -2.96f, +2.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.98f, -2.95f, +1.13f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.91f, -2.97f, +2.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.91f, -2.99f, +2.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.87f, -2.95f, +2.98f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.91f, -2.97f, +2.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.96f, -2.94f, +2.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.91f, -2.99f, +2.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.99f, -2.91f, +2.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.00f, +0.00f, +0.00f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.99f, -2.91f, +1.09f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.96f, -2.94f, +1.06f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.94f, -2.94f, +2.96f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.94f, -2.94f, +2.96f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.87f, -2.95f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.91f, -2.97f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.94f, -2.94f, +2.96f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.91f, -2.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.91f, -2.87f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.87f, -2.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.96f, -2.94f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.91f, -2.94f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.87f, -1.13f, +1.00f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.87f, -2.98f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.87f, -2.95f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.91f, -2.97f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.87f, -2.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.91f, -2.87f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.91f, -2.94f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.87f, -2.98f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.91f, -2.99f, +2.91f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.94f, -2.91f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.95f, -2.87f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.97f, -2.91f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.87f, -2.87f, +3.00f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.91f, -1.13f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.87f, -1.13f, +3.00f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.91f, -1.09f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.94f, -1.09f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.87f, -1.09f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.95f, -1.13f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.97f, -1.09f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.98f, -1.13f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.99f, -2.87f, +2.91f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.98f, -2.87f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.94f, -1.04f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.91f, -1.06f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.91f, -1.03f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.87f, -1.13f, +3.00f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.91f, -1.06f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.91f, -1.09f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.91f, -1.13f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.94f, -1.06f, +2.96f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.97f, -1.09f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.95f, -1.13f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.87f, -1.09f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.95f, -2.87f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.96f, -2.94f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.94f, -1.06f, +2.96f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.94f, -1.09f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.91f, -2.97f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -2.95f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -2.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -2.94f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -2.99f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -2.87f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -2.87f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -2.94f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.00f, +0.00f, +0.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -2.87f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -2.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -2.91f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, -2.91f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -2.96f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -2.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -2.97f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, -2.87f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -2.94f, +1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.96f, -2.94f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, -2.94f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -2.97f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, -2.98f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, -2.95f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, -2.98f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -2.91f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, -2.87f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -2.91f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, -2.94f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, -2.87f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -2.91f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.96f, -1.06f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, -1.13f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -2.87f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, -1.13f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -1.09f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -1.09f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -1.13f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -1.09f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -1.13f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, -1.06f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, -1.05f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, -1.02f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, -1.05f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, -1.02f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, -1.06f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.96f, -1.06f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, -1.09f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -1.03f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -1.01f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -1.09f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -1.09f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -1.06f, +1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, -1.13f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, -1.13f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -1.09f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -1.06f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -1.09f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -1.03f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -1.13f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, -2.87f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -1.04f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -1.05f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -1.01f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -1.02f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -1.02f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -1.01f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -1.03f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -1.06f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, -1.02f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -1.05f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -1.13f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -1.13f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -1.09f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -1.09f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, -1.09f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -1.04f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -1.09f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -2.99f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, -1.13f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -1.06f, +1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.96f, -1.06f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, -1.06f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -1.03f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -1.01f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, -1.05f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -1.01f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -1.09f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, -1.13f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, -1.02f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -1.01f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -1.03f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, -1.06f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -1.02f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, -1.05f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -1.09f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, -1.13f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -1.09f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -2.87f, +3.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, -2.87f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -1.13f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -2.91f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -2.87f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -2.91f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -2.87f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, -2.87f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -2.91f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, -2.94f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, -2.95f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, -2.98f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, -2.95f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, -2.98f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, -2.94f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.96f, -2.94f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, -2.91f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -2.97f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, -1.13f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -2.91f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -2.91f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -2.94f, +1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, -2.87f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, -2.87f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -2.87f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -2.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -2.96f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -2.95f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -2.99f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, -2.91f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -2.97f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.96f, -2.94f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, -2.87f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, -2.87f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -2.91f, +2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -2.91f, +2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.96f, -2.94f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -2.94f, +2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -2.91f, +2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, -2.87f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -2.91f, +2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, -2.91f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -2.87f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, -1.09f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -1.06f, +2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, -2.87f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -1.03f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -1.04f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -1.01f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -1.09f, +2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -1.03f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -1.01f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -1.00f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -1.05f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -1.01f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -1.01f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -1.00f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -1.00f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -1.00f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -1.01f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -1.01f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -1.05f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -1.06f, +2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -1.09f, +2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -1.03f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -1.06f, +2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, -1.13f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.96f, -1.06f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, -1.13f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -1.04f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -1.09f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -1.13f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, -1.09f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -1.02f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -2.91f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},

		},

		.indices = { // 1284 values
			0, 1, 2, 3,
			4, 0, 5,
			3, 0, 6,
			0, 2, 7,
			8, 5, 6,
			7, 5, 9,
			10, 6, 2,
			9, 6, 11,
			12, 9, 13,
			11, 9, 1,
			13, 2, 14,
			15, 13, 12,
			16, 17, 12,
			18, 10, 10,
			19, 7, 18,
			20, 19, 19,
			21, 7, 20,
			22, 19, 14,
			23, 24, 25,
			14, 1, 4,
			25, 1, 26,
			27, 4, 26,
			28, 29, 8,
			30, 3, 21,
			31, 8, 21,
			32, 33, 34,
			32, 22, 30,
			26, 3, 0,
			4, 1, 3,
			26, 4, 5,
			8, 3, 6,
			5, 0, 7,
			21, 8, 6,
			10, 7, 9,
			12, 10, 2,
			13, 9, 11,
			35, 12, 13,
			15, 11, 1,
			14, 13, 14,
			24, 15, 12,
			35, 16, 12,
			17, 18, 10,
			18, 19, 18,
			36, 20, 19,
			22, 21, 20,
			34, 22, 14,
			37, 23, 25,
			37, 14, 4,
			27, 25, 26,
			29, 27, 26,
			38, 28, 8,
			31, 30, 21,
			33, 31, 21,
			22, 32, 34,
			39, 32, 30,
			38, 26, 40,
			41, 42, 43,
			44, 45, 44,
			46, 40, 45,
			47, 48, 44,
			49, 47, 49,
			42, 50, 51,
			49, 50, 52,
			47, 49, 52,
			53, 54, 51,
			55, 52, 56,
			57, 55, 53,
			57, 58, 53,
			59, 60, 54,
			60, 61, 61,
			62, 63, 60,
			64, 62, 62,
			65, 63, 64,
			66, 62, 67,
			68, 64, 64,
			69, 67, 70,
			71, 68, 66,
			72, 65, 73,
			65, 72, 74,
			63, 65, 74,
			75, 76, 73,
			77, 74, 77,
			78, 75, 77,
			79, 80, 75,
			43, 45, 76,
			45, 48, 63,
			48, 61, 54,
			48, 47, 66,
			71, 81, 40,
			46, 41, 43,
			82, 44, 44,
			82, 46, 45,
			44, 47, 44,
			40, 49, 49,
			40, 42, 51,
			52, 49, 52,
			54, 47, 52,
			55, 53, 51,
			56, 55, 56,
			83, 57, 53,
			55, 57, 53,
			58, 59, 54,
			53, 60, 61,
			60, 62, 60,
			59, 64, 62,
			66, 65, 64,
			68, 66, 67,
			70, 68, 64,
			59, 69, 70,
			84, 71, 66,
			81, 72, 73,
			74, 65, 74,
			76, 63, 74,
			77, 75, 73,
			85, 77, 77,
			80, 78, 77,
			85, 79, 75,
			78, 43, 76,
			75, 45, 63,
			76, 48, 54,
			61, 48, 66,
			68, 71, 86,
			87, 88, 86,
			89, 90, 88,
			91, 89, 88,
			92, 93, 89,
			94, 90, 95,
			89, 91, 93,
			96, 91, 97,
			91, 96, 98,
			95, 97, 95,
			99, 100, 101,
			102, 98, 103,
			99, 102, 100,
			104, 94, 104,
			99, 105, 106,
			105, 103, 107,
			105, 108, 109,
			108, 110, 110,
			106, 111, 112,
			113, 114, 110,
			114, 113, 111,
			115, 114, 116,
			114, 115, 111,
			117, 118, 118,
			119, 120, 120,
			115, 118, 121,
			120, 122, 119,
			122, 120, 123,
			115, 124, 121,
			123, 124, 125,
			126, 121, 125,
			122, 127, 128,
			129, 125, 128,
			127, 130, 127,
			131, 130, 132,
			127, 122, 133,
			134, 131, 132,
			135, 133, 136,
			132, 119, 137,
			138, 136, 139,
			135, 138, 140,
			137, 141, 140,
			142, 139, 143,
			140, 144, 144,
			141, 145, 146,
			147, 143, 148,
			142, 147, 149,
			134, 148, 149,
			146, 150, 134,
			135, 142, 150,
			151, 152, 146,
			153, 151, 151,
			154, 152, 153,
			155, 151, 156,
			153, 157, 143,
			157, 153, 144,
			158, 157, 159,
			157, 158, 160,
			156, 159, 156,
			161, 162, 163,
			164, 160, 165,
			161, 164, 162,
			166, 155, 166,
			161, 167, 168,
			167, 165, 169,
			167, 170, 171,
			170, 172, 172,
			168, 173, 154,
			166, 169, 154,
			171, 174, 174,
			175, 176, 171,
			177, 175, 175,
			178, 176, 177,
			179, 175, 180,
			177, 181, 172,
			181, 177, 173,
			182, 181, 183,
			181, 182, 173,
			184, 185, 184,
			186, 185, 182,
			186, 187, 188,
			186, 189, 190,
			189, 186, 183,
			187, 191, 188,
			191, 187, 192,
			193, 188, 192,
			189, 194, 195,
			196, 192, 195,
			194, 197, 194,
			198, 197, 199,
			194, 189, 200,
			201, 198, 199,
			202, 200, 203,
			199, 190, 204,
			205, 203, 206,
			202, 205, 92,
			204, 207, 92,
			208, 206, 93,
			207, 209, 209,
			159, 158, 207,
			160, 159, 158,
			96, 209, 201,
			202, 208, 210,
			208, 87, 204,
			163, 160, 203,
			184, 163, 168,
			163, 184, 211,
			212, 196, 213,
			214, 212, 193,
			212, 215, 215,
			214, 216, 193,
			217, 191, 217,
			216, 218, 219,
			220, 221, 222,
			220, 223, 224,
			223, 225, 126,
			226, 123, 225,
			123, 226, 225,
			112, 116, 126,
			227, 228, 229,
			230, 227, 231,
			227, 129, 232,
			229, 233, 234,
			229, 231, 234,
			128, 235, 236,
			234, 237, 237,
			235, 238, 238,
			239, 240, 235,
			130, 239, 239,
			150, 240, 130,
			149, 239, 240,
			152, 241, 241,
			238, 240, 241,
			176, 242, 152,
			174, 241, 242,
			237, 238, 176,
			243, 242, 178,
			244, 243, 243,
			236, 237, 244,
			245, 236, 244,
			246, 247, 245,
			233, 236, 248,
			249, 250, 251,
			252, 249, 250,
			180, 183, 180,
			252, 253, 253,
			254, 179, 255,
			254, 252, 178,
			254, 256, 256,
			255, 246, 250,
			191, 217, 248,
			217, 218, 112,
			220, 257, 97,
			145, 141, 98,
			141, 137, 101,
			137, 136, 117,
			136, 119, 106,
			101, 117, 86,
			210, 87, 86,
			88, 89, 88,
			93, 91, 88,
			87, 92, 89,
			100, 94, 95,
			100, 89, 93,
			209, 96, 97,
			95, 91, 98,
			102, 95, 95,
			102, 99, 101,
			103, 102, 103,
			105, 99, 100,
			99, 104, 106,
			108, 105, 107,
			104, 105, 109,
			107, 108, 110,
			108, 106, 112,
			257, 113, 110,
			111, 114, 111,
			118, 115, 116,
			112, 114, 111,
			106, 117, 118,
			117, 119, 120,
			124, 115, 121,
			124, 120, 119,
			132, 122, 123,
			116, 115, 121,
			126, 123, 125,
			129, 126, 125,
			121, 122, 128,
			231, 129, 128,
			125, 127, 127,
			133, 131, 132,
			133, 127, 133,
			135, 134, 132,
			138, 135, 136,
			138, 132, 137,
			139, 138, 139,
			142, 135, 140,
			139, 137, 140,
			147, 142, 143,
			147, 140, 144,
			140, 141, 146,
			148, 147, 148,
			134, 142, 149,
			131, 134, 149,
			148, 146, 150,
			146, 151, 146,
			143, 153, 151,
			155, 154, 153,
			162, 155, 156,
			162, 153, 143,
			144, 157, 144,
			145, 158, 159,
			156, 157, 160,
			164, 156, 156,
			164, 161, 163,
			165, 164, 165,
			167, 161, 162,
			161, 166, 168,
			170, 167, 169,
			166, 167, 171,
			169, 170, 172,
			170, 168, 154,
			155, 166, 154,
			169, 171, 174,
			171, 175, 171,
			172, 177, 175,
			179, 178, 177,
			253, 179, 180,
			253, 177, 172,
			173, 181, 173,
			185, 182, 183,
			180, 181, 173,
			168, 184, 184,
			190, 186, 182,
			185, 186, 188,
			187, 186, 190,
			199, 189, 183,
			182, 187, 188,
			193, 191, 192,
			196, 193, 192,
			188, 189, 195,
			211, 196, 195,
			192, 194, 194,
			200, 198, 199,
			200, 194, 200,
			202, 201, 199,
			205, 202, 203,
			205, 199, 204,
			206, 205, 206,
			208, 202, 92,
			206, 204, 92,
			87, 208, 93,
			92, 207, 209,
			207, 159, 207,
			204, 160, 158,
			145, 96, 210,
			201, 208, 204,
			203, 163, 203,
			190, 184, 168,
			165, 163, 211,
			213, 212, 193,
			196, 212, 215,
			212, 214, 193,
			215, 217, 217,
			215, 216, 222,
			221, 220, 224,
			222, 223, 126,
			228, 226, 225,
			116, 123, 225,
			223, 112, 126,
			129, 227, 231,
			229, 227, 232,
			230, 229, 234,
			233, 229, 234,
			231, 128, 236,
			233, 234, 237,
			234, 235, 238,
			235, 239, 235,
			128, 130, 239,
			149, 150, 130,
			131, 149, 240,
			150, 152, 241,
			242, 238, 241,
			174, 176, 152,
			154, 174, 242,
			243, 237, 176,
			178, 243, 178,
			256, 244, 243,
			244, 236, 244,
			247, 245, 244,
			256, 246, 245,
			232, 233, 248,
			251, 249, 251,
			255, 252, 250,
			249, 180, 180,
			249, 252, 253,
			252, 254, 178,
			179, 254, 256,
			254, 255, 250,
			183, 191, 248,
			250, 217, 112,
			223, 220, 97,
			96, 145, 98,
			97, 141, 101,
			98, 137, 117,
			101, 136, 106,
			103, 101,
		},
	},
	{
		.name = "DEFAULT_Cube.004",
		.colors = { game::DEFAULT },
		.vertices = { // 216 vertex
			VertexData{
				.position = { -0.91f, -0.99f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -0.97f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -1.00f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -1.00f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -0.99f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -0.99f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -0.99f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -1.00f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -0.99f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -0.99f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -0.99f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -0.99f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -0.98f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -0.99f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -0.98f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -0.97f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -0.95f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -0.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -0.94f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -0.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -0.87f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -0.94f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.70f, -0.70f, +0.14f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -0.87f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -0.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -0.91f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, -0.91f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -0.96f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -0.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -0.97f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, -0.87f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -0.94f, -0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.96f, -0.94f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, -0.94f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -0.97f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, -0.98f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, -0.95f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, -0.98f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -0.91f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, -0.87f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -0.97f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, -0.94f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -0.96f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, -0.95f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -0.91f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, -0.87f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -0.91f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.96f, +0.94f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, +0.87f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -0.87f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, +0.87f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +0.91f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +0.91f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +0.87f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +0.87f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +0.91f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, +0.94f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, +0.95f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, +0.98f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, +0.95f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, +0.98f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, +0.94f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.96f, +0.94f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, +0.91f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +0.97f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +0.99f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +0.91f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +0.91f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +0.94f, -0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, +0.87f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, +0.87f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +0.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +0.94f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +0.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +0.97f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +0.87f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, -0.87f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +0.96f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +0.95f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +0.99f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +0.98f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +0.98f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +0.99f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +0.97f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +0.94f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, +0.98f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +0.95f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +0.87f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +0.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +0.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +0.91f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, +0.91f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +0.96f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +0.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -0.99f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, +0.87f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +0.94f, -0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.96f, +0.94f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, +0.94f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +0.97f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +0.99f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, +0.95f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +0.99f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +0.91f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, +0.87f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, +0.98f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +0.99f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +0.97f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, +0.94f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +0.98f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, +0.95f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +0.91f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, +0.87f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +0.91f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -0.87f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, -0.87f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +0.87f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, -0.87f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -0.91f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -0.87f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -0.91f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -0.87f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -0.91f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, -0.94f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, -0.95f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, -0.98f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, -0.95f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, -0.98f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, -0.94f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.96f, -0.94f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, -0.91f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -0.97f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, +0.87f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -0.91f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -0.91f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -0.94f, -0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, -0.87f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, -0.87f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -0.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -0.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -0.96f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -0.95f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -0.96f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -0.97f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -0.99f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, -0.91f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -0.95f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -0.94f, +0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.96f, -0.94f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, -0.87f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, -0.87f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -0.91f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -0.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -0.87f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -0.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -0.94f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +0.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -0.98f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -0.95f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -0.97f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -0.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -0.87f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -0.94f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -0.98f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.96f, -0.94f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -0.99f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -0.91f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -0.91f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -0.94f, +0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, -0.87f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -0.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, -0.91f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -0.87f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -0.87f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +0.87f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +0.87f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +0.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +0.91f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +0.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, +0.87f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, +0.91f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, +0.87f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, -0.87f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +0.96f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +0.94f, +0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +0.97f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +0.99f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +0.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +0.97f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +0.99f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +1.00f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +0.95f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +0.99f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +0.99f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +1.00f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +1.00f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +1.00f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +0.99f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +0.99f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +0.95f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +0.94f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +0.91f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +0.97f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +0.87f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +0.94f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +0.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +0.87f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +0.94f, +0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, +0.91f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, +0.87f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, +0.87f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.96f, +0.94f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +0.96f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +0.91f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +0.87f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +0.98f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},

		},

		.indices = { // 1284 values
			0, 1, 2, 3,
			4, 0, 5,
			3, 0, 6,
			0, 2, 7,
			8, 5, 6,
			7, 5, 9,
			10, 6, 2,
			9, 6, 11,
			12, 9, 13,
			11, 9, 1,
			13, 2, 14,
			15, 13, 15,
			16, 17, 15,
			18, 11, 17,
			19, 18, 17,
			20, 21, 18,
			22, 11, 23,
			18, 19, 21,
			24, 19, 25,
			19, 24, 26,
			23, 25, 23,
			27, 28, 29,
			30, 26, 31,
			27, 30, 28,
			32, 22, 32,
			27, 33, 34,
			33, 31, 35,
			33, 36, 37,
			36, 38, 38,
			34, 39, 12,
			32, 35, 12,
			37, 10, 10,
			40, 7, 37,
			41, 40, 40,
			42, 7, 41,
			43, 40, 44,
			41, 45, 38,
			45, 41, 39,
			46, 45, 47,
			45, 46, 39,
			48, 49, 49,
			50, 51, 51,
			46, 49, 52,
			51, 53, 50,
			53, 51, 47,
			54, 55, 52,
			55, 54, 56,
			57, 52, 56,
			53, 58, 59,
			60, 56, 59,
			58, 61, 58,
			62, 61, 63,
			58, 53, 64,
			65, 62, 63,
			66, 64, 67,
			63, 50, 68,
			69, 67, 70,
			66, 69, 71,
			68, 72, 71,
			73, 70, 74,
			71, 75, 75,
			72, 76, 77,
			78, 74, 79,
			73, 78, 80,
			65, 79, 80,
			77, 81, 65,
			66, 73, 81,
			82, 83, 77,
			84, 82, 82,
			85, 83, 84,
			86, 82, 87,
			84, 88, 74,
			88, 84, 75,
			89, 88, 90,
			88, 89, 91,
			87, 90, 87,
			92, 93, 94,
			95, 91, 96,
			92, 95, 93,
			97, 86, 97,
			92, 98, 99,
			98, 96, 100,
			98, 101, 102,
			101, 103, 103,
			99, 104, 85,
			97, 100, 85,
			102, 105, 105,
			106, 107, 102,
			108, 106, 106,
			109, 107, 108,
			110, 106, 111,
			108, 112, 103,
			112, 108, 104,
			113, 112, 114,
			112, 113, 104,
			115, 116, 117,
			116, 115, 113,
			118, 119, 120,
			118, 121, 117,
			121, 118, 114,
			119, 122, 120,
			122, 119, 123,
			124, 120, 123,
			121, 125, 126,
			127, 123, 126,
			125, 128, 125,
			129, 128, 130,
			125, 121, 131,
			132, 129, 130,
			133, 131, 134,
			130, 117, 135,
			136, 134, 137,
			133, 136, 20,
			135, 138, 20,
			139, 137, 21,
			138, 140, 140,
			90, 89, 138,
			91, 90, 89,
			24, 140, 132,
			133, 139, 141,
			139, 16, 14,
			132, 141, 135,
			94, 91, 134,
			115, 94, 99,
			94, 115, 128,
			14, 1, 4,
			128, 1, 142,
			126, 4, 142,
			143, 144, 144,
			145, 127, 146,
			143, 147, 143,
			148, 145, 124,
			145, 149, 149,
			148, 150, 124,
			151, 122, 151,
			150, 152, 152,
			153, 154, 153,
			148, 146, 154,
			155, 156, 153,
			157, 155, 157,
			147, 158, 159,
			157, 158, 160,
			155, 157, 160,
			161, 162, 159,
			163, 160, 8,
			158, 3, 42,
			159, 8, 42,
			164, 165, 165,
			166, 163, 167,
			164, 43, 164,
			168, 166, 161,
			166, 169, 169,
			168, 170, 161,
			171, 172, 171,
			170, 173, 162,
			172, 174, 174,
			175, 176, 172,
			177, 175, 175,
			178, 176, 177,
			179, 175, 180,
			181, 177, 171,
			180, 177, 57,
			180, 55, 173,
			55, 180, 173,
			44, 47, 182,
			183, 181, 57,
			184, 182, 185,
			183, 184, 186,
			184, 60, 187,
			185, 188, 189,
			185, 186, 189,
			59, 190, 191,
			189, 192, 192,
			190, 193, 193,
			194, 195, 190,
			61, 194, 194,
			81, 195, 61,
			80, 194, 195,
			83, 196, 196,
			193, 195, 196,
			107, 197, 83,
			105, 196, 197,
			192, 193, 107,
			198, 197, 109,
			199, 198, 198,
			191, 192, 199,
			200, 191, 199,
			201, 202, 200,
			188, 191, 179,
			200, 178, 202,
			178, 200, 203,
			176, 178, 203,
			204, 205, 202,
			206, 203, 206,
			207, 204, 206,
			208, 209, 207,
			210, 211, 209,
			212, 210, 211,
			111, 114, 111,
			212, 213, 213,
			214, 110, 208,
			214, 212, 109,
			214, 215, 215,
			208, 201, 211,
			122, 151, 207,
			151, 152, 204,
			152, 154, 205,
			154, 156, 176,
			156, 174, 162,
			156, 155, 179,
			183, 187, 44,
			168, 167, 158,
			142, 3, 25,
			76, 72, 26,
			72, 68, 29,
			68, 67, 48,
			67, 50, 34,
			29, 48, 0,
			4, 1, 3,
			142, 4, 5,
			8, 3, 6,
			5, 0, 7,
			42, 8, 6,
			10, 7, 9,
			12, 10, 2,
			13, 9, 11,
			22, 12, 13,
			15, 11, 1,
			14, 13, 14,
			141, 15, 15,
			141, 16, 15,
			17, 18, 17,
			21, 19, 17,
			16, 20, 18,
			28, 22, 23,
			28, 18, 21,
			140, 24, 25,
			23, 19, 26,
			30, 23, 23,
			30, 27, 29,
			31, 30, 31,
			33, 27, 28,
			27, 32, 34,
			36, 33, 35,
			32, 33, 37,
			35, 36, 38,
			36, 34, 12,
			22, 32, 12,
			35, 37, 10,
			37, 40, 37,
			38, 41, 40,
			43, 42, 41,
			167, 43, 44,
			167, 41, 38,
			39, 45, 39,
			49, 46, 47,
			44, 45, 39,
			34, 48, 49,
			48, 50, 51,
			54, 46, 52,
			54, 51, 50,
			63, 53, 47,
			46, 54, 52,
			57, 55, 56,
			60, 57, 56,
			52, 53, 59,
			186, 60, 59,
			56, 58, 58,
			64, 62, 63,
			64, 58, 64,
			66, 65, 63,
			69, 66, 67,
			69, 63, 68,
			70, 69, 70,
			73, 66, 71,
			70, 68, 71,
			78, 73, 74,
			78, 71, 75,
			71, 72, 77,
			79, 78, 79,
			65, 73, 80,
			62, 65, 80,
			79, 77, 81,
			77, 82, 77,
			74, 84, 82,
			86, 85, 84,
			93, 86, 87,
			93, 84, 74,
			75, 88, 75,
			76, 89, 90,
			87, 88, 91,
			95, 87, 87,
			95, 92, 94,
			96, 95, 96,
			98, 92, 93,
			92, 97, 99,
			101, 98, 100,
			97, 98, 102,
			100, 101, 103,
			101, 99, 85,
			86, 97, 85,
			100, 102, 105,
			102, 106, 102,
			103, 108, 106,
			110, 109, 108,
			213, 110, 111,
			213, 108, 103,
			104, 112, 104,
			116, 113, 114,
			111, 112, 104,
			99, 115, 117,
			118, 116, 113,
			116, 118, 120,
			119, 118, 117,
			130, 121, 114,
			113, 119, 120,
			124, 122, 123,
			127, 124, 123,
			120, 121, 126,
			144, 127, 126,
			123, 125, 125,
			131, 129, 130,
			131, 125, 131,
			133, 132, 130,
			136, 133, 134,
			136, 130, 135,
			137, 136, 137,
			139, 133, 20,
			137, 135, 20,
			16, 139, 21,
			20, 138, 140,
			138, 90, 138,
			135, 91, 89,
			76, 24, 141,
			132, 139, 14,
			129, 132, 135,
			134, 94, 134,
			117, 115, 99,
			96, 94, 128,
			129, 14, 4,
			126, 128, 142,
			144, 126, 142,
			147, 143, 144,
			143, 145, 146,
			148, 143, 124,
			127, 145, 149,
			145, 148, 124,
			149, 151, 151,
			149, 150, 152,
			150, 153, 153,
			150, 148, 154,
			153, 155, 153,
			146, 157, 157,
			146, 147, 159,
			160, 157, 160,
			162, 155, 160,
			163, 161, 159,
			165, 163, 8,
			159, 158, 42,
			165, 159, 42,
			43, 164, 165,
			164, 166, 167,
			168, 164, 161,
			163, 166, 169,
			166, 168, 161,
			169, 171, 171,
			169, 170, 162,
			161, 172, 174,
			172, 175, 172,
			171, 177, 175,
			179, 178, 177,
			181, 179, 180,
			182, 181, 171,
			173, 180, 57,
			182, 180, 173,
			47, 55, 173,
			170, 44, 182,
			184, 183, 57,
			60, 184, 186,
			185, 184, 187,
			183, 185, 189,
			188, 185, 189,
			186, 59, 191,
			188, 189, 192,
			189, 190, 193,
			190, 194, 190,
			59, 61, 194,
			80, 81, 61,
			62, 80, 195,
			81, 83, 196,
			197, 193, 196,
			105, 107, 83,
			85, 105, 197,
			198, 192, 107,
			109, 198, 109,
			215, 199, 198,
			199, 191, 199,
			202, 200, 199,
			215, 201, 200,
			187, 188, 179,
			187, 200, 202,
			203, 178, 203,
			205, 176, 203,
			206, 204, 202,
			201, 206, 206,
			209, 207, 206,
			201, 208, 207,
			209, 210, 209,
			208, 212, 211,
			210, 111, 111,
			210, 212, 213,
			212, 214, 109,
			110, 214, 215,
			214, 208, 211,
			114, 122, 207,
			211, 151, 204,
			207, 152, 205,
			204, 154, 176,
			205, 156, 162,
			174, 156, 179,
			181, 183, 44,
			170, 168, 158,
			147, 142, 25,
			24, 76, 26,
			25, 72, 29,
			26, 68, 48,
			29, 67, 34,
			31, 29,
		},
	},
	{
		.name = "RED_Cube.005",
		.colors = { game::RED },
		.vertices = { // 240 vertex
			VertexData{
				.position = { -0.87f, -0.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.87f, -0.87f, -3.00f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.91f, -0.94f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.91f, -0.87f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.91f, -0.94f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.91f, -0.87f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.91f, -0.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.94f, -0.91f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.97f, -0.91f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.94f, -0.96f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.87f, -0.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.91f, -0.97f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.95f, -0.87f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.94f, -0.94f, -2.96f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.87f, +0.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.94f, +0.94f, -2.96f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.91f, +0.94f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.91f, +0.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.95f, +0.87f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.91f, +0.97f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.91f, +0.87f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.98f, -0.87f, -2.95f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.91f, +0.87f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.91f, +0.94f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.87f, +0.87f, -3.00f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.91f, +0.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.94f, +0.91f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.97f, +0.91f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.94f, +0.96f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.87f, +0.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.91f, -0.99f, -2.87f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.95f, +0.87f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.94f, +0.94f, -2.96f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.94f, -0.94f, -2.96f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.87f, -0.87f, -3.00f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.91f, -0.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.95f, -0.87f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.94f, -0.96f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.87f, -0.95f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.97f, -0.94f, -2.91f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.87f, +0.95f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.97f, +0.94f, -2.91f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.94f, -0.91f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.91f, -0.99f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -0.97f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -1.00f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -1.00f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -0.99f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -0.99f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -0.99f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -1.00f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -0.99f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -0.99f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -0.99f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -0.99f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -0.98f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -0.99f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -0.98f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -0.97f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -0.95f, -2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -0.91f, -2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -0.94f, -2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.89f, +0.00f, -0.45f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -0.91f, -2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.96f, -0.94f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -0.96f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, -0.94f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -0.97f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -0.94f, -2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, -0.98f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, -0.95f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, -0.98f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -0.91f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, -0.87f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -0.97f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, -0.94f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -0.96f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, -0.95f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -0.91f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, -0.87f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -0.91f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.96f, +0.94f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, +0.87f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -0.87f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, +0.87f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +0.91f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +0.91f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +0.87f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +0.87f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +0.91f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, +0.94f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, +0.95f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, +0.98f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, +0.95f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, +0.98f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, +0.94f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.96f, +0.94f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, +0.91f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +0.97f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +0.99f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +0.91f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +0.91f, -2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +0.94f, -2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, +0.87f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, +0.87f, -2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +0.96f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +0.95f, -2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +0.97f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +0.99f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +0.91f, -2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +0.98f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +0.98f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +0.99f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +0.97f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +0.94f, -2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, +0.98f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +0.95f, -2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +0.91f, -2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.96f, +0.94f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +0.96f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, +0.94f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +0.97f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +0.94f, -2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +0.99f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, +0.95f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +0.99f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +0.91f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, +0.87f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, +0.98f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +0.99f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +0.97f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, +0.94f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +0.98f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, +0.95f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +0.91f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, +0.87f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +0.91f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -0.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, -0.87f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +0.87f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, -0.87f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -0.91f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -0.87f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -0.91f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -0.87f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -0.91f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, -0.94f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, -0.95f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, -0.98f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, -0.95f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, -0.98f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, -0.94f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.96f, -0.94f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, -0.91f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -0.97f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, +0.87f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -0.91f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -0.91f, -2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -0.94f, -2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, -0.87f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, -0.87f, -2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -0.91f, -2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -0.95f, -2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -0.99f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -0.96f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -0.97f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -0.99f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, -0.91f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -0.95f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -0.94f, -1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.96f, -0.94f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, -0.87f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, -0.87f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -0.91f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -0.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -0.87f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -0.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -0.94f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +0.87f, -3.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -0.98f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -0.95f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -0.97f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -0.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -0.87f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -0.94f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -0.98f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.96f, -0.94f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -0.99f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -0.91f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -0.91f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -0.94f, -1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, -0.87f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -0.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, -0.91f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -0.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -0.87f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +0.87f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +0.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +0.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +0.91f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +0.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, +0.87f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, +0.91f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, +0.87f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, -0.87f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +0.96f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +0.94f, -1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +0.97f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +0.99f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +0.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +0.97f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +0.99f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +1.00f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +0.95f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +0.99f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +0.99f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +1.00f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +1.00f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +1.00f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +0.99f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +0.99f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +0.95f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +0.94f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +0.91f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +0.97f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +0.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +0.94f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +0.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +0.87f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +0.94f, -1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, +0.91f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, +0.87f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, +0.87f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.96f, +0.94f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +0.96f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +0.91f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +0.87f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +0.98f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -0.97f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, -0.91f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},

		},

		.indices = { // 1284 values
			0, 1, 2, 0,
			3, 4, 5,
			2, 1, 4,
			6, 1, 7,
			1, 6, 8,
			5, 7, 5,
			9, 10, 11,
			12, 8, 13,
			9, 12, 14,
			15, 16, 14,
			17, 18, 19,
			14, 20, 20,
			16, 21, 22,
			23, 24, 19,
			24, 23, 20,
			25, 24, 26,
			24, 25, 27,
			22, 26, 22,
			28, 29, 30,
			31, 27, 32,
			28, 31, 3,
			33, 34, 3,
			35, 36, 4,
			34, 37, 37,
			26, 25, 34,
			27, 26, 25,
			6, 37, 33,
			30, 27, 7,
			21, 16, 8,
			16, 15, 0,
			4, 1, 0,
			38, 3, 5,
			10, 2, 4,
			37, 6, 7,
			5, 1, 8,
			12, 5, 5,
			12, 9, 11,
			13, 12, 13,
			39, 9, 14,
			18, 15, 14,
			40, 17, 19,
			40, 14, 20,
			14, 16, 22,
			29, 23, 19,
			20, 24, 20,
			21, 25, 26,
			22, 24, 27,
			31, 22, 22,
			31, 28, 30,
			32, 31, 32,
			41, 28, 3,
			36, 33, 3,
			38, 35, 4,
			3, 34, 37,
			34, 26, 34,
			33, 27, 25,
			21, 6, 33,
			42, 30, 7,
			6, 21, 8,
			7, 16, 43,
			44, 45, 46,
			47, 43, 48,
			46, 43, 49,
			43, 45, 50,
			51, 48, 49,
			50, 48, 52,
			53, 49, 45,
			52, 49, 54,
			55, 52, 56,
			54, 52, 44,
			56, 45, 57,
			58, 56, 58,
			59, 60, 58,
			61, 54, 61,
			62, 54, 63,
			64, 62, 64,
			65, 66, 67,
			66, 68, 69,
			66, 70, 71,
			70, 72, 72,
			67, 73, 55,
			64, 69, 55,
			71, 53, 53,
			74, 50, 71,
			75, 74, 74,
			76, 50, 75,
			77, 74, 78,
			75, 79, 72,
			79, 75, 73,
			80, 79, 81,
			79, 80, 73,
			82, 83, 83,
			84, 85, 85,
			80, 83, 86,
			85, 87, 84,
			87, 85, 81,
			88, 89, 86,
			89, 88, 90,
			91, 86, 90,
			87, 92, 93,
			94, 90, 93,
			92, 95, 92,
			96, 95, 97,
			92, 87, 98,
			99, 96, 97,
			100, 98, 101,
			97, 84, 102,
			103, 101, 104,
			100, 103, 105,
			106, 107, 108,
			109, 106, 110,
			99, 108, 110,
			105, 111, 99,
			100, 109, 111,
			112, 113, 105,
			114, 112, 112,
			115, 113, 114,
			116, 112, 117,
			118, 116, 118,
			119, 120, 121,
			120, 122, 123,
			120, 124, 125,
			124, 126, 126,
			121, 127, 115,
			118, 123, 115,
			125, 128, 128,
			129, 130, 125,
			131, 129, 129,
			132, 130, 131,
			133, 129, 134,
			131, 135, 126,
			135, 131, 127,
			136, 135, 137,
			135, 136, 127,
			138, 139, 140,
			139, 138, 136,
			141, 142, 143,
			141, 144, 140,
			144, 141, 137,
			142, 145, 143,
			145, 142, 146,
			147, 143, 146,
			144, 148, 149,
			150, 146, 149,
			148, 151, 148,
			152, 151, 153,
			148, 144, 154,
			155, 152, 153,
			156, 154, 157,
			153, 140, 158,
			159, 157, 160,
			156, 159, 155,
			156, 161, 162,
			161, 59, 57,
			155, 162, 157,
			138, 163, 121,
			163, 138, 151,
			57, 44, 47,
			151, 44, 164,
			149, 47, 164,
			165, 166, 166,
			167, 150, 168,
			165, 169, 165,
			170, 167, 147,
			167, 171, 171,
			170, 172, 147,
			173, 145, 173,
			172, 174, 174,
			175, 176, 175,
			170, 168, 176,
			177, 178, 175,
			179, 177, 179,
			169, 180, 181,
			179, 180, 182,
			177, 179, 182,
			183, 184, 181,
			185, 182, 51,
			180, 46, 76,
			181, 51, 76,
			186, 187, 187,
			188, 185, 189,
			186, 77, 186,
			190, 188, 183,
			188, 191, 191,
			190, 192, 183,
			193, 194, 193,
			192, 195, 184,
			194, 196, 196,
			197, 198, 194,
			199, 197, 197,
			200, 198, 199,
			201, 197, 202,
			203, 199, 193,
			202, 199, 91,
			202, 89, 195,
			89, 202, 195,
			78, 81, 204,
			205, 203, 91,
			206, 204, 207,
			205, 206, 208,
			206, 94, 209,
			207, 210, 211,
			207, 208, 211,
			93, 212, 213,
			211, 214, 214,
			212, 215, 215,
			216, 217, 212,
			95, 216, 216,
			111, 217, 95,
			110, 216, 217,
			113, 218, 218,
			215, 217, 218,
			130, 219, 113,
			128, 218, 219,
			214, 215, 130,
			220, 219, 132,
			221, 220, 220,
			213, 214, 221,
			222, 213, 221,
			223, 224, 222,
			210, 213, 201,
			222, 200, 224,
			200, 222, 225,
			198, 200, 225,
			226, 227, 224,
			228, 225, 228,
			229, 226, 228,
			230, 231, 229,
			232, 233, 231,
			234, 232, 233,
			134, 137, 134,
			234, 235, 235,
			236, 133, 230,
			236, 234, 132,
			236, 237, 237,
			230, 223, 233,
			145, 173, 229,
			173, 174, 226,
			174, 176, 227,
			176, 178, 198,
			178, 196, 184,
			178, 177, 201,
			205, 209, 78,
			190, 189, 180,
			164, 46, 238,
			102, 101, 82,
			101, 84, 67,
			238, 82, 43,
			47, 44, 46,
			164, 47, 48,
			51, 46, 49,
			48, 43, 50,
			76, 51, 49,
			53, 50, 52,
			55, 53, 45,
			56, 52, 54,
			62, 55, 56,
			58, 54, 44,
			57, 56, 57,
			162, 58, 58,
			162, 59, 58,
			60, 61, 61,
			63, 62, 63,
			65, 64, 67,
			70, 66, 69,
			64, 66, 71,
			69, 70, 72,
			70, 67, 55,
			62, 64, 55,
			69, 71, 53,
			71, 74, 71,
			72, 75, 74,
			77, 76, 75,
			189, 77, 78,
			189, 75, 72,
			73, 79, 73,
			83, 80, 81,
			78, 79, 73,
			67, 82, 83,
			82, 84, 85,
			88, 80, 86,
			88, 85, 84,
			97, 87, 81,
			80, 88, 86,
			91, 89, 90,
			94, 91, 90,
			86, 87, 93,
			208, 94, 93,
			90, 92, 92,
			98, 96, 97,
			98, 92, 98,
			100, 99, 97,
			103, 100, 101,
			103, 97, 102,
			104, 103, 104,
			109, 100, 105,
			108, 106, 108,
			99, 109, 110,
			96, 99, 110,
			108, 105, 111,
			105, 112, 105,
			107, 114, 112,
			116, 115, 114,
			117, 116, 117,
			119, 118, 121,
			124, 120, 123,
			118, 120, 125,
			123, 124, 126,
			124, 121, 115,
			116, 118, 115,
			123, 125, 128,
			125, 129, 125,
			126, 131, 129,
			133, 132, 131,
			235, 133, 134,
			235, 131, 126,
			127, 135, 127,
			139, 136, 137,
			134, 135, 127,
			121, 138, 140,
			141, 139, 136,
			139, 141, 143,
			142, 141, 140,
			153, 144, 137,
			136, 142, 143,
			147, 145, 146,
			150, 147, 146,
			143, 144, 149,
			166, 150, 149,
			146, 148, 148,
			154, 152, 153,
			154, 148, 154,
			156, 155, 153,
			159, 156, 157,
			159, 153, 158,
			160, 159, 160,
			161, 156, 162,
			155, 161, 57,
			152, 155, 157,
			140, 138, 121,
			122, 163, 151,
			152, 57, 47,
			149, 151, 164,
			166, 149, 164,
			169, 165, 166,
			165, 167, 168,
			170, 165, 147,
			150, 167, 171,
			167, 170, 147,
			171, 173, 173,
			171, 172, 174,
			172, 175, 175,
			172, 170, 176,
			175, 177, 175,
			168, 179, 179,
			168, 169, 181,
			182, 179, 182,
			184, 177, 182,
			185, 183, 181,
			187, 185, 51,
			181, 180, 76,
			187, 181, 76,
			77, 186, 187,
			186, 188, 189,
			190, 186, 183,
			185, 188, 191,
			188, 190, 183,
			191, 193, 193,
			191, 192, 184,
			183, 194, 196,
			194, 197, 194,
			193, 199, 197,
			201, 200, 199,
			203, 201, 202,
			204, 203, 193,
			195, 202, 91,
			204, 202, 195,
			81, 89, 195,
			192, 78, 204,
			206, 205, 91,
			94, 206, 208,
			207, 206, 209,
			205, 207, 211,
			210, 207, 211,
			208, 93, 213,
			210, 211, 214,
			211, 212, 215,
			212, 216, 212,
			93, 95, 216,
			110, 111, 95,
			96, 110, 217,
			111, 113, 218,
			219, 215, 218,
			128, 130, 113,
			115, 128, 219,
			220, 214, 130,
			132, 220, 132,
			237, 221, 220,
			221, 213, 221,
			224, 222, 221,
			237, 223, 222,
			209, 210, 201,
			209, 222, 224,
			225, 200, 225,
			227, 198, 225,
			228, 226, 224,
			223, 228, 228,
			231, 229, 228,
			223, 230, 229,
			231, 232, 231,
			230, 234, 233,
			232, 134, 134,
			232, 234, 235,
			234, 236, 132,
			133, 236, 237,
			236, 230, 233,
			137, 145, 229,
			233, 173, 226,
			229, 174, 227,
			226, 176, 198,
			227, 178, 184,
			196, 178, 201,
			203, 205, 78,
			192, 190, 180,
			169, 164, 238,
			239, 102, 82,
			238, 101, 67,
			68, 238,
		},
	},
	{
		.name = "ORANGE_Cube.006",
		.colors = { game::ORANGE },
		.vertices = { // 238 vertex
			VertexData{
				.position = { -0.91f, -0.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.91f, -0.87f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.87f, -0.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.96f, -0.94f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.87f, -0.95f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.91f, -0.94f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.87f, +0.87f, +1.00f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.87f, -0.98f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.87f, -0.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.91f, -0.87f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.91f, -0.94f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.94f, -0.91f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.95f, -0.87f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.97f, -0.91f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.87f, -0.87f, +3.00f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.91f, +0.87f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.87f, +0.87f, +3.00f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.91f, +0.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.94f, +0.91f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.87f, +0.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.95f, +0.87f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.97f, +0.91f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.98f, +0.87f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.98f, -0.87f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.94f, +0.96f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.91f, +0.94f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.91f, +0.97f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.87f, +0.87f, +3.00f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.91f, +0.94f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.91f, +0.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.91f, +0.87f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.94f, +0.94f, +2.96f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.97f, +0.91f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.95f, +0.87f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.87f, +0.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.95f, -0.87f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.87f, -0.98f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.99f, -0.87f, +2.91f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.94f, +0.94f, +2.96f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.94f, +0.91f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.91f, -0.99f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -0.97f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -1.00f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -1.00f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -0.99f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -0.99f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -0.99f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -1.00f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -0.99f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -0.99f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -0.99f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -0.99f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -0.98f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -0.99f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -0.98f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -0.97f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -0.95f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -0.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -0.94f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -0.87f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -0.87f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -0.94f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.41f, -0.65f, +0.65f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -0.87f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -0.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -0.91f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, -0.91f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -0.96f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -0.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -0.97f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, -0.87f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -0.94f, +1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.96f, -0.94f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, -0.94f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -0.97f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, -0.98f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, -0.95f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, -0.98f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -0.91f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, -0.87f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -0.97f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, -0.94f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -0.96f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, -0.95f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -0.91f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, -0.87f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -0.91f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.96f, +0.94f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, +0.87f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -0.87f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, +0.87f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +0.91f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +0.91f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +0.87f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +0.87f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +0.91f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, +0.94f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, +0.95f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, +0.98f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, +0.95f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, +0.98f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, +0.94f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.96f, +0.94f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, +0.91f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +0.97f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +0.99f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +0.91f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +0.91f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +0.94f, +1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, +0.87f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, +0.87f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +0.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +0.94f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +0.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +0.97f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +0.87f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, -0.87f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +0.96f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +0.95f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +0.99f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +0.98f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +0.98f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +0.99f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +0.97f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +0.94f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, +0.98f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +0.95f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +0.87f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +0.87f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +0.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +0.91f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, +0.91f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +0.96f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +0.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -0.99f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, +0.87f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +0.94f, +1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.96f, +0.94f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, +0.94f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +0.97f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +0.99f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, +0.95f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +0.99f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +0.91f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, +0.87f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, +0.98f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +0.99f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +0.97f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, +0.94f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +0.98f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, +0.95f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +0.91f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, +0.87f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +0.91f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -0.87f, +3.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, -0.87f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +0.87f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, -0.87f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -0.91f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -0.87f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -0.91f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -0.87f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -0.91f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, -0.94f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, -0.95f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, -0.98f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, -0.95f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, -0.98f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, -0.94f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.96f, -0.94f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, -0.91f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -0.97f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, +0.87f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, -0.91f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -0.91f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -0.94f, +1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, -0.87f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, -0.87f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -0.87f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -0.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -0.96f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -0.95f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -0.96f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -0.97f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -0.99f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, -0.91f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -0.95f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -0.94f, +2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.96f, -0.94f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, -0.87f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, -0.87f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, -0.91f, +2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, -0.91f, +2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, -0.98f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -0.95f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -0.97f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -0.98f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, -0.91f, +2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.96f, -0.94f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -0.99f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -0.91f, +2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -0.91f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, -0.94f, +2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, -0.87f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, -0.91f, +2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, -0.91f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, -0.87f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, +0.91f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +0.94f, +2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, -0.87f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +0.97f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +0.96f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +0.99f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +0.91f, +2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +0.97f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +0.99f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +1.00f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +0.95f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +0.99f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +0.99f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +1.00f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +1.00f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +1.00f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +0.99f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +0.99f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +0.95f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +0.94f, +2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +0.91f, +2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +0.97f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +0.94f, +2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, +0.87f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.96f, +0.94f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, +0.87f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +0.96f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +0.91f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +0.87f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, +0.91f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +0.98f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},

		},

		.indices = { // 1284 values
			0, 1, 2, 1,
			3, 4, 2,
			5, 6, 1,
			7, 5, 8,
			5, 7, 8,
			9, 10, 9,
			11, 12, 9,
			13, 14, 10,
			14, 15, 15,
			16, 17, 14,
			18, 16, 16,
			19, 17, 18,
			20, 16, 21,
			22, 18, 13,
			21, 18, 23,
			24, 22, 20,
			25, 19, 26,
			19, 25, 27,
			17, 19, 27,
			28, 29, 26,
			30, 27, 30,
			31, 28, 30,
			32, 33, 28,
			0, 2, 29,
			2, 6, 17,
			6, 15, 10,
			6, 5, 20,
			24, 34, 0,
			35, 1, 1,
			35, 3, 2,
			1, 5, 1,
			4, 7, 8,
			10, 5, 8,
			36, 9, 9,
			36, 11, 9,
			12, 13, 10,
			9, 14, 15,
			14, 16, 14,
			13, 18, 16,
			20, 19, 18,
			22, 20, 21,
			23, 22, 13,
			37, 21, 23,
			38, 24, 20,
			34, 25, 26,
			27, 19, 27,
			29, 17, 27,
			30, 28, 26,
			39, 30, 30,
			33, 31, 30,
			39, 32, 28,
			31, 0, 29,
			28, 2, 17,
			29, 6, 10,
			15, 6, 20,
			22, 24, 40,
			41, 42, 43,
			44, 40, 45,
			43, 40, 46,
			40, 42, 47,
			48, 45, 46,
			47, 45, 49,
			50, 46, 42,
			49, 46, 51,
			52, 49, 53,
			51, 49, 41,
			53, 42, 54,
			55, 53, 55,
			56, 57, 55,
			58, 51, 57,
			59, 58, 57,
			60, 61, 58,
			62, 51, 63,
			58, 59, 61,
			64, 59, 65,
			59, 64, 66,
			63, 65, 63,
			67, 68, 69,
			70, 66, 71,
			67, 70, 68,
			72, 62, 72,
			67, 73, 74,
			73, 71, 75,
			73, 76, 77,
			76, 78, 78,
			74, 79, 52,
			72, 75, 52,
			77, 50, 50,
			80, 47, 77,
			81, 80, 80,
			82, 47, 81,
			83, 80, 84,
			81, 85, 78,
			85, 81, 79,
			86, 85, 87,
			85, 86, 79,
			88, 89, 89,
			90, 91, 91,
			86, 89, 92,
			91, 93, 90,
			93, 91, 87,
			94, 95, 92,
			95, 94, 96,
			97, 92, 96,
			93, 98, 99,
			100, 96, 99,
			98, 101, 98,
			102, 101, 103,
			98, 93, 104,
			105, 102, 103,
			106, 104, 107,
			103, 90, 108,
			109, 107, 110,
			106, 109, 111,
			108, 112, 111,
			113, 110, 114,
			111, 115, 115,
			112, 116, 117,
			118, 114, 119,
			113, 118, 120,
			105, 119, 120,
			117, 121, 105,
			106, 113, 121,
			122, 123, 117,
			124, 122, 122,
			125, 123, 124,
			126, 122, 127,
			124, 128, 114,
			128, 124, 115,
			129, 128, 130,
			128, 129, 131,
			127, 130, 127,
			132, 133, 134,
			135, 131, 136,
			132, 135, 133,
			137, 126, 137,
			132, 138, 139,
			138, 136, 140,
			138, 141, 142,
			141, 143, 143,
			139, 144, 125,
			137, 140, 125,
			142, 145, 145,
			146, 147, 142,
			148, 146, 146,
			149, 147, 148,
			150, 146, 151,
			148, 152, 143,
			152, 148, 144,
			153, 152, 154,
			152, 153, 144,
			155, 156, 157,
			156, 155, 153,
			158, 159, 160,
			158, 161, 157,
			161, 158, 154,
			159, 162, 160,
			162, 159, 163,
			164, 160, 163,
			161, 165, 166,
			167, 163, 166,
			165, 168, 165,
			169, 168, 170,
			165, 161, 171,
			172, 169, 170,
			173, 171, 174,
			170, 157, 175,
			176, 174, 177,
			173, 176, 60,
			175, 178, 60,
			179, 177, 61,
			178, 180, 180,
			130, 129, 178,
			131, 130, 129,
			64, 180, 172,
			173, 179, 181,
			179, 56, 54,
			172, 181, 175,
			134, 131, 174,
			155, 134, 139,
			134, 155, 168,
			54, 41, 44,
			168, 41, 182,
			166, 44, 182,
			183, 184, 184,
			185, 167, 186,
			183, 187, 183,
			188, 185, 164,
			185, 189, 189,
			188, 190, 164,
			191, 162, 191,
			190, 192, 193,
			187, 194, 195,
			193, 194, 195,
			196, 197, 48,
			194, 43, 82,
			195, 48, 82,
			198, 199, 199,
			200, 196, 201,
			198, 83, 198,
			202, 200, 203,
			202, 204, 205,
			204, 206, 97,
			207, 95, 206,
			95, 207, 206,
			84, 87, 97,
			208, 209, 210,
			211, 208, 212,
			208, 100, 213,
			210, 214, 215,
			210, 212, 215,
			99, 216, 217,
			215, 218, 218,
			216, 219, 219,
			220, 221, 216,
			101, 220, 220,
			121, 221, 101,
			120, 220, 221,
			123, 222, 222,
			219, 221, 222,
			147, 223, 123,
			145, 222, 223,
			218, 219, 147,
			224, 223, 149,
			225, 224, 224,
			217, 218, 225,
			226, 217, 225,
			227, 228, 226,
			214, 217, 229,
			230, 231, 232,
			233, 230, 231,
			151, 154, 151,
			233, 234, 234,
			235, 150, 236,
			235, 233, 149,
			235, 237, 237,
			236, 227, 231,
			162, 191, 229,
			191, 192, 84,
			202, 201, 194,
			182, 43, 65,
			116, 112, 66,
			112, 108, 69,
			108, 107, 88,
			107, 90, 74,
			69, 88, 40,
			44, 41, 43,
			182, 44, 45,
			48, 43, 46,
			45, 40, 47,
			82, 48, 46,
			50, 47, 49,
			52, 50, 42,
			53, 49, 51,
			62, 52, 53,
			55, 51, 41,
			54, 53, 54,
			181, 55, 55,
			181, 56, 55,
			57, 58, 57,
			61, 59, 57,
			56, 60, 58,
			68, 62, 63,
			68, 58, 61,
			180, 64, 65,
			63, 59, 66,
			70, 63, 63,
			70, 67, 69,
			71, 70, 71,
			73, 67, 68,
			67, 72, 74,
			76, 73, 75,
			72, 73, 77,
			75, 76, 78,
			76, 74, 52,
			62, 72, 52,
			75, 77, 50,
			77, 80, 77,
			78, 81, 80,
			83, 82, 81,
			201, 83, 84,
			201, 81, 78,
			79, 85, 79,
			89, 86, 87,
			84, 85, 79,
			74, 88, 89,
			88, 90, 91,
			94, 86, 92,
			94, 91, 90,
			103, 93, 87,
			86, 94, 92,
			97, 95, 96,
			100, 97, 96,
			92, 93, 99,
			212, 100, 99,
			96, 98, 98,
			104, 102, 103,
			104, 98, 104,
			106, 105, 103,
			109, 106, 107,
			109, 103, 108,
			110, 109, 110,
			113, 106, 111,
			110, 108, 111,
			118, 113, 114,
			118, 111, 115,
			111, 112, 117,
			119, 118, 119,
			105, 113, 120,
			102, 105, 120,
			119, 117, 121,
			117, 122, 117,
			114, 124, 122,
			126, 125, 124,
			133, 126, 127,
			133, 124, 114,
			115, 128, 115,
			116, 129, 130,
			127, 128, 131,
			135, 127, 127,
			135, 132, 134,
			136, 135, 136,
			138, 132, 133,
			132, 137, 139,
			141, 138, 140,
			137, 138, 142,
			140, 141, 143,
			141, 139, 125,
			126, 137, 125,
			140, 142, 145,
			142, 146, 142,
			143, 148, 146,
			150, 149, 148,
			234, 150, 151,
			234, 148, 143,
			144, 152, 144,
			156, 153, 154,
			151, 152, 144,
			139, 155, 157,
			158, 156, 153,
			156, 158, 160,
			159, 158, 157,
			170, 161, 154,
			153, 159, 160,
			164, 162, 163,
			167, 164, 163,
			160, 161, 166,
			184, 167, 166,
			163, 165, 165,
			171, 169, 170,
			171, 165, 171,
			173, 172, 170,
			176, 173, 174,
			176, 170, 175,
			177, 176, 177,
			179, 173, 60,
			177, 175, 60,
			56, 179, 61,
			60, 178, 180,
			178, 130, 178,
			175, 131, 129,
			116, 64, 181,
			172, 179, 54,
			169, 172, 175,
			174, 134, 174,
			157, 155, 139,
			136, 134, 168,
			169, 54, 44,
			166, 168, 182,
			184, 166, 182,
			187, 183, 184,
			183, 185, 186,
			188, 183, 164,
			167, 185, 189,
			185, 188, 164,
			189, 191, 191,
			189, 190, 193,
			186, 187, 195,
			197, 193, 195,
			199, 196, 48,
			195, 194, 82,
			199, 195, 82,
			83, 198, 199,
			198, 200, 201,
			202, 198, 203,
			200, 202, 205,
			203, 204, 97,
			209, 207, 206,
			87, 95, 206,
			204, 84, 97,
			100, 208, 212,
			210, 208, 213,
			211, 210, 215,
			214, 210, 215,
			212, 99, 217,
			214, 215, 218,
			215, 216, 219,
			216, 220, 216,
			99, 101, 220,
			120, 121, 101,
			102, 120, 221,
			121, 123, 222,
			223, 219, 222,
			145, 147, 123,
			125, 145, 223,
			224, 218, 147,
			149, 224, 149,
			237, 225, 224,
			225, 217, 225,
			228, 226, 225,
			237, 227, 226,
			213, 214, 229,
			232, 230, 232,
			236, 233, 231,
			230, 151, 151,
			230, 233, 234,
			233, 235, 149,
			150, 235, 237,
			235, 236, 231,
			154, 162, 229,
			231, 191, 84,
			204, 202, 194,
			187, 182, 65,
			64, 116, 66,
			65, 112, 69,
			66, 108, 88,
			69, 107, 74,
			71, 69,
		},
	},
	{
		.name = "YELLOW_Cube.007",
		.colors = { game::YELLOW },
		.vertices = { // 238 vertex
			VertexData{
				.position = { +0.98f, +2.95f, -0.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.95f, +2.98f, -0.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.97f, +2.94f, -0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.96f, +2.94f, -0.94f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.94f, +2.97f, -0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.87f, +2.99f, -0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.87f, +2.98f, -0.95f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.91f, +2.99f, -0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.94f, +2.96f, -0.94f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.87f, +2.98f, -0.95f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.87f, +2.99f, -0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.91f, +2.97f, -0.94f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.95f, +2.98f, -0.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.96f, +2.94f, -0.94f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.91f, +2.99f, -0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.91f, +2.99f, -0.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.95f, +2.98f, +0.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.91f, +2.99f, +0.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.94f, +2.97f, +0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.87f, +2.98f, +0.95f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.87f, +2.99f, +0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.91f, +2.97f, +0.94f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.91f, +2.99f, +0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.87f, +3.00f, +0.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.87f, +2.95f, +0.98f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.91f, +2.99f, +0.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.91f, +2.99f, -0.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.87f, +3.00f, -0.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.87f, +3.00f, -0.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.87f, +3.00f, +0.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.87f, +2.99f, +0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.91f, +2.99f, +0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.87f, +2.95f, +0.98f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.99f, +2.87f, +0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.87f, +2.98f, +0.95f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.97f, +2.94f, +0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.99f, +2.91f, -0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.87f, +2.95f, -0.98f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.98f, +2.95f, +0.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.94f, +2.97f, +0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.91f, +1.01f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +1.03f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +1.00f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +1.00f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +1.01f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +1.01f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +1.01f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +1.00f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +1.01f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +1.01f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +1.01f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +1.01f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +1.02f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +1.01f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +1.02f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +1.03f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +1.05f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +1.09f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +1.06f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +1.13f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +1.13f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +1.06f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, -0.17f, -0.17f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +1.13f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +1.09f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +1.09f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, +1.09f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +1.04f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +1.09f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +1.03f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, +1.13f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +1.06f, -0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.96f, +1.06f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, +1.06f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +1.03f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, +1.02f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, +1.05f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, +1.02f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +1.09f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, +1.13f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +1.03f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, +1.06f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +1.04f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, +1.05f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +1.09f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, +1.13f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +1.09f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.96f, +2.94f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, +2.87f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +1.13f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, +2.87f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +2.91f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +2.91f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +2.87f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +2.87f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +2.91f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, +2.94f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, +2.95f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, +2.98f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, +2.95f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, +2.98f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, +2.91f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +2.91f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +2.97f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +2.91f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +2.94f, -0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, +2.87f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, +2.87f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +2.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +2.94f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +2.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +2.97f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +2.87f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, +1.13f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +2.96f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +2.95f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +2.99f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +2.99f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +2.94f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +2.99f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +2.95f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +2.87f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +2.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +2.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +2.91f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, +2.91f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +2.96f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +2.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +1.01f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, +2.87f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +2.94f, -0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.96f, +2.94f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, +2.94f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +2.97f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +2.99f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, +2.95f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +2.99f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +2.91f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, +2.87f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, +2.94f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +2.99f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, +2.95f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +2.91f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, +2.87f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +2.91f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +1.13f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, +1.13f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +2.87f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, +1.13f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +1.09f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +1.13f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +1.09f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +1.13f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +1.09f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, +1.06f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, +1.05f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, +1.02f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, +1.05f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, +1.02f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, +1.06f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.96f, +1.06f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, +1.09f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +1.03f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, +2.87f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +1.09f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +1.09f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +1.06f, -0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, +1.13f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, +1.13f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +1.13f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +1.09f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +1.04f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +1.05f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +1.04f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +1.03f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +1.01f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, +1.09f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +1.05f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +1.06f, +0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.96f, +1.06f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, +1.13f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, +1.13f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +1.09f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +1.09f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +1.13f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +1.09f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +1.06f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +2.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +1.02f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +1.05f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +1.03f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +1.09f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +1.13f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +1.06f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +1.02f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.96f, +1.06f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +1.01f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +1.09f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +1.09f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +1.06f, +0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, +1.13f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +1.09f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, +1.09f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +1.13f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +1.13f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +2.87f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +2.87f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +2.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +2.91f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +2.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, +2.87f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, +2.91f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, +2.87f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, +1.13f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +2.96f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +2.94f, +0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +2.97f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +2.99f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +2.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +2.97f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +2.95f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +2.94f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +2.95f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +2.91f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +2.97f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +2.87f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +2.94f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +2.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +2.87f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +2.94f, +0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, +2.91f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, +2.87f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, +2.87f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.96f, +2.94f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +2.96f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +2.91f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +2.87f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +2.98f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},

		},

		.indices = { // 1284 values
			0, 1, 2, 1,
			3, 2, 4,
			5, 3, 6,
			5, 7, 6,
			8, 9, 9,
			10, 11, 10,
			12, 11, 12,
			13, 14, 12,
			15, 16, 16,
			17, 18, 17,
			19, 18, 20,
			21, 22, 20,
			0, 23, 24,
			20, 25, 25,
			23, 26, 26,
			27, 28, 23,
			2, 27, 27,
			9, 28, 2,
			6, 27, 28,
			11, 29, 29,
			26, 28, 29,
			18, 30, 11,
			16, 29, 30,
			25, 26, 18,
			31, 30, 19,
			32, 31, 31,
			24, 25, 19,
			33, 34, 0,
			35, 1, 1,
			4, 3, 4,
			36, 5, 6,
			3, 5, 6,
			7, 8, 9,
			8, 10, 10,
			37, 12, 12,
			37, 13, 12,
			14, 15, 16,
			15, 17, 17,
			38, 19, 20,
			39, 21, 20,
			22, 0, 24,
			39, 20, 25,
			20, 23, 26,
			23, 27, 23,
			0, 2, 27,
			6, 9, 2,
			3, 6, 28,
			9, 11, 29,
			30, 26, 29,
			16, 18, 11,
			12, 16, 30,
			31, 25, 18,
			19, 31, 19,
			34, 32, 31,
			32, 24, 19,
			38, 33, 40,
			41, 42, 43,
			44, 40, 45,
			43, 40, 46,
			40, 42, 47,
			48, 45, 46,
			47, 45, 49,
			50, 46, 42,
			49, 46, 51,
			52, 49, 53,
			51, 49, 41,
			53, 42, 54,
			55, 53, 55,
			56, 57, 55,
			58, 51, 57,
			59, 58, 57,
			60, 61, 58,
			62, 51, 63,
			58, 59, 61,
			64, 59, 65,
			59, 64, 66,
			63, 65, 63,
			67, 68, 69,
			70, 66, 71,
			67, 70, 68,
			72, 62, 72,
			67, 73, 74,
			73, 71, 75,
			73, 76, 77,
			76, 78, 78,
			74, 79, 52,
			72, 75, 52,
			77, 50, 50,
			80, 47, 77,
			81, 80, 80,
			82, 47, 81,
			83, 80, 84,
			81, 85, 78,
			85, 81, 79,
			86, 85, 87,
			85, 86, 79,
			88, 89, 89,
			90, 91, 91,
			86, 89, 92,
			91, 93, 90,
			93, 91, 87,
			94, 95, 92,
			95, 94, 96,
			97, 92, 96,
			93, 98, 99,
			100, 96, 101,
			98, 93, 101,
			102, 103, 104,
			101, 90, 105,
			106, 104, 107,
			102, 106, 108,
			105, 109, 108,
			110, 107, 111,
			108, 112, 112,
			109, 113, 114,
			115, 111, 116,
			110, 115, 117,
			102, 110, 114,
			118, 119, 118,
			120, 119, 121,
			118, 122, 111,
			122, 118, 112,
			123, 122, 124,
			122, 123, 125,
			121, 124, 121,
			126, 127, 128,
			129, 125, 130,
			126, 129, 127,
			131, 120, 131,
			126, 132, 133,
			132, 130, 134,
			132, 135, 136,
			135, 137, 137,
			133, 138, 136,
			139, 140, 139,
			141, 140, 142,
			139, 143, 137,
			143, 139, 138,
			144, 143, 145,
			143, 144, 138,
			146, 147, 148,
			147, 146, 144,
			149, 150, 151,
			149, 152, 148,
			152, 149, 145,
			150, 153, 151,
			153, 150, 154,
			155, 151, 154,
			152, 156, 157,
			158, 154, 157,
			156, 159, 156,
			160, 159, 161,
			156, 152, 162,
			163, 160, 161,
			164, 162, 165,
			161, 148, 166,
			167, 165, 168,
			164, 167, 60,
			166, 169, 60,
			170, 168, 61,
			169, 171, 171,
			124, 123, 169,
			125, 124, 123,
			64, 171, 163,
			164, 170, 172,
			170, 56, 54,
			163, 172, 166,
			128, 125, 165,
			146, 128, 133,
			128, 146, 159,
			54, 41, 44,
			159, 41, 173,
			157, 44, 173,
			174, 175, 175,
			176, 158, 177,
			174, 178, 174,
			179, 176, 155,
			176, 180, 180,
			179, 181, 155,
			182, 153, 182,
			181, 183, 183,
			184, 185, 184,
			179, 177, 185,
			186, 187, 184,
			188, 186, 188,
			178, 189, 190,
			188, 189, 191,
			186, 188, 191,
			192, 193, 190,
			194, 191, 48,
			189, 43, 82,
			190, 48, 82,
			195, 196, 196,
			197, 194, 198,
			195, 83, 195,
			199, 197, 192,
			197, 200, 200,
			199, 201, 192,
			202, 203, 202,
			201, 204, 193,
			203, 205, 205,
			206, 207, 203,
			208, 206, 206,
			209, 207, 208,
			210, 206, 211,
			212, 208, 202,
			211, 208, 97,
			211, 95, 204,
			95, 211, 204,
			84, 87, 213,
			214, 212, 97,
			215, 213, 216,
			214, 215, 217,
			215, 100, 218,
			216, 219, 220,
			221, 222, 220,
			223, 224, 221,
			219, 222, 210,
			221, 209, 224,
			209, 221, 225,
			207, 209, 225,
			226, 227, 224,
			228, 225, 228,
			229, 226, 228,
			230, 231, 229,
			232, 233, 231,
			234, 232, 233,
			142, 145, 142,
			234, 235, 235,
			236, 141, 230,
			236, 234, 237,
			230, 223, 233,
			153, 182, 229,
			182, 183, 226,
			183, 185, 227,
			185, 187, 207,
			187, 205, 193,
			187, 186, 210,
			214, 218, 84,
			199, 198, 189,
			173, 43, 65,
			113, 109, 66,
			109, 105, 69,
			105, 104, 88,
			104, 90, 74,
			69, 88, 40,
			44, 41, 43,
			173, 44, 45,
			48, 43, 46,
			45, 40, 47,
			82, 48, 46,
			50, 47, 49,
			52, 50, 42,
			53, 49, 51,
			62, 52, 53,
			55, 51, 41,
			54, 53, 54,
			172, 55, 55,
			172, 56, 55,
			57, 58, 57,
			61, 59, 57,
			56, 60, 58,
			68, 62, 63,
			68, 58, 61,
			171, 64, 65,
			63, 59, 66,
			70, 63, 63,
			70, 67, 69,
			71, 70, 71,
			73, 67, 68,
			67, 72, 74,
			76, 73, 75,
			72, 73, 77,
			75, 76, 78,
			76, 74, 52,
			62, 72, 52,
			75, 77, 50,
			77, 80, 77,
			78, 81, 80,
			83, 82, 81,
			198, 83, 84,
			198, 81, 78,
			79, 85, 79,
			89, 86, 87,
			84, 85, 79,
			74, 88, 89,
			88, 90, 91,
			94, 86, 92,
			94, 91, 90,
			101, 93, 87,
			86, 94, 92,
			97, 95, 96,
			100, 97, 96,
			92, 93, 99,
			217, 100, 101,
			103, 98, 101,
			106, 102, 104,
			106, 101, 105,
			107, 106, 107,
			110, 102, 108,
			107, 105, 108,
			115, 110, 111,
			115, 108, 112,
			108, 109, 114,
			116, 115, 116,
			117, 110, 114,
			111, 118, 118,
			127, 120, 121,
			127, 118, 111,
			112, 122, 112,
			113, 123, 124,
			121, 122, 125,
			129, 121, 121,
			129, 126, 128,
			130, 129, 130,
			132, 126, 127,
			126, 131, 133,
			135, 132, 134,
			131, 132, 136,
			134, 135, 137,
			135, 133, 136,
			137, 139, 139,
			235, 141, 142,
			235, 139, 137,
			138, 143, 138,
			147, 144, 145,
			142, 143, 138,
			133, 146, 148,
			149, 147, 144,
			147, 149, 151,
			150, 149, 148,
			161, 152, 145,
			144, 150, 151,
			155, 153, 154,
			158, 155, 154,
			151, 152, 157,
			175, 158, 157,
			154, 156, 156,
			162, 160, 161,
			162, 156, 162,
			164, 163, 161,
			167, 164, 165,
			167, 161, 166,
			168, 167, 168,
			170, 164, 60,
			168, 166, 60,
			56, 170, 61,
			60, 169, 171,
			169, 124, 169,
			166, 125, 123,
			113, 64, 172,
			163, 170, 54,
			160, 163, 166,
			165, 128, 165,
			148, 146, 133,
			130, 128, 159,
			160, 54, 44,
			157, 159, 173,
			175, 157, 173,
			178, 174, 175,
			174, 176, 177,
			179, 174, 155,
			158, 176, 180,
			176, 179, 155,
			180, 182, 182,
			180, 181, 183,
			181, 184, 184,
			181, 179, 185,
			184, 186, 184,
			177, 188, 188,
			177, 178, 190,
			191, 188, 191,
			193, 186, 191,
			194, 192, 190,
			196, 194, 48,
			190, 189, 82,
			196, 190, 82,
			83, 195, 196,
			195, 197, 198,
			199, 195, 192,
			194, 197, 200,
			197, 199, 192,
			200, 202, 202,
			200, 201, 193,
			192, 203, 205,
			203, 206, 203,
			202, 208, 206,
			210, 209, 208,
			212, 210, 211,
			213, 212, 202,
			204, 211, 97,
			213, 211, 204,
			87, 95, 204,
			201, 84, 213,
			215, 214, 97,
			100, 215, 217,
			216, 215, 218,
			214, 216, 220,
			224, 221, 220,
			237, 223, 221,
			218, 219, 210,
			218, 221, 224,
			225, 209, 225,
			227, 207, 225,
			228, 226, 224,
			223, 228, 228,
			231, 229, 228,
			223, 230, 229,
			231, 232, 231,
			230, 234, 233,
			232, 142, 142,
			232, 234, 235,
			234, 236, 237,
			236, 230, 233,
			145, 153, 229,
			233, 182, 226,
			229, 183, 227,
			226, 185, 207,
			227, 187, 193,
			205, 187, 210,
			212, 214, 84,
			201, 199, 189,
			178, 173, 65,
			64, 113, 66,
			65, 109, 69,
			66, 105, 88,
			69, 104, 74,
			71, 69,
		},
	},
	{
		.name = "YELLOW-RED_Cube.008",
		.colors = { game::RED, game::YELLOW },
		.vertices = { // 260 vertex
			VertexData{
				.position = { +0.98f, +2.95f, -2.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.95f, +2.98f, -2.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.97f, +2.94f, -2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.96f, +2.94f, -2.94f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.94f, +2.97f, -2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.87f, +2.99f, -2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.87f, +2.98f, -2.95f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.91f, +2.99f, -2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.94f, +2.96f, -2.94f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.87f, +2.98f, -2.95f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.87f, +2.99f, -2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.91f, +2.97f, -2.94f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.95f, +2.98f, -2.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.96f, +2.94f, -2.94f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.91f, +2.99f, -2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.91f, +2.99f, -2.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.95f, +2.98f, -1.13f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.94f, +2.97f, -1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.91f, +2.99f, -1.13f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.87f, +2.98f, -1.05f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.87f, +2.99f, -1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.91f, +2.97f, -1.06f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.91f, +2.99f, -1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.87f, +3.00f, -1.13f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.87f, +2.95f, -1.02f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.91f, +2.99f, -1.13f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.91f, +2.99f, -2.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.87f, +3.00f, -2.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.87f, +3.00f, -2.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.87f, +3.00f, -1.13f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.87f, +2.99f, -1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.91f, +2.99f, -1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.87f, +2.95f, -1.02f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.99f, +2.87f, -1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.87f, +2.98f, -1.05f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.97f, +2.94f, -1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.99f, +2.91f, -2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.87f, +2.95f, -2.98f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.98f, +2.95f, -1.13f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.94f, +2.97f, -1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.87f, +1.09f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.87f, +1.13f, -3.00f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.91f, +1.06f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.91f, +1.13f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.91f, +1.06f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.91f, +1.13f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.91f, +1.09f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.94f, +1.09f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.97f, +1.09f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.94f, +1.04f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.87f, +1.09f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.91f, +1.03f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.95f, +1.13f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.94f, +1.06f, -2.96f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.87f, +2.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.94f, +2.94f, -2.96f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.91f, +2.94f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.91f, +2.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.95f, +2.87f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.91f, +2.97f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.91f, +2.87f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.98f, +1.13f, -2.95f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.94f, +2.96f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.87f, +2.95f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.91f, +2.99f, -2.91f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.91f, +2.94f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.87f, +2.99f, -2.91f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.87f, +2.95f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.91f, +2.87f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.87f, +2.87f, -3.00f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.91f, +2.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.94f, +2.91f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.97f, +2.91f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.94f, +2.96f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.87f, +2.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.91f, +1.01f, -2.87f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.95f, +2.87f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.94f, +2.94f, -2.96f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.96f, +2.94f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.94f, +1.06f, -2.96f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.87f, +1.13f, -3.00f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.91f, +1.09f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.95f, +1.13f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.94f, +1.04f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.87f, +1.05f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.97f, +1.06f, -2.91f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +0.87f, +2.99f, -2.91f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.97f, +2.94f, -2.91f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.94f, +1.09f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.91f, +1.01f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +1.03f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +1.00f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +1.00f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +1.01f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +1.01f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +1.01f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +1.00f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +1.01f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +1.01f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +1.01f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +1.01f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +1.02f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +1.01f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +1.02f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +1.03f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +1.05f, -2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +1.09f, -2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +1.06f, -2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.00f, +0.00f, +0.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +1.09f, -2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.96f, +1.06f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +1.04f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, +1.06f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +1.03f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +1.06f, -2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, +1.02f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, +1.05f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, +1.02f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +1.09f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, +1.13f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +1.03f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, +1.06f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +1.04f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, +1.05f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +1.09f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, +1.13f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +1.09f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.96f, +2.94f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, +2.87f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +1.13f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +2.91f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, +2.87f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +2.91f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +2.87f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +2.87f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +2.91f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, +2.94f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, +2.95f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, +2.98f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, +2.95f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, +2.98f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, +2.91f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +2.91f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +2.97f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +2.91f, -2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +2.94f, -2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, +2.87f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, +2.87f, -2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +2.99f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +2.91f, -2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.96f, +2.94f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +2.96f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, +2.94f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +2.97f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +2.94f, -2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +2.99f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, +2.95f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +2.99f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +2.91f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, +2.87f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, +2.94f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +2.99f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, +2.95f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +2.91f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, +2.87f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +2.91f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +1.13f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, +1.13f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +2.87f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, +1.13f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +1.09f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +1.13f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +1.09f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +1.13f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +1.09f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, +1.06f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, +1.05f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, +1.02f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, +1.05f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, +1.02f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, +1.06f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.96f, +1.06f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, +1.09f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +1.03f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, +2.87f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +1.09f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +1.09f, -2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +1.06f, -2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, +1.13f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, +1.13f, -2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +1.09f, -2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +1.05f, -2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +1.01f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +1.04f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +1.03f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +1.01f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, +1.09f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +1.05f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +1.06f, -1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.96f, +1.06f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, +1.13f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, +1.13f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +1.09f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +1.09f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +1.13f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +1.09f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +1.06f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +2.87f, -3.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +1.02f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +1.05f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +1.03f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +1.09f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +1.13f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +1.06f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +1.02f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.96f, +1.06f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +1.01f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +1.09f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +1.09f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +1.06f, -1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, +1.13f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +1.09f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, +1.09f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +1.13f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +1.13f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +2.87f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +2.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +2.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +2.91f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +2.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, +2.87f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, +2.91f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, +2.87f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, +1.13f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +2.96f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +2.94f, -1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +2.97f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +2.99f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +2.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +2.97f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +2.95f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +2.94f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +2.95f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +2.91f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +2.97f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +2.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +2.94f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +2.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +2.87f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +2.94f, -1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, +2.91f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, +2.87f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, +2.87f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.96f, +2.94f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +2.96f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +2.91f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +2.87f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +2.98f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +1.03f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, +1.09f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},

		},

		.indices = { // 1284 values
			0, 1, 2, 1,
			3, 2, 4,
			5, 3, 6,
			5, 7, 6,
			8, 9, 9,
			10, 11, 10,
			12, 11, 12,
			13, 14, 12,
			15, 16, 17,
			15, 18, 18,
			19, 17, 20,
			21, 22, 20,
			0, 23, 24,
			20, 25, 25,
			23, 26, 26,
			27, 28, 23,
			2, 27, 27,
			9, 28, 2,
			6, 27, 28,
			11, 29, 29,
			26, 28, 29,
			17, 30, 11,
			16, 29, 30,
			25, 26, 17,
			31, 30, 19,
			32, 31, 31,
			24, 25, 19,
			33, 34, 0,
			35, 1, 1,
			4, 3, 4,
			36, 5, 6,
			3, 5, 6,
			7, 8, 9,
			8, 10, 10,
			37, 12, 12,
			37, 13, 12,
			14, 15, 17,
			16, 15, 18,
			38, 19, 20,
			39, 21, 20,
			22, 0, 24,
			39, 20, 25,
			20, 23, 26,
			23, 27, 23,
			0, 2, 27,
			6, 9, 2,
			3, 6, 28,
			9, 11, 29,
			30, 26, 29,
			16, 17, 11,
			12, 16, 30,
			31, 25, 17,
			19, 31, 19,
			34, 32, 31,
			32, 24, 19,
			38, 33, 40,
			41, 42, 40,
			43, 44, 45,
			42, 41, 44,
			46, 41, 47,
			41, 46, 48,
			45, 47, 45,
			49, 50, 51,
			52, 48, 53,
			49, 52, 54,
			55, 56, 54,
			57, 58, 59,
			54, 60, 60,
			56, 61, 62,
			63, 59, 64,
			57, 63, 62,
			65, 66, 65,
			67, 66, 68,
			65, 69, 59,
			69, 65, 60,
			70, 69, 71,
			69, 70, 72,
			68, 71, 68,
			73, 74, 75,
			76, 72, 77,
			73, 76, 74,
			78, 67, 43,
			79, 80, 43,
			81, 82, 44,
			80, 83, 83,
			71, 70, 80,
			72, 71, 70,
			46, 83, 79,
			75, 72, 47,
			61, 56, 48,
			56, 55, 40,
			44, 41, 40,
			84, 43, 45,
			50, 42, 44,
			83, 46, 47,
			45, 41, 48,
			52, 45, 45,
			52, 49, 51,
			53, 52, 53,
			85, 49, 54,
			58, 55, 54,
			63, 57, 59,
			63, 54, 60,
			54, 56, 62,
			64, 63, 64,
			86, 57, 62,
			59, 65, 65,
			74, 67, 68,
			74, 65, 59,
			60, 69, 60,
			61, 70, 71,
			68, 69, 72,
			76, 68, 68,
			76, 73, 75,
			77, 76, 77,
			87, 73, 74,
			73, 78, 43,
			82, 79, 43,
			84, 81, 44,
			43, 80, 83,
			80, 71, 80,
			79, 72, 70,
			61, 46, 79,
			88, 75, 47,
			46, 61, 48,
			47, 56, 89,
			90, 91, 92,
			93, 89, 94,
			92, 89, 95,
			89, 91, 96,
			97, 94, 95,
			96, 94, 98,
			99, 95, 91,
			98, 95, 100,
			101, 98, 102,
			100, 98, 90,
			102, 91, 103,
			104, 102, 104,
			105, 106, 104,
			107, 100, 107,
			108, 100, 109,
			110, 108, 110,
			111, 112, 113,
			112, 114, 115,
			112, 116, 117,
			116, 118, 118,
			113, 119, 101,
			110, 115, 101,
			117, 99, 99,
			120, 96, 117,
			121, 120, 120,
			122, 96, 121,
			123, 120, 124,
			121, 125, 118,
			125, 121, 119,
			126, 125, 127,
			125, 126, 119,
			128, 129, 130,
			128, 131, 130,
			126, 129, 132,
			130, 133, 131,
			133, 130, 127,
			134, 135, 132,
			135, 134, 136,
			137, 132, 136,
			133, 138, 139,
			140, 136, 141,
			138, 133, 141,
			142, 143, 144,
			141, 131, 145,
			146, 144, 147,
			142, 146, 148,
			142, 149, 150,
			151, 152, 153,
			152, 154, 155,
			152, 156, 157,
			156, 158, 158,
			153, 159, 157,
			160, 161, 160,
			162, 161, 163,
			160, 164, 158,
			164, 160, 159,
			165, 164, 166,
			164, 165, 159,
			167, 168, 169,
			168, 167, 165,
			170, 171, 172,
			170, 173, 169,
			173, 170, 174,
			165, 171, 172,
			174, 171, 175,
			176, 172, 175,
			173, 177, 178,
			179, 175, 178,
			177, 180, 177,
			181, 180, 182,
			177, 173, 183,
			184, 181, 182,
			185, 183, 186,
			182, 169, 187,
			188, 186, 189,
			185, 188, 184,
			185, 190, 191,
			190, 105, 103,
			184, 191, 186,
			167, 192, 153,
			192, 167, 180,
			103, 90, 93,
			180, 90, 193,
			178, 93, 193,
			194, 195, 195,
			196, 179, 197,
			194, 198, 194,
			199, 196, 176,
			196, 200, 200,
			199, 201, 176,
			202, 174, 202,
			201, 203, 203,
			204, 205, 204,
			199, 197, 205,
			206, 207, 204,
			208, 206, 208,
			198, 209, 210,
			208, 209, 211,
			206, 208, 211,
			212, 213, 210,
			214, 211, 97,
			209, 92, 122,
			210, 97, 122,
			215, 216, 216,
			217, 214, 218,
			215, 123, 215,
			219, 217, 212,
			217, 220, 220,
			219, 221, 212,
			222, 223, 222,
			221, 224, 213,
			223, 225, 225,
			226, 227, 223,
			228, 226, 226,
			229, 227, 228,
			230, 226, 231,
			232, 228, 222,
			231, 228, 137,
			231, 135, 224,
			135, 231, 224,
			124, 127, 233,
			234, 232, 137,
			235, 233, 236,
			234, 235, 237,
			235, 140, 238,
			236, 239, 240,
			241, 242, 240,
			243, 244, 241,
			239, 242, 230,
			241, 229, 244,
			229, 241, 245,
			227, 229, 245,
			246, 247, 244,
			248, 245, 248,
			249, 246, 248,
			250, 251, 249,
			252, 253, 251,
			254, 252, 253,
			163, 166, 163,
			254, 255, 255,
			256, 162, 250,
			256, 254, 257,
			250, 243, 253,
			174, 202, 249,
			202, 203, 246,
			203, 205, 247,
			205, 207, 227,
			207, 225, 213,
			207, 206, 230,
			234, 238, 124,
			219, 218, 209,
			193, 92, 258,
			145, 144, 128,
			144, 131, 113,
			258, 128, 89,
			93, 90, 92,
			193, 93, 94,
			97, 92, 95,
			94, 89, 96,
			122, 97, 95,
			99, 96, 98,
			101, 99, 91,
			102, 98, 100,
			108, 101, 102,
			104, 100, 90,
			103, 102, 103,
			191, 104, 104,
			191, 105, 104,
			106, 107, 107,
			109, 108, 109,
			111, 110, 113,
			116, 112, 115,
			110, 112, 117,
			115, 116, 118,
			116, 113, 101,
			108, 110, 101,
			115, 117, 99,
			117, 120, 117,
			118, 121, 120,
			123, 122, 121,
			218, 123, 124,
			218, 121, 118,
			119, 125, 119,
			129, 126, 127,
			124, 125, 119,
			113, 128, 130,
			129, 128, 130,
			134, 126, 132,
			134, 130, 131,
			141, 133, 127,
			126, 134, 132,
			137, 135, 136,
			140, 137, 136,
			132, 133, 139,
			237, 140, 141,
			143, 138, 141,
			146, 142, 144,
			146, 141, 145,
			147, 146, 147,
			149, 142, 153,
			156, 152, 155,
			150, 152, 157,
			155, 156, 158,
			156, 153, 157,
			158, 160, 160,
			255, 162, 163,
			255, 160, 158,
			159, 164, 159,
			168, 165, 166,
			163, 164, 159,
			153, 167, 169,
			170, 168, 165,
			168, 170, 172,
			171, 170, 169,
			182, 173, 174,
			166, 165, 172,
			176, 174, 175,
			179, 176, 175,
			172, 173, 178,
			195, 179, 178,
			175, 177, 177,
			183, 181, 182,
			183, 177, 183,
			185, 184, 182,
			188, 185, 186,
			188, 182, 187,
			189, 188, 189,
			190, 185, 191,
			184, 190, 103,
			181, 184, 186,
			169, 167, 153,
			154, 192, 180,
			181, 103, 93,
			178, 180, 193,
			195, 178, 193,
			198, 194, 195,
			194, 196, 197,
			199, 194, 176,
			179, 196, 200,
			196, 199, 176,
			200, 202, 202,
			200, 201, 203,
			201, 204, 204,
			201, 199, 205,
			204, 206, 204,
			197, 208, 208,
			197, 198, 210,
			211, 208, 211,
			213, 206, 211,
			214, 212, 210,
			216, 214, 97,
			210, 209, 122,
			216, 210, 122,
			123, 215, 216,
			215, 217, 218,
			219, 215, 212,
			214, 217, 220,
			217, 219, 212,
			220, 222, 222,
			220, 221, 213,
			212, 223, 225,
			223, 226, 223,
			222, 228, 226,
			230, 229, 228,
			232, 230, 231,
			233, 232, 222,
			224, 231, 137,
			233, 231, 224,
			127, 135, 224,
			221, 124, 233,
			235, 234, 137,
			140, 235, 237,
			236, 235, 238,
			234, 236, 240,
			244, 241, 240,
			257, 243, 241,
			238, 239, 230,
			238, 241, 244,
			245, 229, 245,
			247, 227, 245,
			248, 246, 244,
			243, 248, 248,
			251, 249, 248,
			243, 250, 249,
			251, 252, 251,
			250, 254, 253,
			252, 163, 163,
			252, 254, 255,
			254, 256, 257,
			256, 250, 253,
			166, 174, 249,
			253, 202, 246,
			249, 203, 247,
			246, 205, 227,
			247, 207, 213,
			225, 207, 230,
			232, 234, 124,
			221, 219, 209,
			198, 193, 258,
			259, 145, 128,
			258, 144, 113,
			114, 258,
		},
	},
	{
		.name = "YELLOW-ORANGE_Cube.009",
		.colors = { game::YELLOW, game::ORANGE },
		.vertices = { // 258 vertex
			VertexData{
				.position = { +0.98f, +2.95f, +1.13f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.95f, +2.98f, +1.13f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.97f, +2.94f, +1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.96f, +2.94f, +1.06f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.94f, +2.97f, +1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.87f, +2.99f, +1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.87f, +2.98f, +1.05f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.91f, +2.99f, +1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.94f, +2.96f, +1.06f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.87f, +2.98f, +1.05f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.87f, +2.99f, +1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.91f, +2.97f, +1.06f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.95f, +2.98f, +1.13f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.96f, +2.94f, +1.06f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.91f, +2.99f, +1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.91f, +2.99f, +1.13f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.95f, +2.98f, +2.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.91f, +2.99f, +2.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.94f, +2.97f, +2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.87f, +2.98f, +2.95f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.87f, +2.99f, +2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.91f, +2.97f, +2.94f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.91f, +2.99f, +2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.87f, +3.00f, +2.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.87f, +2.95f, +2.98f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.91f, +2.99f, +2.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.91f, +2.99f, +1.13f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.87f, +3.00f, +1.13f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.87f, +3.00f, +1.13f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.87f, +3.00f, +2.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.87f, +2.99f, +2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.91f, +2.99f, +2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.87f, +2.95f, +2.98f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.99f, +2.87f, +2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.87f, +2.98f, +2.95f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.97f, +2.94f, +2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.99f, +2.91f, +1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.87f, +2.95f, +1.02f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.98f, +2.95f, +2.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +0.94f, +2.97f, +2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -0.91f, +1.09f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.91f, +1.13f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.87f, +1.09f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.96f, +1.06f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.87f, +1.05f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.91f, +1.06f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.87f, +2.87f, +1.00f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.87f, +1.02f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.87f, +1.09f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.91f, +1.13f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.91f, +1.06f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.94f, +1.09f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.95f, +1.13f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.97f, +1.09f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.87f, +1.13f, +3.00f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.91f, +2.87f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.87f, +2.87f, +3.00f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.91f, +2.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.94f, +2.91f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.87f, +2.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.95f, +2.87f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.97f, +2.91f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.98f, +2.87f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.98f, +1.13f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.94f, +2.96f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.87f, +2.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.91f, +2.97f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.94f, +2.97f, +2.91f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.87f, +2.95f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.91f, +2.94f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.87f, +2.95f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.94f, +2.91f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.91f, +2.97f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.87f, +2.87f, +3.00f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.91f, +2.94f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.91f, +2.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.91f, +2.87f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.94f, +2.94f, +2.96f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.97f, +2.91f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.95f, +2.87f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.87f, +2.98f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.95f, +1.13f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.87f, +1.02f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.99f, +1.13f, +2.91f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +0.94f, +2.94f, +2.96f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.99f, +2.87f, +2.91f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -0.91f, +1.01f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +1.03f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +1.00f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +1.00f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +1.01f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +1.01f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +1.01f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +1.00f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +1.01f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +1.01f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +1.01f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +1.01f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +1.02f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +1.01f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +1.02f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +1.03f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +1.05f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +1.09f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +1.06f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +1.13f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +1.13f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +1.06f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.00f, +0.00f, +0.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +1.13f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +1.09f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +1.09f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, +1.09f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +1.04f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +1.09f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +1.03f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, +1.13f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +1.06f, +1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.96f, +1.06f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, +1.06f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +1.03f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, +1.02f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, +1.05f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, +1.02f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +1.09f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, +1.13f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +1.03f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, +1.06f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +1.04f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, +1.05f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +1.09f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, +1.13f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +1.09f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.96f, +2.94f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, +2.87f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +1.13f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +2.91f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, +2.87f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +2.91f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +2.87f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +2.87f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +2.91f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, +2.94f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, +2.95f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, +2.98f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, +2.95f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, +2.98f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, +2.91f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +2.91f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +2.97f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +2.91f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +2.94f, +1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, +2.87f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, +2.87f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +2.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +2.94f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +2.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +2.97f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +2.87f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, +1.13f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +2.96f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +2.95f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +2.99f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +2.99f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +2.94f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +2.99f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +2.95f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +2.87f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +2.87f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +2.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +2.91f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, +2.91f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +2.96f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +2.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +1.01f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, +2.87f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +2.94f, +1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.96f, +2.94f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, +2.94f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +2.97f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +2.99f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, +2.95f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +2.99f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +2.91f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, +2.87f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, +2.94f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +2.99f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, +2.95f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +2.91f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, +2.87f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +2.91f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +1.13f, +3.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, +1.13f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +2.87f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, +1.13f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +1.09f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +1.13f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +1.09f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +1.13f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +1.09f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, +1.06f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, +1.05f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, +1.02f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, +1.05f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, +1.02f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, +1.06f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.96f, +1.06f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, +1.09f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +1.03f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, +2.87f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +1.09f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +1.09f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +1.06f, +1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, +1.13f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, +1.13f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +1.13f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +1.09f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +1.04f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +1.05f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +1.04f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +1.03f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +1.01f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, +1.09f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +1.05f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +1.06f, +2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.96f, +1.06f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, +1.13f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, +1.13f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +1.09f, +2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.91f, +1.09f, +2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.87f, +1.02f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +1.05f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +1.03f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +1.02f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +1.09f, +2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.96f, +1.06f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +1.01f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +1.09f, +2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +1.09f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +1.06f, +2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.95f, +1.13f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +1.09f, +2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, +1.09f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.99f, +1.13f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, +2.91f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +2.94f, +2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.98f, +1.13f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +2.97f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.94f, +2.96f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.91f, +2.99f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +2.94f, +2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.98f, +2.87f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.96f, +2.94f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.95f, +2.87f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.94f, +2.96f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +2.91f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.99f, +2.87f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, +2.91f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},

		},

		.indices = { // 1284 values
			0, 1, 2, 1,
			3, 2, 4,
			5, 3, 6,
			5, 7, 6,
			8, 9, 9,
			10, 11, 10,
			12, 11, 12,
			13, 14, 12,
			15, 16, 16,
			17, 18, 17,
			19, 18, 20,
			21, 22, 20,
			0, 23, 24,
			20, 25, 25,
			23, 26, 26,
			27, 28, 23,
			2, 27, 27,
			9, 28, 2,
			6, 27, 28,
			11, 29, 29,
			26, 28, 29,
			18, 30, 11,
			16, 29, 30,
			25, 26, 18,
			31, 30, 19,
			32, 31, 31,
			24, 25, 19,
			33, 34, 0,
			35, 1, 1,
			4, 3, 4,
			36, 5, 6,
			3, 5, 6,
			7, 8, 9,
			8, 10, 10,
			37, 12, 12,
			37, 13, 12,
			14, 15, 16,
			15, 17, 17,
			38, 19, 20,
			39, 21, 20,
			22, 0, 24,
			39, 20, 25,
			20, 23, 26,
			23, 27, 23,
			0, 2, 27,
			6, 9, 2,
			3, 6, 28,
			9, 11, 29,
			30, 26, 29,
			16, 18, 11,
			12, 16, 30,
			31, 25, 18,
			19, 31, 19,
			34, 32, 31,
			32, 24, 19,
			38, 33, 40,
			41, 42, 41,
			43, 44, 42,
			45, 46, 41,
			47, 45, 48,
			45, 47, 48,
			49, 50, 49,
			51, 52, 49,
			53, 54, 50,
			54, 55, 55,
			56, 57, 54,
			58, 56, 56,
			59, 57, 58,
			60, 56, 61,
			62, 58, 53,
			61, 58, 63,
			64, 62, 65,
			66, 67, 68,
			69, 70, 68,
			71, 72, 69,
			67, 70, 60,
			69, 59, 72,
			59, 69, 73,
			57, 59, 73,
			74, 75, 72,
			76, 73, 76,
			77, 74, 76,
			78, 79, 80,
			78, 71, 74,
			40, 42, 75,
			42, 46, 57,
			46, 55, 50,
			46, 45, 60,
			64, 65, 40,
			81, 41, 41,
			81, 43, 42,
			41, 45, 41,
			44, 47, 48,
			50, 45, 48,
			82, 49, 49,
			82, 51, 49,
			52, 53, 50,
			49, 54, 55,
			54, 56, 54,
			53, 58, 56,
			60, 59, 58,
			62, 60, 61,
			63, 62, 53,
			83, 61, 63,
			84, 64, 65,
			64, 66, 68,
			72, 69, 68,
			80, 71, 69,
			65, 67, 60,
			65, 69, 72,
			73, 59, 73,
			75, 57, 73,
			76, 74, 72,
			71, 76, 76,
			79, 77, 76,
			71, 78, 80,
			85, 78, 74,
			77, 40, 75,
			74, 42, 57,
			75, 46, 50,
			55, 46, 60,
			62, 64, 86,
			87, 88, 89,
			90, 86, 91,
			89, 86, 92,
			86, 88, 93,
			94, 91, 92,
			93, 91, 95,
			96, 92, 88,
			95, 92, 97,
			98, 95, 99,
			97, 95, 87,
			99, 88, 100,
			101, 99, 101,
			102, 103, 101,
			104, 97, 103,
			105, 104, 103,
			106, 107, 104,
			108, 97, 109,
			104, 105, 107,
			110, 105, 111,
			105, 110, 112,
			109, 111, 109,
			113, 114, 115,
			116, 112, 117,
			113, 116, 114,
			118, 108, 118,
			113, 119, 120,
			119, 117, 121,
			119, 122, 123,
			122, 124, 124,
			120, 125, 98,
			118, 121, 98,
			123, 96, 96,
			126, 93, 123,
			127, 126, 126,
			128, 93, 127,
			129, 126, 130,
			127, 131, 124,
			131, 127, 125,
			132, 131, 133,
			131, 132, 125,
			134, 135, 136,
			134, 137, 136,
			132, 135, 138,
			136, 139, 137,
			139, 136, 133,
			140, 141, 138,
			141, 140, 142,
			143, 138, 142,
			139, 144, 145,
			146, 142, 147,
			144, 139, 147,
			148, 149, 150,
			147, 137, 151,
			152, 150, 153,
			148, 152, 154,
			151, 155, 154,
			156, 153, 157,
			154, 158, 158,
			155, 159, 160,
			161, 157, 162,
			156, 161, 163,
			148, 156, 160,
			164, 165, 164,
			166, 165, 167,
			164, 168, 157,
			168, 164, 158,
			169, 168, 170,
			168, 169, 171,
			167, 170, 167,
			172, 173, 174,
			175, 171, 176,
			172, 175, 173,
			177, 166, 177,
			172, 178, 179,
			178, 176, 180,
			178, 181, 182,
			181, 183, 183,
			179, 184, 182,
			185, 186, 185,
			187, 186, 188,
			185, 189, 183,
			189, 185, 184,
			190, 189, 191,
			189, 190, 184,
			192, 193, 194,
			193, 192, 190,
			195, 196, 197,
			195, 198, 194,
			198, 195, 199,
			190, 196, 197,
			199, 196, 200,
			201, 197, 200,
			198, 202, 203,
			204, 200, 203,
			202, 205, 202,
			206, 205, 207,
			202, 198, 208,
			209, 206, 207,
			210, 208, 211,
			207, 194, 212,
			213, 211, 214,
			210, 213, 106,
			212, 215, 106,
			216, 214, 107,
			215, 217, 217,
			170, 169, 215,
			171, 170, 169,
			110, 217, 209,
			210, 216, 218,
			216, 102, 100,
			209, 218, 212,
			174, 171, 211,
			192, 174, 179,
			174, 192, 205,
			100, 87, 90,
			205, 87, 219,
			203, 90, 219,
			220, 221, 221,
			222, 204, 223,
			220, 224, 220,
			225, 222, 201,
			222, 226, 226,
			225, 227, 201,
			228, 199, 228,
			227, 229, 230,
			224, 231, 232,
			230, 231, 232,
			233, 234, 94,
			231, 89, 128,
			232, 94, 128,
			235, 236, 236,
			237, 233, 238,
			235, 129, 235,
			239, 237, 240,
			239, 241, 242,
			241, 243, 143,
			244, 141, 243,
			141, 244, 243,
			130, 133, 143,
			245, 246, 247,
			248, 245, 249,
			245, 146, 250,
			251, 252, 253,
			254, 251, 252,
			188, 191, 188,
			254, 255, 255,
			256, 187, 257,
			256, 254, 252,
			199, 228, 229,
			252, 228, 130,
			239, 238, 231,
			219, 89, 111,
			159, 155, 112,
			155, 151, 115,
			151, 150, 134,
			150, 137, 120,
			115, 134, 86,
			90, 87, 89,
			219, 90, 91,
			94, 89, 92,
			91, 86, 93,
			128, 94, 92,
			96, 93, 95,
			98, 96, 88,
			99, 95, 97,
			108, 98, 99,
			101, 97, 87,
			100, 99, 100,
			218, 101, 101,
			218, 102, 101,
			103, 104, 103,
			107, 105, 103,
			102, 106, 104,
			114, 108, 109,
			114, 104, 107,
			217, 110, 111,
			109, 105, 112,
			116, 109, 109,
			116, 113, 115,
			117, 116, 117,
			119, 113, 114,
			113, 118, 120,
			122, 119, 121,
			118, 119, 123,
			121, 122, 124,
			122, 120, 98,
			108, 118, 98,
			121, 123, 96,
			123, 126, 123,
			124, 127, 126,
			129, 128, 127,
			238, 129, 130,
			238, 127, 124,
			125, 131, 125,
			135, 132, 133,
			130, 131, 125,
			120, 134, 136,
			135, 134, 136,
			140, 132, 138,
			140, 136, 137,
			147, 139, 133,
			132, 140, 138,
			143, 141, 142,
			146, 143, 142,
			138, 139, 145,
			249, 146, 147,
			149, 144, 147,
			152, 148, 150,
			152, 147, 151,
			153, 152, 153,
			156, 148, 154,
			153, 151, 154,
			161, 156, 157,
			161, 154, 158,
			154, 155, 160,
			162, 161, 162,
			163, 156, 160,
			157, 164, 164,
			173, 166, 167,
			173, 164, 157,
			158, 168, 158,
			159, 169, 170,
			167, 168, 171,
			175, 167, 167,
			175, 172, 174,
			176, 175, 176,
			178, 172, 173,
			172, 177, 179,
			181, 178, 180,
			177, 178, 182,
			180, 181, 183,
			181, 179, 182,
			183, 185, 185,
			255, 187, 188,
			255, 185, 183,
			184, 189, 184,
			193, 190, 191,
			188, 189, 184,
			179, 192, 194,
			195, 193, 190,
			193, 195, 197,
			196, 195, 194,
			207, 198, 199,
			191, 190, 197,
			201, 199, 200,
			204, 201, 200,
			197, 198, 203,
			221, 204, 203,
			200, 202, 202,
			208, 206, 207,
			208, 202, 208,
			210, 209, 207,
			213, 210, 211,
			213, 207, 212,
			214, 213, 214,
			216, 210, 106,
			214, 212, 106,
			102, 216, 107,
			106, 215, 217,
			215, 170, 215,
			212, 171, 169,
			159, 110, 218,
			209, 216, 100,
			206, 209, 212,
			211, 174, 211,
			194, 192, 179,
			176, 174, 205,
			206, 100, 90,
			203, 205, 219,
			221, 203, 219,
			224, 220, 221,
			220, 222, 223,
			225, 220, 201,
			204, 222, 226,
			222, 225, 201,
			226, 228, 228,
			226, 227, 230,
			223, 224, 232,
			234, 230, 232,
			236, 233, 94,
			232, 231, 128,
			236, 232, 128,
			129, 235, 236,
			235, 237, 238,
			239, 235, 240,
			237, 239, 242,
			240, 241, 143,
			246, 244, 243,
			133, 141, 243,
			241, 130, 143,
			146, 245, 249,
			247, 245, 250,
			253, 251, 253,
			257, 254, 252,
			251, 188, 188,
			251, 254, 255,
			254, 256, 252,
			191, 199, 229,
			250, 252, 130,
			241, 239, 231,
			224, 219, 111,
			110, 159, 112,
			111, 155, 115,
			112, 151, 134,
			115, 150, 120,
			117, 115,
		},
	},
	{
		.name = "WHITE-GREEN_Cube.010",
		.colors = { game::GREEN, game::WHITE },
		.vertices = { // 261 vertex
			VertexData{
				.position = { +1.09f, -2.99f, +0.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.06f, -2.97f, +0.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.87f, -3.00f, +0.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.13f, -3.00f, -0.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.13f, -2.99f, +0.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.87f, -2.99f, +0.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.91f, -2.99f, -0.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.87f, -3.00f, -0.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.91f, -2.99f, +0.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.91f, -2.99f, -0.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.87f, -2.99f, -0.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.13f, -2.99f, -0.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.87f, -2.98f, -0.95f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.09f, -2.99f, -0.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.13f, -2.98f, -0.95f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.09f, -2.97f, -0.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.96f, -2.94f, -0.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.95f, -2.98f, -0.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.95f, -2.98f, +0.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.94f, -2.97f, +0.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.97f, -2.94f, +0.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.94f, -2.96f, +0.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.98f, -2.95f, +0.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.02f, -1.13f, -0.95f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.13f, -2.95f, -0.98f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.03f, -2.94f, -0.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.06f, -2.96f, +0.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.02f, -2.95f, -0.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.09f, -2.97f, +0.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.09f, -2.99f, +0.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.87f, -2.95f, +0.98f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.91f, -2.97f, +0.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.96f, -2.94f, +0.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.91f, -2.99f, +0.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.99f, -2.91f, +0.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.97f, -0.17f, +0.17f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.99f, -2.91f, -0.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.04f, -2.94f, -0.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.06f, -2.94f, +0.96f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.94f, -2.94f, +0.96f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.94f, -2.97f, -0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, -2.94f, -0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, -2.94f, -0.96f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, -2.98f, -0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, -2.95f, -0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, -2.98f, +0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -2.91f, -0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +3.00f, -2.87f, -0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -2.91f, -0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, -2.94f, +0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +3.00f, -2.87f, +0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -2.91f, +0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.96f, -1.06f, +0.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +3.00f, -1.13f, -0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -2.87f, -0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +3.00f, -1.13f, +0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -1.09f, -0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -1.09f, +0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -1.13f, -0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -1.13f, +0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -1.09f, +0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, -1.06f, +0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, -1.05f, +0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, -1.02f, -0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, -1.05f, -0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, -1.02f, +0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, -1.09f, -0.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -1.09f, -0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, -1.03f, -0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, -1.09f, -0.97f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, -1.06f, -0.96f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, -1.13f, -0.95f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, -1.13f, -0.98f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, -2.87f, +0.98f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, -2.94f, +0.96f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, -2.91f, +0.99f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, -2.91f, +0.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -2.87f, +0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, -1.09f, +0.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, -1.06f, +0.96f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, -2.87f, +0.95f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, -1.01f, +0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -2.91f, +0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, -2.91f, -0.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, -2.97f, -0.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.96f, -2.94f, -0.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, -1.09f, -0.99f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, -2.91f, +0.97f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, -1.03f, +0.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +1.09f, -2.97f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -2.95f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -2.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -2.94f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -2.99f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -2.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -2.87f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -2.94f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.97f, -0.17f, +0.17f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -2.87f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -2.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -2.91f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, -2.91f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -2.96f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -2.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -2.97f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, -2.87f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -2.94f, -0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.96f, -2.94f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, -2.94f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.98f, -1.05f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, -1.02f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, -1.06f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.96f, -1.06f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -1.03f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -1.01f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -1.09f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -1.06f, -0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -1.06f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -1.09f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, -1.13f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -1.03f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -1.13f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.98f, -2.87f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -1.04f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -1.05f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -1.01f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -1.02f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -1.02f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.99f, -1.09f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -1.01f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -1.03f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -1.06f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, -1.02f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -1.05f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -1.13f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -1.13f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -1.09f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -1.09f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, -1.09f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -1.04f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -1.09f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -2.99f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, -1.13f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -1.06f, -0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.04f, -1.06f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, -1.06f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -1.03f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -1.01f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, -1.05f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -1.01f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -1.09f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, -1.13f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, -1.02f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -1.01f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -1.03f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, -1.06f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -1.02f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, -1.05f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -1.09f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, -1.13f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -1.09f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -2.87f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, -2.87f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -1.13f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, -2.87f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -2.91f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -2.87f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -2.91f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -2.87f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -2.91f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, -2.94f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, -2.95f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, -2.98f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, -2.95f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, -2.98f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, -2.94f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.04f, -2.94f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, -2.91f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -2.97f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, -1.13f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -2.91f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -2.91f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -2.94f, -0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, -2.87f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, -2.87f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -2.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -2.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -2.96f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -2.95f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -2.99f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, -2.91f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -2.95f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -2.97f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -2.94f, +0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.04f, -2.94f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, -2.87f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, -2.87f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -2.91f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -2.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -2.87f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -2.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -2.94f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -1.13f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -2.98f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -2.95f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -2.97f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -2.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -2.87f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -2.94f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -2.98f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -2.99f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -2.91f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.96f, -2.94f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -2.94f, +0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, -2.87f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, -2.91f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -2.87f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -1.13f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -1.13f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -1.09f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -1.09f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -1.09f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, -1.13f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, -1.09f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.98f, -1.13f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.98f, -2.87f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -1.04f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -1.03f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -1.06f, +0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -1.09f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -1.03f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -1.01f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -1.01f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -1.00f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -1.05f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -1.01f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -1.01f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -1.00f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -1.00f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -1.00f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -1.01f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -1.01f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -1.05f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -1.06f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -1.09f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -1.03f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -1.13f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -1.06f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -1.09f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -1.13f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -1.06f, +0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, -1.09f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, -1.13f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, -1.13f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.04f, -1.06f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -1.04f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -1.09f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -1.13f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -1.02f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, -1.06f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.99f, -2.87f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},

		},

		.indices = { // 1284 values
			0, 1, 2, 3,
			4, 0, 5,
			3, 0, 6,
			0, 2, 7,
			8, 5, 6,
			7, 5, 9,
			10, 6, 2,
			9, 6, 11,
			12, 9, 13,
			11, 9, 1,
			13, 2, 14,
			15, 13, 12,
			16, 17, 12,
			18, 10, 10,
			19, 7, 18,
			20, 19, 19,
			21, 7, 20,
			22, 19, 14,
			23, 24, 25,
			14, 1, 4,
			25, 1, 26,
			27, 4, 26,
			28, 29, 8,
			30, 3, 21,
			31, 8, 21,
			32, 33, 34,
			32, 22, 30,
			26, 3, 0,
			4, 1, 3,
			26, 4, 5,
			8, 3, 6,
			5, 0, 7,
			21, 8, 6,
			10, 7, 9,
			12, 10, 2,
			13, 9, 11,
			35, 12, 13,
			15, 11, 1,
			14, 13, 14,
			24, 15, 12,
			35, 16, 12,
			17, 18, 10,
			18, 19, 18,
			36, 20, 19,
			22, 21, 20,
			34, 22, 14,
			37, 23, 25,
			37, 14, 4,
			27, 25, 26,
			29, 27, 26,
			38, 28, 8,
			31, 30, 21,
			33, 31, 21,
			22, 32, 34,
			39, 32, 30,
			38, 26, 40,
			41, 42, 43,
			41, 44, 45,
			44, 46, 46,
			40, 47, 48,
			49, 50, 46,
			50, 49, 47,
			51, 50, 52,
			50, 51, 47,
			53, 54, 54,
			55, 56, 56,
			51, 54, 57,
			56, 58, 55,
			58, 56, 52,
			59, 60, 57,
			60, 59, 61,
			62, 57, 61,
			58, 63, 64,
			65, 61, 66,
			63, 58, 66,
			67, 68, 69,
			66, 55, 70,
			71, 69, 72,
			67, 71, 73,
			74, 75, 76,
			75, 77, 62,
			78, 60, 77,
			60, 78, 77,
			48, 52, 62,
			79, 80, 81,
			79, 65, 48,
			74, 82, 69,
			83, 70, 53,
			69, 55, 40,
			84, 53, 40,
			44, 41, 43,
			85, 41, 45,
			43, 44, 46,
			44, 40, 48,
			82, 49, 46,
			47, 50, 47,
			54, 51, 52,
			48, 50, 47,
			40, 53, 54,
			53, 55, 56,
			59, 51, 57,
			59, 56, 55,
			66, 58, 52,
			51, 59, 57,
			62, 60, 61,
			65, 62, 61,
			57, 58, 64,
			81, 65, 66,
			68, 63, 66,
			71, 67, 69,
			71, 66, 70,
			72, 71, 72,
			86, 67, 73,
			87, 74, 76,
			73, 75, 62,
			80, 78, 77,
			52, 60, 77,
			75, 48, 62,
			65, 79, 81,
			88, 79, 48,
			75, 74, 69,
			84, 83, 53,
			84, 69, 40,
			42, 84, 89,
			90, 91, 89,
			92, 93, 91,
			94, 92, 91,
			95, 96, 92,
			97, 93, 98,
			92, 94, 96,
			99, 94, 100,
			94, 99, 101,
			98, 100, 98,
			102, 103, 104,
			105, 101, 106,
			102, 105, 103,
			107, 97, 107,
			102, 108, 109,
			110, 111, 110,
			112, 111, 113,
			114, 112, 115,
			116, 117, 115,
			118, 119, 120,
			115, 121, 121,
			117, 122, 123,
			124, 120, 125,
			118, 124, 126,
			114, 125, 126,
			123, 127, 114,
			128, 118, 127,
			129, 130, 123,
			131, 129, 129,
			132, 130, 131,
			133, 129, 134,
			131, 135, 120,
			135, 131, 121,
			136, 135, 137,
			135, 136, 138,
			134, 137, 134,
			139, 140, 141,
			142, 138, 143,
			139, 142, 140,
			144, 133, 144,
			139, 145, 146,
			145, 143, 147,
			145, 148, 149,
			148, 150, 150,
			146, 151, 132,
			144, 147, 132,
			149, 152, 152,
			153, 154, 149,
			155, 153, 153,
			156, 154, 155,
			157, 153, 158,
			155, 159, 150,
			159, 155, 151,
			160, 159, 161,
			159, 160, 151,
			162, 163, 164,
			163, 162, 160,
			165, 166, 167,
			165, 168, 164,
			168, 165, 161,
			166, 169, 167,
			169, 166, 170,
			171, 167, 170,
			168, 172, 173,
			174, 170, 173,
			172, 175, 172,
			176, 175, 177,
			172, 168, 178,
			179, 176, 177,
			180, 178, 181,
			177, 164, 182,
			183, 181, 184,
			180, 183, 95,
			182, 185, 95,
			186, 184, 96,
			185, 187, 187,
			137, 136, 185,
			138, 137, 136,
			99, 187, 179,
			180, 186, 188,
			186, 90, 182,
			141, 138, 181,
			162, 141, 146,
			141, 162, 189,
			190, 174, 191,
			192, 193, 192,
			194, 190, 171,
			190, 195, 195,
			194, 196, 171,
			197, 169, 197,
			196, 198, 198,
			199, 200, 199,
			194, 191, 200,
			201, 202, 199,
			203, 201, 203,
			193, 204, 205,
			203, 204, 206,
			201, 203, 206,
			207, 208, 205,
			209, 206, 210,
			211, 209, 212,
			213, 211, 207,
			211, 214, 207,
			215, 216, 208,
			216, 217, 217,
			218, 219, 216,
			220, 218, 218,
			221, 219, 220,
			222, 218, 223,
			224, 220, 215,
			223, 220, 225,
			226, 224, 227,
			226, 228, 229,
			227, 230, 231,
			227, 232, 231,
			109, 233, 234,
			231, 235, 235,
			233, 236, 236,
			237, 238, 233,
			111, 237, 237,
			127, 238, 111,
			126, 237, 238,
			130, 239, 239,
			236, 238, 239,
			154, 240, 130,
			152, 239, 240,
			235, 236, 154,
			241, 240, 156,
			242, 241, 241,
			234, 235, 242,
			243, 234, 242,
			244, 245, 243,
			230, 234, 222,
			243, 221, 245,
			221, 243, 246,
			219, 221, 246,
			247, 248, 245,
			249, 246, 249,
			250, 247, 249,
			251, 252, 250,
			253, 254, 252,
			255, 253, 254,
			158, 161, 158,
			255, 256, 256,
			257, 157, 251,
			257, 255, 156,
			257, 258, 258,
			251, 244, 254,
			169, 197, 250,
			197, 198, 247,
			198, 200, 248,
			200, 202, 219,
			202, 217, 208,
			202, 201, 222,
			226, 229, 117,
			99, 122, 101,
			117, 116, 89,
			188, 90, 89,
			91, 92, 91,
			96, 94, 91,
			90, 95, 92,
			103, 97, 98,
			103, 92, 96,
			187, 99, 100,
			98, 94, 101,
			105, 98, 98,
			105, 102, 104,
			106, 105, 106,
			108, 102, 103,
			102, 107, 109,
			259, 110, 110,
			113, 112, 113,
			128, 114, 115,
			119, 116, 115,
			124, 118, 120,
			124, 115, 121,
			115, 117, 123,
			125, 124, 125,
			114, 118, 126,
			112, 114, 126,
			125, 123, 127,
			123, 129, 123,
			120, 131, 129,
			133, 132, 131,
			140, 133, 134,
			140, 131, 120,
			121, 135, 121,
			122, 136, 137,
			134, 135, 138,
			142, 134, 134,
			142, 139, 141,
			143, 142, 143,
			145, 139, 140,
			139, 144, 146,
			148, 145, 147,
			144, 145, 149,
			147, 148, 150,
			148, 146, 132,
			133, 144, 132,
			147, 149, 152,
			149, 153, 149,
			150, 155, 153,
			157, 156, 155,
			256, 157, 158,
			256, 155, 150,
			151, 159, 151,
			163, 160, 161,
			158, 159, 151,
			146, 162, 164,
			165, 163, 160,
			163, 165, 167,
			166, 165, 164,
			177, 168, 161,
			160, 166, 167,
			171, 169, 170,
			174, 171, 170,
			167, 168, 173,
			189, 174, 173,
			170, 172, 172,
			178, 176, 177,
			178, 172, 178,
			180, 179, 177,
			183, 180, 181,
			183, 177, 182,
			184, 183, 184,
			186, 180, 95,
			184, 182, 95,
			90, 186, 96,
			95, 185, 187,
			185, 137, 185,
			182, 138, 136,
			122, 99, 188,
			179, 186, 182,
			181, 141, 181,
			164, 162, 146,
			143, 141, 189,
			192, 190, 191,
			194, 192, 171,
			174, 190, 195,
			190, 194, 171,
			195, 197, 197,
			195, 196, 198,
			196, 199, 199,
			196, 194, 200,
			199, 201, 199,
			191, 203, 203,
			191, 193, 205,
			206, 203, 206,
			208, 201, 206,
			209, 207, 205,
			210, 209, 210,
			212, 211, 207,
			209, 211, 207,
			214, 215, 208,
			207, 216, 217,
			216, 218, 216,
			215, 220, 218,
			222, 221, 220,
			224, 222, 223,
			225, 224, 215,
			260, 223, 225,
			228, 226, 229,
			226, 227, 231,
			230, 227, 231,
			232, 109, 234,
			230, 231, 235,
			231, 233, 236,
			233, 237, 233,
			109, 111, 237,
			126, 127, 111,
			112, 126, 238,
			127, 130, 239,
			240, 236, 239,
			152, 154, 130,
			132, 152, 240,
			241, 235, 154,
			156, 241, 156,
			258, 242, 241,
			242, 234, 242,
			245, 243, 242,
			258, 244, 243,
			229, 230, 222,
			229, 243, 245,
			246, 221, 246,
			248, 219, 246,
			249, 247, 245,
			244, 249, 249,
			252, 250, 249,
			244, 251, 250,
			252, 253, 252,
			251, 255, 254,
			253, 158, 158,
			253, 255, 256,
			255, 257, 156,
			157, 257, 258,
			257, 251, 254,
			161, 169, 250,
			254, 197, 247,
			250, 198, 248,
			247, 200, 219,
			248, 202, 208,
			217, 202, 222,
			224, 226, 117,
			100, 99, 101,
			100, 117,
		},
	},
	{
		.name = "WHITE-GREEN-RED_Cube.011",
		.colors = { game::RED, game::GREEN, game::WHITE },
		.vertices = { // 275 vertex
			VertexData{
				.position = { +2.87f, -3.00f, -1.13f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.13f, -2.99f, -1.09f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.06f, -2.97f, -1.09f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.13f, -3.00f, -2.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.09f, -2.99f, -1.13f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.87f, -2.99f, -1.09f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.91f, -2.99f, -2.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.87f, -3.00f, -2.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.91f, -2.99f, -1.13f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.91f, -2.99f, -2.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.87f, -2.99f, -2.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.13f, -2.99f, -2.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.87f, -2.98f, -2.95f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.09f, -2.99f, -2.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.13f, -2.98f, -2.95f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.09f, -2.97f, -2.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.96f, -2.94f, -2.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.95f, -2.98f, -2.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.95f, -2.98f, -1.13f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.94f, -2.97f, -1.09f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.97f, -2.94f, -1.09f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.94f, -2.96f, -1.06f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.98f, -2.95f, -1.13f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.02f, -1.13f, -2.95f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.13f, -2.95f, -2.98f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.03f, -2.94f, -2.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.06f, -2.96f, -1.06f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.02f, -2.95f, -2.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.09f, -2.97f, -1.06f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.09f, -2.99f, -1.09f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.87f, -2.95f, -1.02f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.91f, -2.97f, -1.06f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.96f, -2.94f, -1.06f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.91f, -2.99f, -1.09f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.99f, -2.91f, -1.13f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.87f, -0.16f, +0.46f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.99f, -2.91f, -2.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.04f, -2.94f, -2.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.06f, -2.94f, -1.04f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.94f, -2.94f, -1.04f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.94f, -2.97f, -2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, -2.94f, -2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, -2.94f, -2.96f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, -2.98f, -2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, -2.95f, -2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, -2.98f, -1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -2.91f, -2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +3.00f, -2.87f, -2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -2.91f, -2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, -2.94f, -1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +3.00f, -2.87f, -1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -2.91f, -1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.96f, -1.06f, -1.06f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +3.00f, -1.13f, -2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -2.87f, -2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +3.00f, -1.13f, -1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -1.09f, -2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -1.09f, -1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -1.13f, -2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -1.09f, -1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -1.13f, -1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, -1.06f, -1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, -1.05f, -1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, -1.02f, -2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, -1.05f, -2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, -1.02f, -1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, -1.09f, -2.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -1.09f, -2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, -1.03f, -2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, -1.09f, -2.97f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, -1.06f, -2.96f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, -1.13f, -2.95f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, -1.13f, -2.98f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, -2.87f, -1.02f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, -2.94f, -1.04f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, -2.91f, -1.01f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, -2.91f, -1.06f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -2.87f, -1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, -1.09f, -1.06f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, -1.06f, -1.04f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, -2.87f, -1.05f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, -1.01f, -1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -2.91f, -1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, -2.97f, -2.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.96f, -2.94f, -2.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, -1.09f, -2.99f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, -2.91f, -1.03f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, -1.03f, -1.06f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, -2.91f, -2.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +1.09f, -2.97f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.87f, -2.95f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.13f, -2.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.13f, -2.99f, -2.91f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.91f, -2.94f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.87f, -2.87f, -3.00f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.09f, -2.87f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.09f, -2.94f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.87f, -0.16f, +0.46f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.91f, -2.87f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.91f, -2.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.94f, -2.91f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.97f, -2.91f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.94f, -2.96f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.87f, -2.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.91f, -2.97f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.95f, -2.87f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.94f, -2.94f, -2.96f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.96f, -2.94f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.97f, -2.94f, -2.91f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.87f, -1.09f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.94f, -1.06f, -2.96f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.91f, -1.06f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.91f, -1.09f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.95f, -1.13f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.91f, -1.03f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.91f, -1.13f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.98f, -2.87f, -2.95f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.09f, -1.13f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.09f, -1.06f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.13f, -1.13f, -3.00f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.09f, -1.09f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.06f, -1.09f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.03f, -1.09f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.06f, -1.04f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.13f, -1.09f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.09f, -2.99f, -2.87f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.05f, -1.13f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.06f, -1.06f, -2.96f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.06f, -2.94f, -2.96f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.13f, -2.87f, -3.00f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.09f, -2.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.05f, -2.87f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.06f, -2.96f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.13f, -2.95f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.87f, -1.05f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.03f, -1.06f, -2.91f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.02f, -1.13f, -2.95f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.06f, -2.91f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.98f, -1.05f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, -1.02f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, -1.06f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.96f, -1.06f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -1.03f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -1.01f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -1.04f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -1.05f, -2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -1.03f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -1.01f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -1.09f, -2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -1.02f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -1.02f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.99f, -1.09f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -1.01f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -1.03f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -1.06f, -2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, -1.02f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -1.05f, -2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -1.09f, -2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.04f, -1.06f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -1.04f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, -1.06f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -1.03f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -1.06f, -2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -1.01f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, -1.05f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -1.01f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -1.09f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, -1.13f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, -1.02f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -1.01f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -1.03f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, -1.06f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -1.02f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, -1.05f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -1.09f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, -1.13f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -1.09f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -2.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, -2.87f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -1.13f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, -2.87f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -2.91f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -2.87f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -2.91f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -2.87f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -2.91f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, -2.94f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, -2.95f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, -2.98f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, -2.95f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, -2.98f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, -2.94f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.04f, -2.94f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, -2.91f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -2.97f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, -1.13f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -2.91f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -2.91f, -2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -2.94f, -2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, -2.87f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, -2.87f, -2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -2.91f, -2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -2.99f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -2.99f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, -2.91f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -2.95f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -2.97f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -2.94f, -1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.04f, -2.94f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, -2.87f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, -2.87f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -2.91f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -2.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -2.87f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -2.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -2.94f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -1.13f, -3.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -2.98f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -2.95f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -2.97f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -2.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -2.87f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -2.94f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -2.98f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -2.99f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -2.91f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.96f, -2.94f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -2.94f, -1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, -2.87f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, -2.91f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -2.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -1.13f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -1.13f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -1.09f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -1.09f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -1.09f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, -1.13f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, -1.09f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.98f, -1.13f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.98f, -2.87f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -1.04f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -1.03f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -1.06f, -1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -1.09f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -1.03f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -1.01f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -1.01f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -1.00f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -1.05f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -1.01f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -1.01f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -1.00f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -1.00f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -1.00f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -1.01f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -1.01f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -1.05f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -1.06f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -1.09f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -1.03f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -1.13f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -1.06f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -1.09f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -1.13f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -1.06f, -1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, -1.09f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, -1.13f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, -1.13f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.04f, -1.06f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -1.04f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -1.09f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -1.13f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -1.02f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, -1.06f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.99f, -2.87f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},

		},

		.indices = { // 1284 values
			0, 1, 2, 3,
			1, 4, 5,
			3, 4, 6,
			4, 0, 7,
			8, 5, 6,
			7, 5, 9,
			10, 6, 0,
			9, 6, 11,
			12, 9, 13,
			11, 9, 2,
			13, 0, 14,
			15, 13, 12,
			16, 17, 12,
			18, 10, 10,
			19, 7, 18,
			20, 19, 19,
			21, 7, 20,
			22, 19, 14,
			23, 24, 25,
			14, 2, 1,
			25, 2, 26,
			27, 1, 26,
			28, 29, 8,
			30, 3, 21,
			31, 8, 21,
			32, 33, 34,
			32, 22, 30,
			26, 3, 0,
			4, 1, 3,
			26, 1, 5,
			8, 3, 6,
			5, 4, 7,
			21, 8, 6,
			10, 7, 9,
			12, 10, 0,
			13, 9, 11,
			35, 12, 13,
			15, 11, 2,
			14, 13, 14,
			24, 15, 12,
			35, 16, 12,
			17, 18, 10,
			18, 19, 18,
			36, 20, 19,
			22, 21, 20,
			34, 22, 14,
			37, 23, 25,
			37, 14, 1,
			27, 25, 26,
			29, 27, 26,
			38, 28, 8,
			31, 30, 21,
			33, 31, 21,
			22, 32, 34,
			39, 32, 30,
			38, 26, 40,
			41, 42, 43,
			41, 44, 45,
			44, 46, 46,
			40, 47, 48,
			49, 50, 46,
			50, 49, 47,
			51, 50, 52,
			50, 51, 47,
			53, 54, 54,
			55, 56, 56,
			51, 54, 57,
			56, 58, 55,
			58, 56, 59,
			51, 60, 57,
			59, 60, 61,
			62, 57, 61,
			58, 63, 64,
			65, 61, 66,
			63, 58, 66,
			67, 68, 69,
			66, 55, 70,
			71, 69, 72,
			67, 71, 73,
			74, 75, 76,
			75, 77, 62,
			78, 59, 77,
			59, 78, 77,
			48, 52, 62,
			79, 80, 81,
			79, 65, 48,
			74, 82, 83,
			70, 69, 53,
			69, 55, 40,
			83, 53, 40,
			44, 41, 43,
			84, 41, 45,
			43, 44, 46,
			44, 40, 48,
			82, 49, 46,
			47, 50, 47,
			54, 51, 52,
			48, 50, 47,
			40, 53, 54,
			53, 55, 56,
			60, 51, 57,
			60, 56, 55,
			66, 58, 59,
			52, 51, 57,
			62, 59, 61,
			65, 62, 61,
			57, 58, 64,
			81, 65, 66,
			68, 63, 66,
			71, 67, 69,
			71, 66, 70,
			72, 71, 72,
			85, 67, 73,
			86, 74, 76,
			73, 75, 62,
			80, 78, 77,
			52, 59, 77,
			75, 48, 62,
			65, 79, 81,
			87, 79, 48,
			75, 74, 83,
			88, 70, 53,
			83, 69, 40,
			42, 83, 89,
			90, 91, 92,
			91, 93, 91,
			94, 93, 91,
			95, 96, 93,
			97, 92, 98,
			93, 94, 96,
			99, 94, 100,
			94, 99, 101,
			98, 100, 98,
			102, 103, 104,
			105, 101, 106,
			102, 105, 103,
			107, 97, 107,
			102, 108, 109,
			110, 111, 109,
			112, 113, 114,
			109, 115, 115,
			111, 116, 117,
			118, 119, 114,
			119, 118, 115,
			120, 119, 121,
			119, 120, 122,
			117, 121, 117,
			123, 124, 125,
			126, 122, 127,
			123, 126, 95,
			128, 129, 95,
			130, 131, 96,
			129, 132, 132,
			121, 120, 129,
			122, 121, 120,
			99, 132, 133,
			130, 90, 128,
			125, 122, 111,
			99, 116, 110,
			100, 111, 89,
			133, 90, 92,
			89, 91, 91,
			96, 94, 91,
			90, 95, 93,
			103, 97, 98,
			103, 93, 96,
			132, 99, 100,
			98, 94, 101,
			105, 98, 98,
			105, 102, 104,
			106, 105, 106,
			108, 102, 103,
			102, 107, 109,
			113, 110, 109,
			134, 112, 114,
			134, 109, 115,
			109, 111, 117,
			124, 118, 114,
			115, 119, 115,
			116, 120, 121,
			117, 119, 122,
			126, 117, 117,
			126, 123, 125,
			127, 126, 127,
			135, 123, 95,
			131, 128, 95,
			90, 130, 96,
			95, 129, 132,
			129, 121, 129,
			128, 122, 120,
			116, 99, 133,
			136, 130, 128,
			137, 125, 111,
			100, 99, 110,
			101, 100, 138,
			139, 140, 139,
			141, 140, 142,
			143, 141, 144,
			145, 146, 147,
			148, 145, 149,
			143, 147, 149,
			144, 150, 143,
			151, 148, 150,
			152, 153, 144,
			154, 152, 152,
			155, 153, 154,
			156, 152, 157,
			158, 156, 158,
			159, 160, 161,
			160, 162, 163,
			160, 164, 165,
			164, 166, 166,
			161, 167, 155,
			158, 163, 155,
			165, 168, 168,
			169, 170, 165,
			171, 169, 169,
			172, 170, 171,
			173, 169, 174,
			171, 175, 166,
			175, 171, 167,
			176, 175, 177,
			175, 176, 167,
			178, 179, 180,
			179, 178, 176,
			181, 182, 183,
			181, 184, 180,
			184, 181, 177,
			182, 185, 183,
			185, 182, 186,
			187, 183, 186,
			184, 188, 189,
			190, 186, 189,
			188, 191, 188,
			192, 191, 193,
			188, 184, 194,
			195, 192, 193,
			196, 194, 197,
			193, 180, 198,
			199, 197, 200,
			196, 199, 195,
			196, 201, 197,
			178, 202, 161,
			202, 178, 203,
			204, 190, 205,
			206, 207, 206,
			208, 204, 187,
			204, 209, 209,
			208, 210, 187,
			211, 185, 211,
			210, 212, 212,
			213, 214, 213,
			208, 205, 214,
			215, 216, 213,
			217, 215, 217,
			207, 218, 219,
			217, 218, 220,
			215, 217, 220,
			221, 222, 219,
			223, 220, 224,
			225, 223, 226,
			227, 225, 221,
			225, 228, 221,
			229, 230, 222,
			230, 231, 231,
			232, 233, 230,
			234, 232, 232,
			235, 233, 234,
			236, 232, 237,
			238, 234, 229,
			237, 234, 239,
			240, 238, 241,
			240, 242, 243,
			241, 244, 245,
			241, 246, 245,
			138, 247, 248,
			245, 249, 249,
			247, 250, 251,
			247, 252, 247,
			140, 252, 252,
			150, 251, 140,
			149, 252, 251,
			153, 253, 253,
			250, 251, 253,
			170, 254, 153,
			168, 253, 254,
			249, 250, 170,
			255, 254, 172,
			256, 255, 255,
			248, 249, 256,
			257, 248, 256,
			258, 259, 257,
			244, 248, 236,
			257, 235, 259,
			235, 257, 260,
			233, 235, 260,
			261, 262, 259,
			263, 260, 263,
			264, 261, 263,
			265, 266, 264,
			267, 268, 266,
			269, 267, 268,
			174, 177, 174,
			269, 270, 270,
			271, 173, 265,
			271, 269, 172,
			271, 272, 272,
			265, 258, 268,
			185, 211, 264,
			211, 212, 261,
			212, 214, 262,
			214, 216, 233,
			216, 231, 222,
			216, 215, 236,
			240, 243, 138,
			273, 139, 139,
			142, 141, 142,
			151, 143, 144,
			147, 145, 147,
			143, 148, 149,
			141, 143, 149,
			147, 144, 150,
			144, 152, 144,
			146, 154, 152,
			156, 155, 154,
			157, 156, 157,
			159, 158, 161,
			164, 160, 163,
			158, 160, 165,
			163, 164, 166,
			164, 161, 155,
			156, 158, 155,
			163, 165, 168,
			165, 169, 165,
			166, 171, 169,
			173, 172, 171,
			270, 173, 174,
			270, 171, 166,
			167, 175, 167,
			179, 176, 177,
			174, 175, 167,
			161, 178, 180,
			181, 179, 176,
			179, 181, 183,
			182, 181, 180,
			193, 184, 177,
			176, 182, 183,
			187, 185, 186,
			190, 187, 186,
			183, 184, 189,
			203, 190, 189,
			186, 188, 188,
			194, 192, 193,
			194, 188, 194,
			196, 195, 193,
			199, 196, 197,
			199, 193, 198,
			200, 199, 200,
			201, 196, 197,
			180, 178, 161,
			162, 202, 203,
			206, 204, 205,
			208, 206, 187,
			190, 204, 209,
			204, 208, 187,
			209, 211, 211,
			209, 210, 212,
			210, 213, 213,
			210, 208, 214,
			213, 215, 213,
			205, 217, 217,
			205, 207, 219,
			220, 217, 220,
			222, 215, 220,
			223, 221, 219,
			224, 223, 224,
			226, 225, 221,
			223, 225, 221,
			228, 229, 222,
			221, 230, 231,
			230, 232, 230,
			229, 234, 232,
			236, 235, 234,
			238, 236, 237,
			239, 238, 229,
			274, 237, 239,
			242, 240, 243,
			240, 241, 245,
			244, 241, 245,
			246, 138, 248,
			244, 245, 249,
			245, 247, 251,
			250, 247, 247,
			138, 140, 252,
			149, 150, 140,
			141, 149, 251,
			150, 153, 253,
			254, 250, 253,
			168, 170, 153,
			155, 168, 254,
			255, 249, 170,
			172, 255, 172,
			272, 256, 255,
			256, 248, 256,
			259, 257, 256,
			272, 258, 257,
			243, 244, 236,
			243, 257, 259,
			260, 235, 260,
			262, 233, 260,
			263, 261, 259,
			258, 263, 263,
			266, 264, 263,
			258, 265, 264,
			266, 267, 266,
			265, 269, 268,
			267, 174, 174,
			267, 269, 270,
			269, 271, 172,
			173, 271, 272,
			271, 265, 268,
			177, 185, 264,
			268, 211, 261,
			264, 212, 262,
			261, 214, 233,
			262, 216, 222,
			231, 216, 236,
			238, 240,
		},
	},
	{
		.name = "WHITE-GREEN-ORANGE_Cube.012",
		.colors = { game::GREEN, game::ORANGE, game::WHITE },
		.vertices = { // 274 vertex
			VertexData{
				.position = { +1.09f, -2.99f, +2.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.06f, -2.97f, +2.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.87f, -3.00f, +2.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.13f, -3.00f, +1.13f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.13f, -2.99f, +2.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.87f, -2.99f, +2.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.91f, -2.99f, +1.13f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.87f, -3.00f, +1.13f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.91f, -2.99f, +2.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.91f, -2.99f, +1.09f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.87f, -2.99f, +1.09f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.09f, -2.99f, +1.09f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.13f, -2.99f, +1.09f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.87f, -2.98f, +1.05f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.13f, -2.98f, +1.05f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.09f, -2.97f, +1.06f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.96f, -2.94f, +1.06f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.95f, -2.98f, +1.13f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.95f, -2.98f, +2.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.94f, -2.97f, +2.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.99f, -2.91f, +1.09f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.97f, -2.94f, +2.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.94f, -2.96f, +2.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.98f, -2.95f, +2.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.02f, -1.13f, +1.05f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.13f, -2.95f, +1.02f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.03f, -2.94f, +1.09f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.06f, -2.96f, +2.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.02f, -2.95f, +1.13f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.09f, -2.97f, +2.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.09f, -2.99f, +2.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.87f, -2.95f, +2.98f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.91f, -2.97f, +2.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.96f, -2.94f, +2.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.91f, -2.99f, +2.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.99f, -2.91f, +2.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.87f, +0.16f, -0.46f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.04f, -2.94f, +1.06f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +1.06f, -2.94f, +2.96f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.94f, -2.94f, +2.96f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +2.94f, -2.97f, +1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, -2.94f, +1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, -2.94f, +1.04f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, -2.98f, +1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, -2.95f, +1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, -2.98f, +2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -2.91f, +1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +3.00f, -2.87f, +1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -2.91f, +1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, -2.94f, +2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +3.00f, -2.87f, +2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -2.91f, +2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.96f, -1.06f, +2.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +3.00f, -1.13f, +1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -2.87f, +1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +3.00f, -1.13f, +2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -1.09f, +1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -1.09f, +2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -1.13f, +1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -1.09f, +2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -1.13f, +2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, -1.06f, +2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, -1.05f, +2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, -1.02f, +1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, -1.05f, +1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, -1.02f, +2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, -1.09f, +1.06f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -1.09f, +1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, -1.03f, +1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, -1.09f, +1.03f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, -1.06f, +1.04f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, -1.13f, +1.05f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, -1.13f, +1.02f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, -2.87f, +2.98f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, -2.94f, +2.96f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, -2.91f, +2.99f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, -2.91f, +2.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -2.87f, +2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, -1.09f, +2.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, -1.06f, +2.96f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, -2.87f, +2.95f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, -1.01f, +2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -2.91f, +2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, -2.97f, +1.06f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.96f, -2.94f, +1.06f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, -1.09f, +1.01f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, -2.91f, +2.97f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, -1.03f, +2.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, -2.91f, +1.06f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +1.13f, -2.95f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.09f, -2.97f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.06f, -2.94f, +2.96f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.09f, -2.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.09f, -2.87f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.13f, -2.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.04f, -2.94f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.09f, -2.94f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.87f, -1.13f, +1.00f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.13f, -2.98f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.87f, -2.95f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.91f, -2.97f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.87f, -2.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.91f, -2.87f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.91f, -2.94f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.87f, -2.98f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.91f, -2.99f, +2.91f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.94f, -2.91f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.96f, -2.94f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.94f, -2.94f, +2.96f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.95f, -2.87f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.97f, -2.91f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.87f, -2.87f, +3.00f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.91f, -1.13f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.87f, -1.13f, +3.00f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.91f, -1.09f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.94f, -1.09f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.13f, -1.09f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.95f, -1.13f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.97f, -1.09f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.98f, -1.13f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.98f, -2.87f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.94f, -1.04f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.91f, -1.06f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.09f, -1.03f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.13f, -1.13f, +3.00f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.09f, -1.06f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.09f, -1.09f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.09f, -1.13f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.06f, -1.06f, +2.96f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.03f, -1.09f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.05f, -1.13f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.87f, -1.09f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.05f, -2.87f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.99f, -2.87f, +2.91f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.94f, -1.06f, +2.96f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.06f, -1.09f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.09f, -2.97f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -2.95f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -2.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -2.94f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -2.99f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -2.87f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -2.87f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -2.94f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.87f, +0.16f, -0.46f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -2.87f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -2.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -2.91f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, -2.91f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -2.96f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -2.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -2.97f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, -2.87f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -2.94f, +1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.96f, -2.94f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, -2.94f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.98f, -1.05f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, -1.02f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, -1.06f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.96f, -1.06f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -1.03f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -1.01f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -1.09f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -1.06f, +1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -1.06f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -1.09f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, -1.13f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -1.03f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -1.13f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.98f, -2.87f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -1.04f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -1.05f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -1.01f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -1.02f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -1.02f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.99f, -1.09f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -1.01f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -1.03f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -1.06f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, -1.02f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -1.05f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -1.13f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -1.13f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -1.09f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -1.09f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, -1.09f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -1.04f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -1.09f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -2.99f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, -1.13f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -1.06f, +1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.04f, -1.06f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, -1.06f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -1.03f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -1.01f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, -1.05f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -1.01f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -1.09f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, -1.13f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, -1.02f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -1.01f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -1.03f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, -1.06f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -1.02f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, -1.05f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -1.09f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, -1.13f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -1.09f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -2.87f, +3.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, -2.87f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -1.13f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, -2.87f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -2.91f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -2.87f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -2.91f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -2.87f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -2.91f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, -2.94f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, -2.95f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, -2.98f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, -2.95f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, -2.98f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, -2.94f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.04f, -2.94f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, -2.91f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -2.97f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, -1.13f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -2.91f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -2.91f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -2.94f, +1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, -2.87f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, -2.87f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -2.87f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -2.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -2.96f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -2.95f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -2.99f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, -2.91f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -2.97f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.04f, -2.94f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, -2.87f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, -2.87f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -2.91f, +2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -2.91f, +2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -1.03f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -1.04f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -1.06f, +2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -1.09f, +2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -1.03f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -1.01f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -1.01f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -1.00f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -1.05f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -1.01f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -1.01f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -1.00f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -1.00f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -1.00f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -1.01f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -1.01f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -1.05f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -1.06f, +2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -1.09f, +2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -1.03f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -1.06f, +2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, -1.13f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.04f, -1.06f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, -1.13f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -1.04f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -1.09f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -1.13f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, -1.09f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -1.02f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, -1.06f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},

		},

		.indices = { // 1284 values
			0, 1, 2, 3,
			4, 0, 5,
			3, 0, 6,
			0, 2, 7,
			8, 5, 6,
			7, 5, 9,
			10, 6, 6,
			11, 9, 12,
			13, 9, 11,
			12, 9, 1,
			11, 2, 14,
			15, 11, 13,
			16, 17, 13,
			18, 10, 10,
			19, 7, 19,
			20, 21, 19,
			22, 7, 21,
			23, 19, 14,
			24, 25, 26,
			14, 1, 4,
			26, 1, 27,
			28, 4, 27,
			29, 30, 8,
			31, 3, 22,
			32, 8, 22,
			33, 34, 35,
			33, 23, 31,
			27, 3, 0,
			4, 1, 3,
			27, 4, 5,
			8, 3, 6,
			5, 0, 7,
			22, 8, 6,
			10, 7, 9,
			13, 10, 6,
			2, 11, 12,
			36, 13, 11,
			15, 12, 1,
			14, 11, 14,
			25, 15, 13,
			36, 16, 13,
			17, 18, 10,
			18, 19, 19,
			18, 20, 19,
			23, 22, 21,
			35, 23, 14,
			37, 24, 26,
			37, 14, 4,
			28, 26, 27,
			30, 28, 27,
			38, 29, 8,
			32, 31, 22,
			34, 32, 22,
			23, 33, 35,
			39, 33, 31,
			38, 27, 40,
			41, 42, 43,
			41, 44, 45,
			44, 46, 46,
			40, 47, 48,
			49, 50, 46,
			50, 49, 47,
			51, 50, 52,
			50, 51, 47,
			53, 54, 54,
			55, 56, 56,
			51, 54, 57,
			56, 58, 55,
			58, 56, 59,
			51, 60, 57,
			59, 60, 61,
			62, 57, 61,
			58, 63, 64,
			65, 61, 66,
			63, 58, 66,
			67, 68, 69,
			66, 55, 70,
			71, 69, 72,
			67, 71, 73,
			74, 75, 76,
			75, 77, 62,
			78, 59, 78,
			52, 59, 77,
			48, 52, 62,
			79, 80, 81,
			79, 65, 48,
			74, 82, 83,
			70, 69, 53,
			69, 55, 40,
			83, 53, 40,
			44, 41, 43,
			84, 41, 45,
			43, 44, 46,
			44, 40, 48,
			82, 49, 46,
			47, 50, 47,
			54, 51, 52,
			48, 50, 47,
			40, 53, 54,
			53, 55, 56,
			60, 51, 57,
			60, 56, 55,
			66, 58, 59,
			52, 51, 57,
			62, 59, 61,
			65, 62, 61,
			57, 58, 64,
			81, 65, 66,
			68, 63, 66,
			71, 67, 69,
			71, 66, 70,
			72, 71, 72,
			85, 67, 73,
			86, 74, 76,
			73, 75, 62,
			80, 78, 78,
			77, 52, 77,
			75, 48, 62,
			65, 79, 81,
			87, 79, 48,
			75, 74, 83,
			88, 70, 53,
			83, 69, 40,
			42, 83, 89,
			90, 91, 92,
			93, 94, 93,
			95, 89, 94,
			96, 97, 93,
			98, 96, 98,
			91, 99, 100,
			98, 99, 101,
			96, 98, 101,
			102, 103, 100,
			104, 101, 105,
			106, 104, 107,
			108, 106, 102,
			106, 109, 102,
			110, 111, 103,
			111, 112, 112,
			113, 114, 111,
			115, 113, 113,
			116, 114, 115,
			117, 113, 118,
			119, 115, 110,
			118, 115, 120,
			121, 119, 117,
			122, 116, 123,
			116, 122, 124,
			114, 116, 124,
			125, 126, 123,
			127, 124, 127,
			128, 125, 127,
			129, 130, 125,
			92, 94, 126,
			94, 97, 114,
			97, 112, 103,
			97, 96, 117,
			121, 131, 89,
			95, 90, 92,
			132, 93, 93,
			132, 95, 94,
			93, 96, 93,
			89, 98, 98,
			89, 91, 100,
			101, 98, 101,
			103, 96, 101,
			104, 102, 100,
			105, 104, 105,
			107, 106, 102,
			104, 106, 102,
			109, 110, 103,
			102, 111, 112,
			111, 113, 111,
			110, 115, 113,
			117, 116, 115,
			119, 117, 118,
			120, 119, 110,
			133, 118, 120,
			134, 121, 117,
			131, 122, 123,
			124, 116, 124,
			126, 114, 124,
			127, 125, 123,
			135, 127, 127,
			130, 128, 127,
			135, 129, 125,
			128, 92, 126,
			125, 94, 114,
			126, 97, 103,
			112, 97, 117,
			119, 121, 136,
			137, 138, 136,
			139, 140, 138,
			141, 139, 138,
			142, 143, 139,
			144, 140, 145,
			139, 141, 143,
			146, 141, 147,
			141, 146, 148,
			145, 147, 145,
			149, 150, 151,
			152, 148, 153,
			149, 152, 150,
			154, 144, 154,
			149, 155, 156,
			157, 158, 157,
			159, 158, 160,
			161, 159, 162,
			163, 164, 162,
			165, 166, 167,
			162, 168, 168,
			164, 169, 170,
			171, 167, 172,
			165, 171, 173,
			161, 172, 173,
			170, 174, 161,
			175, 165, 174,
			176, 177, 170,
			178, 176, 176,
			179, 177, 178,
			180, 176, 181,
			178, 182, 167,
			182, 178, 168,
			183, 182, 184,
			182, 183, 185,
			181, 184, 181,
			186, 187, 188,
			189, 185, 190,
			186, 189, 187,
			191, 180, 191,
			186, 192, 193,
			192, 190, 194,
			192, 195, 196,
			195, 197, 197,
			193, 198, 179,
			191, 194, 179,
			196, 199, 199,
			200, 201, 196,
			202, 200, 200,
			203, 201, 202,
			204, 200, 205,
			202, 206, 197,
			206, 202, 198,
			207, 206, 208,
			206, 207, 198,
			209, 210, 211,
			210, 209, 207,
			212, 213, 214,
			212, 215, 211,
			215, 212, 208,
			213, 216, 214,
			216, 213, 217,
			218, 214, 217,
			215, 219, 220,
			221, 217, 220,
			219, 222, 219,
			223, 222, 224,
			219, 215, 225,
			226, 223, 224,
			227, 225, 228,
			224, 211, 229,
			230, 228, 231,
			227, 230, 142,
			229, 232, 142,
			233, 231, 143,
			232, 234, 234,
			184, 183, 184,
			229, 185, 183,
			146, 234, 226,
			227, 233, 235,
			233, 137, 185,
			228, 188, 188,
			211, 209, 193,
			188, 209, 236,
			237, 221, 238,
			239, 237, 218,
			237, 240, 240,
			239, 241, 218,
			242, 216, 242,
			241, 243, 244,
			245, 246, 247,
			244, 248, 249,
			244, 250, 249,
			156, 251, 252,
			249, 253, 253,
			251, 254, 254,
			255, 256, 251,
			158, 255, 255,
			174, 256, 158,
			173, 255, 256,
			177, 257, 257,
			254, 256, 257,
			201, 258, 177,
			199, 257, 258,
			253, 254, 201,
			259, 258, 203,
			260, 259, 259,
			252, 253, 260,
			261, 252, 260,
			262, 263, 261,
			248, 252, 264,
			265, 266, 267,
			268, 265, 266,
			205, 208, 205,
			268, 269, 269,
			270, 204, 271,
			270, 268, 203,
			270, 272, 272,
			271, 262, 266,
			216, 242, 264,
			242, 243, 147,
			169, 164, 148,
			164, 163, 136,
			235, 137, 136,
			138, 139, 138,
			143, 141, 138,
			137, 142, 139,
			150, 144, 145,
			150, 139, 143,
			234, 146, 147,
			145, 141, 148,
			152, 145, 145,
			152, 149, 151,
			153, 152, 153,
			155, 149, 150,
			149, 154, 156,
			273, 157, 157,
			160, 159, 160,
			175, 161, 162,
			166, 163, 162,
			171, 165, 167,
			171, 162, 168,
			162, 164, 170,
			172, 171, 172,
			161, 165, 173,
			159, 161, 173,
			172, 170, 174,
			170, 176, 170,
			167, 178, 176,
			180, 179, 178,
			187, 180, 181,
			187, 178, 167,
			168, 182, 168,
			169, 183, 184,
			181, 182, 185,
			189, 181, 181,
			189, 186, 188,
			190, 189, 190,
			192, 186, 187,
			186, 191, 193,
			195, 192, 194,
			191, 192, 196,
			194, 195, 197,
			195, 193, 179,
			180, 191, 179,
			194, 196, 199,
			196, 200, 196,
			197, 202, 200,
			204, 203, 202,
			269, 204, 205,
			269, 202, 197,
			198, 206, 198,
			210, 207, 208,
			205, 206, 198,
			193, 209, 211,
			212, 210, 207,
			210, 212, 214,
			213, 212, 211,
			224, 215, 208,
			207, 213, 214,
			218, 216, 217,
			221, 218, 217,
			214, 215, 220,
			236, 221, 220,
			217, 219, 219,
			225, 223, 224,
			225, 219, 225,
			227, 226, 224,
			230, 227, 228,
			230, 224, 229,
			231, 230, 231,
			233, 227, 142,
			231, 229, 142,
			137, 233, 143,
			142, 232, 234,
			232, 184, 184,
			232, 229, 183,
			169, 146, 235,
			226, 233, 185,
			229, 228, 188,
			228, 211, 193,
			190, 188, 236,
			238, 237, 218,
			221, 237, 240,
			237, 239, 218,
			240, 242, 242,
			240, 241, 247,
			245, 244, 249,
			248, 244, 249,
			250, 156, 252,
			248, 249, 253,
			249, 251, 254,
			251, 255, 251,
			156, 158, 255,
			173, 174, 158,
			159, 173, 256,
			174, 177, 257,
			258, 254, 257,
			199, 201, 177,
			179, 199, 258,
			259, 253, 201,
			203, 259, 203,
			272, 260, 259,
			260, 252, 260,
			263, 261, 260,
			272, 262, 261,
			247, 248, 264,
			267, 265, 267,
			271, 268, 266,
			265, 205, 205,
			265, 268, 269,
			268, 270, 203,
			204, 270, 272,
			270, 271, 266,
			208, 216, 264,
			266, 242, 147,
			146, 169, 148,
			147, 164,
		},
	},
	{
		.name = "GREEN_Cube.013",
		.colors = { game::GREEN },
		.vertices = { // 244 vertex
			VertexData{
				.position = { +2.94f, -0.97f, -0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, -0.94f, -0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, -0.94f, -0.96f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, -0.98f, -0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, -0.95f, -0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, -0.98f, +0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -0.91f, -0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +3.00f, -0.87f, -0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -0.91f, -0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, -0.94f, +0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +3.00f, -0.87f, +0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -0.91f, +0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.96f, +0.94f, +0.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +3.00f, +0.87f, -0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -0.87f, -0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +3.00f, +0.87f, +0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +0.91f, -0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +0.91f, +0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +0.87f, -0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +0.87f, +0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +0.91f, +0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, +0.94f, +0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, +0.95f, +0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, +0.98f, -0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, +0.95f, -0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, +0.98f, +0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, +0.91f, -0.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +0.91f, -0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, +0.97f, -0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, +0.91f, -0.97f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, +0.94f, -0.96f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, +0.87f, -0.95f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, +0.87f, -0.98f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, -0.87f, +0.98f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, -0.94f, +0.96f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, -0.91f, +0.99f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, -0.91f, +0.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -0.87f, +0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, +0.91f, +0.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, +0.94f, +0.96f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, -0.87f, +0.95f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, +0.99f, +0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -0.91f, +0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, -0.97f, -0.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.96f, -0.94f, -0.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, +0.91f, -0.99f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, -0.91f, +0.97f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, +0.97f, +0.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, -0.91f, -0.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +1.09f, -0.99f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -0.97f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -1.00f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -1.00f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -0.99f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -0.99f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -0.99f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -1.00f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -0.99f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -0.99f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -0.99f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -0.99f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -0.98f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -0.99f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -0.98f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -0.97f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -0.95f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -0.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -0.94f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -0.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -0.87f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -0.94f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.15f, -0.15f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -0.87f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -0.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -0.91f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, -0.91f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -0.96f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -0.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -0.97f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, -0.87f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -0.94f, -0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.96f, -0.94f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, -0.94f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, -0.98f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, -0.98f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -0.97f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, -0.94f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -0.96f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.98f, -0.95f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.98f, +0.95f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, +0.98f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, +0.94f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.96f, +0.94f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +0.97f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +0.99f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +0.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +0.94f, -0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +0.94f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +0.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, +0.87f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +0.97f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +0.87f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.98f, -0.87f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +0.96f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +0.95f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +0.99f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +0.98f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +0.98f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.99f, +0.91f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +0.99f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +0.97f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +0.94f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, +0.98f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +0.95f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +0.87f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +0.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +0.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +0.91f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, +0.91f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +0.96f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +0.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -0.99f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, +0.87f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +0.94f, -0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.04f, +0.94f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, +0.94f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +0.97f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +0.99f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, +0.95f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +0.99f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +0.91f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, +0.87f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, +0.98f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +0.99f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +0.97f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, +0.94f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +0.98f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, +0.95f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +0.91f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, +0.87f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +0.91f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -0.87f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, -0.87f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +0.87f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, -0.87f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -0.91f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -0.87f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -0.91f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -0.87f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -0.91f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, -0.94f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, -0.95f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, -0.98f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, -0.95f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, -0.98f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, -0.94f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.04f, -0.94f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, -0.91f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -0.97f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, +0.87f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -0.91f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -0.91f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -0.94f, -0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, -0.87f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, -0.87f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -0.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -0.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -0.96f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -0.95f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -0.96f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -0.97f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -0.99f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, -0.91f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -0.95f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -0.94f, +0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.04f, -0.94f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, -0.87f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, -0.87f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -0.91f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -0.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -0.87f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -0.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -0.94f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +0.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -0.98f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -0.95f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -0.97f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -0.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -0.87f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -0.94f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -0.98f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.96f, -0.94f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -0.99f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -0.91f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.99f, -0.91f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -0.94f, +0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, -0.87f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, -0.91f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -0.87f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +0.87f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +0.87f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +0.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +0.91f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +0.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, +0.87f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, +0.91f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.98f, +0.87f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.98f, -0.87f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +0.96f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +0.97f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +0.94f, +0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +0.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +0.97f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +0.99f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +0.99f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +1.00f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +0.95f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +0.99f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +0.99f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +1.00f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +1.00f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +1.00f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +0.99f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +0.99f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +0.95f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +0.94f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +0.91f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +0.97f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +0.87f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +0.94f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +0.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +0.87f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +0.94f, +0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, +0.91f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, +0.87f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, +0.87f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.04f, +0.94f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +0.96f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +0.91f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +0.87f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +0.98f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.99f, -0.91f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, +0.94f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.99f, -0.87f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},

		},

		.indices = { // 1284 values
			0, 1, 2, 3,
			1, 4, 5,
			4, 6, 6,
			0, 7, 8,
			9, 10, 6,
			10, 9, 7,
			11, 10, 12,
			10, 11, 7,
			13, 14, 14,
			15, 16, 16,
			11, 14, 17,
			16, 18, 15,
			18, 16, 12,
			19, 20, 17,
			20, 19, 21,
			22, 17, 21,
			18, 23, 24,
			25, 21, 26,
			23, 18, 26,
			27, 28, 29,
			26, 15, 30,
			31, 29, 32,
			27, 31, 33,
			34, 35, 36,
			35, 37, 22,
			38, 20, 37,
			20, 38, 37,
			8, 12, 22,
			39, 40, 41,
			39, 25, 8,
			34, 42, 43,
			30, 29, 13,
			29, 15, 0,
			43, 13, 0,
			4, 1, 3,
			44, 1, 5,
			3, 4, 6,
			4, 0, 8,
			42, 9, 6,
			7, 10, 7,
			14, 11, 12,
			8, 10, 7,
			0, 13, 14,
			13, 15, 16,
			19, 11, 17,
			19, 16, 15,
			26, 18, 12,
			11, 19, 17,
			22, 20, 21,
			25, 22, 21,
			17, 18, 24,
			41, 25, 26,
			28, 23, 26,
			31, 27, 29,
			31, 26, 30,
			32, 31, 32,
			45, 27, 33,
			46, 34, 36,
			33, 35, 22,
			40, 38, 37,
			12, 20, 37,
			35, 8, 22,
			25, 39, 41,
			47, 39, 8,
			35, 34, 43,
			48, 30, 13,
			43, 29, 0,
			2, 43, 49,
			50, 51, 52,
			53, 49, 54,
			52, 49, 55,
			49, 51, 56,
			57, 54, 55,
			56, 54, 58,
			59, 55, 51,
			58, 55, 60,
			61, 58, 62,
			60, 58, 50,
			62, 51, 63,
			64, 62, 64,
			65, 66, 64,
			67, 60, 66,
			68, 67, 66,
			69, 70, 67,
			71, 60, 72,
			67, 68, 70,
			73, 68, 74,
			68, 73, 75,
			72, 74, 72,
			76, 77, 78,
			79, 75, 80,
			76, 79, 77,
			81, 71, 81,
			76, 82, 61,
			81, 83, 61,
			84, 59, 59,
			85, 56, 84,
			86, 85, 85,
			87, 56, 86,
			88, 85, 89,
			90, 91, 90,
			92, 91, 93,
			94, 92, 95,
			96, 97, 95,
			98, 99, 100,
			95, 101, 101,
			97, 102, 103,
			104, 100, 105,
			98, 104, 106,
			94, 105, 106,
			103, 107, 94,
			108, 98, 107,
			109, 110, 103,
			111, 109, 109,
			112, 110, 111,
			113, 109, 114,
			111, 115, 100,
			115, 111, 101,
			116, 115, 117,
			115, 116, 118,
			114, 117, 114,
			119, 120, 121,
			122, 118, 123,
			119, 122, 120,
			124, 113, 124,
			119, 125, 126,
			125, 123, 127,
			125, 128, 129,
			128, 130, 130,
			126, 131, 112,
			124, 127, 112,
			129, 132, 132,
			133, 134, 129,
			135, 133, 133,
			136, 134, 135,
			137, 133, 138,
			135, 139, 130,
			139, 135, 131,
			140, 139, 141,
			139, 140, 131,
			142, 143, 144,
			143, 142, 140,
			145, 146, 147,
			145, 148, 144,
			148, 145, 141,
			146, 149, 147,
			149, 146, 150,
			151, 147, 150,
			148, 152, 153,
			154, 150, 153,
			152, 155, 152,
			156, 155, 157,
			152, 148, 158,
			159, 156, 157,
			160, 158, 161,
			157, 144, 162,
			163, 161, 164,
			160, 163, 69,
			162, 165, 69,
			166, 164, 70,
			165, 167, 167,
			117, 116, 165,
			118, 117, 116,
			73, 167, 159,
			160, 166, 168,
			166, 65, 63,
			159, 168, 162,
			121, 118, 161,
			142, 121, 126,
			121, 142, 155,
			63, 50, 53,
			155, 50, 169,
			153, 53, 169,
			170, 171, 171,
			172, 154, 173,
			170, 174, 170,
			175, 172, 151,
			172, 176, 176,
			175, 177, 151,
			178, 149, 178,
			177, 179, 179,
			180, 181, 180,
			175, 173, 181,
			182, 183, 180,
			184, 182, 184,
			174, 185, 186,
			184, 185, 187,
			182, 184, 187,
			188, 189, 186,
			190, 187, 57,
			185, 52, 87,
			186, 57, 87,
			191, 192, 192,
			193, 190, 194,
			191, 88, 191,
			195, 193, 188,
			193, 196, 188,
			197, 198, 189,
			198, 199, 199,
			200, 201, 198,
			202, 200, 200,
			203, 201, 202,
			204, 200, 205,
			206, 202, 197,
			205, 202, 207,
			208, 206, 209,
			208, 210, 211,
			209, 212, 213,
			209, 214, 213,
			89, 215, 216,
			213, 217, 217,
			215, 218, 218,
			219, 220, 215,
			91, 219, 219,
			107, 220, 91,
			106, 219, 220,
			110, 221, 221,
			218, 220, 221,
			134, 222, 110,
			132, 221, 222,
			217, 218, 134,
			223, 222, 136,
			224, 223, 223,
			216, 217, 224,
			225, 216, 224,
			226, 227, 225,
			212, 216, 204,
			225, 203, 227,
			203, 225, 228,
			201, 203, 228,
			229, 230, 227,
			231, 228, 231,
			232, 229, 231,
			233, 234, 232,
			235, 236, 234,
			237, 235, 236,
			138, 141, 138,
			237, 238, 238,
			239, 137, 233,
			239, 237, 136,
			239, 240, 240,
			233, 226, 236,
			149, 178, 232,
			178, 179, 229,
			179, 181, 230,
			181, 183, 201,
			183, 199, 189,
			183, 182, 204,
			208, 211, 185,
			169, 52, 74,
			102, 97, 75,
			97, 96, 49,
			53, 50, 52,
			169, 53, 54,
			57, 52, 55,
			54, 49, 56,
			87, 57, 55,
			59, 56, 58,
			61, 59, 51,
			62, 58, 60,
			71, 61, 62,
			64, 60, 50,
			63, 62, 63,
			168, 64, 64,
			168, 65, 64,
			66, 67, 66,
			70, 68, 66,
			65, 69, 67,
			77, 71, 72,
			77, 67, 70,
			167, 73, 74,
			72, 68, 75,
			79, 72, 72,
			79, 76, 78,
			80, 79, 80,
			82, 76, 77,
			76, 81, 61,
			71, 81, 61,
			83, 84, 59,
			84, 85, 84,
			241, 86, 85,
			88, 87, 86,
			194, 88, 89,
			242, 90, 90,
			93, 92, 93,
			108, 94, 95,
			99, 96, 95,
			104, 98, 100,
			104, 95, 101,
			95, 97, 103,
			105, 104, 105,
			94, 98, 106,
			92, 94, 106,
			105, 103, 107,
			103, 109, 103,
			100, 111, 109,
			113, 112, 111,
			120, 113, 114,
			120, 111, 100,
			101, 115, 101,
			102, 116, 117,
			114, 115, 118,
			122, 114, 114,
			122, 119, 121,
			123, 122, 123,
			125, 119, 120,
			119, 124, 126,
			128, 125, 127,
			124, 125, 129,
			127, 128, 130,
			128, 126, 112,
			113, 124, 112,
			127, 129, 132,
			129, 133, 129,
			130, 135, 133,
			137, 136, 135,
			238, 137, 138,
			238, 135, 130,
			131, 139, 131,
			143, 140, 141,
			138, 139, 131,
			126, 142, 144,
			145, 143, 140,
			143, 145, 147,
			146, 145, 144,
			157, 148, 141,
			140, 146, 147,
			151, 149, 150,
			154, 151, 150,
			147, 148, 153,
			171, 154, 153,
			150, 152, 152,
			158, 156, 157,
			158, 152, 158,
			160, 159, 157,
			163, 160, 161,
			163, 157, 162,
			164, 163, 164,
			166, 160, 69,
			164, 162, 69,
			65, 166, 70,
			69, 165, 167,
			165, 117, 165,
			162, 118, 116,
			102, 73, 168,
			159, 166, 63,
			156, 159, 162,
			161, 121, 161,
			144, 142, 126,
			123, 121, 155,
			156, 63, 53,
			153, 155, 169,
			171, 153, 169,
			174, 170, 171,
			170, 172, 173,
			175, 170, 151,
			154, 172, 176,
			172, 175, 151,
			176, 178, 178,
			176, 177, 179,
			177, 180, 180,
			177, 175, 181,
			180, 182, 180,
			173, 184, 184,
			173, 174, 186,
			187, 184, 187,
			189, 182, 187,
			190, 188, 186,
			192, 190, 57,
			186, 185, 87,
			192, 186, 87,
			88, 191, 192,
			191, 193, 194,
			195, 191, 188,
			190, 193, 188,
			196, 197, 189,
			188, 198, 199,
			198, 200, 198,
			197, 202, 200,
			204, 203, 202,
			206, 204, 205,
			207, 206, 197,
			243, 205, 207,
			210, 208, 211,
			208, 209, 213,
			212, 209, 213,
			214, 89, 216,
			212, 213, 217,
			213, 215, 218,
			215, 219, 215,
			89, 91, 219,
			106, 107, 91,
			92, 106, 220,
			107, 110, 221,
			222, 218, 221,
			132, 134, 110,
			112, 132, 222,
			223, 217, 134,
			136, 223, 136,
			240, 224, 223,
			224, 216, 224,
			227, 225, 224,
			240, 226, 225,
			211, 212, 204,
			211, 225, 227,
			228, 203, 228,
			230, 201, 228,
			231, 229, 227,
			226, 231, 231,
			234, 232, 231,
			226, 233, 232,
			234, 235, 234,
			233, 237, 236,
			235, 138, 138,
			235, 237, 238,
			237, 239, 136,
			137, 239, 240,
			239, 233, 236,
			141, 149, 232,
			236, 178, 229,
			232, 179, 230,
			229, 181, 201,
			230, 183, 189,
			199, 183, 204,
			206, 208, 185,
			174, 169, 74,
			73, 102, 75,
			74, 97,
		},
	},
	{
		.name = "GREEN-RED_Cube.014",
		.colors = { game::RED, game::GREEN },
		.vertices = { // 263 vertex
			VertexData{
				.position = { +2.94f, -0.97f, -2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, -0.94f, -2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, -0.94f, -2.96f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, -0.98f, -2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, -0.95f, -2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, -0.98f, -1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -0.91f, -2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +3.00f, -0.87f, -2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -0.91f, -2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, -0.94f, -1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +3.00f, -0.87f, -1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -0.91f, -1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.96f, +0.94f, -1.06f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +3.00f, +0.87f, -2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -0.87f, -2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +3.00f, +0.87f, -1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +0.91f, -2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +0.91f, -1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +0.87f, -2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +0.87f, -1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +0.91f, -1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, +0.94f, -1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, +0.95f, -1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, +0.98f, -2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, +0.95f, -2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, +0.98f, -1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, +0.91f, -2.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +0.91f, -2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, +0.97f, -2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, +0.91f, -2.97f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, +0.94f, -2.96f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, +0.87f, -2.95f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, +0.87f, -2.98f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, -0.87f, -1.02f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, -0.94f, -1.04f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, -0.91f, -1.01f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, -0.91f, -1.06f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -0.87f, -1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, +0.91f, -1.06f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, +0.94f, -1.04f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, -0.87f, -1.05f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, +0.99f, -1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -0.91f, -1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, -0.97f, -2.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.96f, -0.94f, -2.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, +0.91f, -2.99f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, -0.91f, -1.03f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, +0.97f, -1.06f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, -0.91f, -2.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +1.13f, -0.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.87f, -0.87f, -3.00f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.91f, -0.94f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.09f, -0.87f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.09f, -0.94f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.91f, -0.87f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.91f, -0.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.94f, -0.91f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.97f, -0.91f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.94f, -0.96f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.87f, -0.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.91f, -0.97f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.95f, -0.87f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.94f, -0.94f, -2.96f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.87f, +0.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.94f, +0.94f, -2.96f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.91f, +0.94f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.91f, +0.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.95f, +0.87f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.91f, +0.97f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.91f, +0.87f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.98f, -0.87f, -2.95f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.09f, +0.87f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.09f, +0.94f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.13f, +0.87f, -3.00f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.09f, +0.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.06f, +0.91f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.03f, +0.91f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.06f, +0.96f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.13f, +0.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.09f, -0.99f, -2.87f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.05f, +0.87f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.06f, +0.94f, -2.96f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.06f, -0.94f, -2.96f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.13f, -0.87f, -3.00f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.09f, -0.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.05f, -0.87f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.06f, -0.96f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.87f, -0.95f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.97f, -0.94f, -2.91f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.87f, +0.95f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.03f, +0.94f, -2.91f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.06f, -0.91f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.87f, -1.00f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -0.99f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -0.97f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -1.00f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -0.99f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -0.99f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -0.99f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -1.00f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -0.99f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -0.99f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -0.99f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -0.99f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -0.98f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -0.99f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -0.98f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -0.97f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -0.95f, -2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -0.91f, -2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -0.94f, -2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.00f, +0.00f, +0.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -0.91f, -2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.96f, -0.94f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -0.96f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, -0.94f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, -0.98f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, -0.98f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -0.97f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, -0.94f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -0.96f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.98f, -0.95f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.98f, +0.95f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, +0.98f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, +0.94f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.96f, +0.94f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +0.97f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +0.99f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +0.96f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +0.95f, -2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +0.97f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +0.99f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +0.91f, -2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +0.98f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +0.98f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.99f, +0.91f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +0.99f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +0.97f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +0.94f, -2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, +0.98f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +0.95f, -2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +0.91f, -2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.04f, +0.94f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +0.96f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, +0.94f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +0.97f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +0.94f, -2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +0.99f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, +0.95f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +0.99f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +0.91f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, +0.87f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, +0.98f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +0.99f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +0.97f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, +0.94f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +0.98f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, +0.95f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +0.91f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, +0.87f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +0.91f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -0.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, -0.87f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +0.87f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, -0.87f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -0.91f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -0.87f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -0.91f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -0.87f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -0.91f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, -0.94f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, -0.95f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, -0.98f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, -0.95f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, -0.98f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, -0.94f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.04f, -0.94f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, -0.91f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -0.97f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, +0.87f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -0.91f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -0.91f, -2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -0.94f, -2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, -0.87f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, -0.87f, -2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -0.91f, -2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -0.95f, -2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -0.99f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -0.96f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -0.97f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -0.99f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, -0.91f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -0.95f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -0.94f, -1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.04f, -0.94f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, -0.87f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, -0.87f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -0.91f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -0.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -0.87f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -0.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -0.94f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +0.87f, -3.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -0.98f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -0.95f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -0.97f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -0.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -0.87f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -0.94f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -0.98f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.96f, -0.94f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -0.99f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -0.91f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.99f, -0.91f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -0.94f, -1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, -0.87f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, -0.91f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -0.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +0.87f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +0.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +0.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +0.91f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +0.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, +0.87f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, +0.91f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.98f, +0.87f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.98f, -0.87f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +0.96f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +0.97f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +0.94f, -1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +0.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +0.97f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +0.99f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +0.99f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +1.00f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +0.95f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +0.99f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +0.99f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +1.00f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +1.00f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +1.00f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +0.99f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +0.99f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +0.95f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +0.94f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +0.91f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +0.97f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +0.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +0.94f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +0.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +0.87f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +0.94f, -1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, +0.91f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, +0.87f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, +0.87f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.04f, +0.94f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +0.96f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +0.91f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +0.87f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +0.98f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.99f, -0.91f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, +0.94f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.99f, -0.87f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},

		},

		.indices = { // 1284 values
			0, 1, 2, 3,
			1, 4, 5,
			4, 6, 6,
			0, 7, 8,
			9, 10, 6,
			10, 9, 7,
			11, 10, 12,
			10, 11, 7,
			13, 14, 14,
			15, 16, 16,
			11, 14, 17,
			16, 18, 15,
			18, 16, 12,
			19, 20, 17,
			20, 19, 21,
			22, 17, 21,
			18, 23, 24,
			25, 21, 26,
			23, 18, 26,
			27, 28, 29,
			26, 15, 30,
			31, 29, 32,
			27, 31, 33,
			34, 35, 36,
			35, 37, 22,
			38, 20, 37,
			20, 38, 37,
			8, 12, 22,
			39, 40, 41,
			39, 25, 8,
			34, 42, 43,
			30, 29, 13,
			29, 15, 0,
			43, 13, 0,
			4, 1, 3,
			44, 1, 5,
			3, 4, 6,
			4, 0, 8,
			42, 9, 6,
			7, 10, 7,
			14, 11, 12,
			8, 10, 7,
			0, 13, 14,
			13, 15, 16,
			19, 11, 17,
			19, 16, 15,
			26, 18, 12,
			11, 19, 17,
			22, 20, 21,
			25, 22, 21,
			17, 18, 24,
			41, 25, 26,
			28, 23, 26,
			31, 27, 29,
			31, 26, 30,
			32, 31, 32,
			45, 27, 33,
			46, 34, 36,
			33, 35, 22,
			40, 38, 37,
			12, 20, 37,
			35, 8, 22,
			25, 39, 41,
			47, 39, 8,
			35, 34, 43,
			48, 30, 13,
			43, 29, 0,
			2, 43, 49,
			50, 51, 49,
			52, 53, 54,
			51, 50, 53,
			55, 50, 56,
			50, 55, 57,
			54, 56, 54,
			58, 59, 60,
			61, 57, 62,
			58, 61, 63,
			64, 65, 63,
			66, 67, 68,
			63, 69, 69,
			65, 70, 71,
			72, 73, 68,
			73, 72, 69,
			74, 73, 75,
			73, 74, 76,
			71, 75, 71,
			77, 78, 79,
			80, 76, 81,
			77, 80, 52,
			82, 83, 52,
			84, 85, 53,
			83, 86, 86,
			75, 74, 83,
			76, 75, 74,
			55, 86, 82,
			79, 76, 56,
			70, 65, 57,
			65, 64, 49,
			53, 50, 49,
			87, 52, 54,
			59, 51, 53,
			86, 55, 56,
			54, 50, 57,
			61, 54, 54,
			61, 58, 60,
			62, 61, 62,
			88, 58, 63,
			67, 64, 63,
			89, 66, 68,
			89, 63, 69,
			63, 65, 71,
			78, 72, 68,
			69, 73, 69,
			70, 74, 75,
			71, 73, 76,
			80, 71, 71,
			80, 77, 79,
			81, 80, 81,
			90, 77, 52,
			85, 82, 52,
			87, 84, 53,
			52, 83, 86,
			83, 75, 83,
			82, 76, 74,
			70, 55, 82,
			91, 79, 56,
			55, 70, 57,
			56, 65, 92,
			93, 94, 95,
			93, 96, 97,
			95, 96, 98,
			96, 92, 99,
			100, 97, 98,
			99, 97, 101,
			102, 98, 92,
			101, 98, 103,
			104, 101, 105,
			103, 101, 94,
			105, 92, 106,
			107, 105, 107,
			108, 109, 107,
			110, 103, 110,
			111, 103, 112,
			113, 111, 113,
			114, 115, 104,
			113, 116, 104,
			117, 102, 102,
			118, 99, 117,
			119, 118, 118,
			120, 99, 119,
			121, 118, 122,
			123, 124, 123,
			125, 124, 126,
			127, 125, 128,
			129, 130, 131,
			132, 129, 133,
			127, 131, 133,
			128, 134, 127,
			135, 132, 134,
			136, 137, 128,
			138, 136, 136,
			139, 137, 138,
			140, 136, 141,
			142, 140, 142,
			143, 144, 145,
			144, 146, 147,
			144, 148, 149,
			148, 150, 150,
			145, 151, 139,
			142, 147, 139,
			149, 152, 152,
			153, 154, 149,
			155, 153, 153,
			156, 154, 155,
			157, 153, 158,
			155, 159, 150,
			159, 155, 151,
			160, 159, 161,
			159, 160, 151,
			162, 163, 164,
			163, 162, 160,
			165, 166, 167,
			165, 168, 164,
			168, 165, 161,
			166, 169, 167,
			169, 166, 170,
			171, 167, 170,
			168, 172, 173,
			174, 170, 173,
			172, 175, 172,
			176, 175, 177,
			172, 168, 178,
			179, 176, 177,
			180, 178, 181,
			177, 164, 182,
			183, 181, 184,
			180, 183, 179,
			180, 185, 186,
			185, 108, 106,
			179, 186, 181,
			162, 187, 145,
			187, 162, 175,
			106, 94, 93,
			175, 94, 188,
			173, 93, 188,
			189, 190, 190,
			191, 174, 192,
			189, 193, 189,
			194, 191, 171,
			191, 195, 195,
			194, 196, 171,
			197, 169, 197,
			196, 198, 198,
			199, 200, 199,
			194, 192, 200,
			201, 202, 199,
			203, 201, 203,
			193, 204, 205,
			203, 204, 206,
			201, 203, 206,
			207, 208, 205,
			209, 206, 100,
			204, 95, 120,
			205, 100, 120,
			210, 211, 211,
			212, 209, 213,
			210, 121, 210,
			214, 212, 207,
			212, 215, 207,
			216, 217, 208,
			217, 218, 218,
			219, 220, 217,
			221, 219, 219,
			222, 220, 221,
			223, 219, 224,
			225, 221, 216,
			224, 221, 226,
			227, 225, 228,
			227, 229, 230,
			228, 231, 232,
			228, 233, 232,
			122, 234, 235,
			232, 236, 236,
			234, 237, 237,
			238, 239, 234,
			124, 238, 238,
			134, 239, 124,
			133, 238, 239,
			137, 240, 240,
			237, 239, 240,
			154, 241, 137,
			152, 240, 241,
			236, 237, 154,
			242, 241, 156,
			243, 242, 242,
			235, 236, 243,
			244, 235, 243,
			245, 246, 244,
			231, 235, 223,
			244, 222, 246,
			222, 244, 247,
			220, 222, 247,
			248, 249, 246,
			250, 247, 250,
			251, 248, 250,
			252, 253, 251,
			254, 255, 253,
			256, 254, 255,
			158, 161, 158,
			256, 257, 257,
			258, 157, 252,
			258, 256, 156,
			258, 259, 259,
			252, 245, 255,
			169, 197, 251,
			197, 198, 248,
			198, 200, 249,
			200, 202, 220,
			202, 218, 208,
			202, 201, 223,
			227, 230, 204,
			188, 95, 92,
			96, 93, 95,
			188, 93, 97,
			100, 95, 98,
			97, 96, 99,
			120, 100, 98,
			102, 99, 101,
			104, 102, 92,
			105, 101, 103,
			111, 104, 105,
			107, 103, 94,
			106, 105, 106,
			186, 107, 107,
			186, 108, 107,
			109, 110, 110,
			112, 111, 112,
			114, 113, 104,
			111, 113, 104,
			116, 117, 102,
			117, 118, 117,
			260, 119, 118,
			121, 120, 119,
			213, 121, 122,
			261, 123, 123,
			126, 125, 126,
			135, 127, 128,
			131, 129, 131,
			127, 132, 133,
			125, 127, 133,
			131, 128, 134,
			128, 136, 128,
			130, 138, 136,
			140, 139, 138,
			141, 140, 141,
			143, 142, 145,
			148, 144, 147,
			142, 144, 149,
			147, 148, 150,
			148, 145, 139,
			140, 142, 139,
			147, 149, 152,
			149, 153, 149,
			150, 155, 153,
			157, 156, 155,
			257, 157, 158,
			257, 155, 150,
			151, 159, 151,
			163, 160, 161,
			158, 159, 151,
			145, 162, 164,
			165, 163, 160,
			163, 165, 167,
			166, 165, 164,
			177, 168, 161,
			160, 166, 167,
			171, 169, 170,
			174, 171, 170,
			167, 168, 173,
			190, 174, 173,
			170, 172, 172,
			178, 176, 177,
			178, 172, 178,
			180, 179, 177,
			183, 180, 181,
			183, 177, 182,
			184, 183, 184,
			185, 180, 186,
			179, 185, 106,
			176, 179, 181,
			164, 162, 145,
			146, 187, 175,
			176, 106, 93,
			173, 175, 188,
			190, 173, 188,
			193, 189, 190,
			189, 191, 192,
			194, 189, 171,
			174, 191, 195,
			191, 194, 171,
			195, 197, 197,
			195, 196, 198,
			196, 199, 199,
			196, 194, 200,
			199, 201, 199,
			192, 203, 203,
			192, 193, 205,
			206, 203, 206,
			208, 201, 206,
			209, 207, 205,
			211, 209, 100,
			205, 204, 120,
			211, 205, 120,
			121, 210, 211,
			210, 212, 213,
			214, 210, 207,
			209, 212, 207,
			215, 216, 208,
			207, 217, 218,
			217, 219, 217,
			216, 221, 219,
			223, 222, 221,
			225, 223, 224,
			226, 225, 216,
			262, 224, 226,
			229, 227, 230,
			227, 228, 232,
			231, 228, 232,
			233, 122, 235,
			231, 232, 236,
			232, 234, 237,
			234, 238, 234,
			122, 124, 238,
			133, 134, 124,
			125, 133, 239,
			134, 137, 240,
			241, 237, 240,
			152, 154, 137,
			139, 152, 241,
			242, 236, 154,
			156, 242, 156,
			259, 243, 242,
			243, 235, 243,
			246, 244, 243,
			259, 245, 244,
			230, 231, 223,
			230, 244, 246,
			247, 222, 247,
			249, 220, 247,
			250, 248, 246,
			245, 250, 250,
			253, 251, 250,
			245, 252, 251,
			253, 254, 253,
			252, 256, 255,
			254, 158, 158,
			254, 256, 257,
			256, 258, 156,
			157, 258, 259,
			258, 252, 255,
			161, 169, 251,
			255, 197, 248,
			251, 198, 249,
			248, 200, 220,
			249, 202, 208,
			218, 202, 223,
			225, 227, 204,
			193, 188,
		},
	},
	{
		.name = "GREEN-ORANGE_Cube.015",
		.colors = { game::GREEN, game::ORANGE },
		.vertices = { // 261 vertex
			VertexData{
				.position = { +2.94f, -0.97f, +1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, -0.94f, +1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, -0.94f, +1.04f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, -0.98f, +1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, -0.95f, +1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, -0.98f, +2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -0.91f, +1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +3.00f, -0.87f, +1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -0.91f, +1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, -0.94f, +2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +3.00f, -0.87f, +2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -0.91f, +2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.96f, +0.94f, +2.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +3.00f, +0.87f, +1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -0.87f, +1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +3.00f, +0.87f, +2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +0.91f, +1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +0.91f, +2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +0.87f, +1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +0.87f, +2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +0.91f, +2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, +0.94f, +2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, +0.95f, +2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, +0.98f, +1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, +0.95f, +1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, +0.98f, +2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, +0.91f, +1.06f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +0.91f, +1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, +0.97f, +1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, +0.91f, +1.03f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, +0.94f, +1.04f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, +0.87f, +1.05f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, +0.87f, +1.02f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, -0.87f, +2.98f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, -0.94f, +2.96f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, -0.91f, +2.99f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, -0.91f, +2.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -0.87f, +2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, +0.91f, +2.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, +0.94f, +2.96f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, -0.87f, +2.95f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, +0.99f, +2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, -0.91f, +2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, -0.97f, +1.06f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.96f, -0.94f, +1.06f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, +0.91f, +1.01f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, -0.91f, +2.97f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, +0.97f, +2.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, -0.91f, +1.06f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +1.09f, -0.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.09f, -0.87f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.13f, -0.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.04f, -0.94f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.13f, -0.95f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.09f, -0.94f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.87f, +0.87f, +1.00f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.13f, -0.98f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.87f, -0.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.91f, -0.87f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.91f, -0.94f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.94f, -0.91f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.95f, -0.87f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.97f, -0.91f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.87f, -0.87f, +3.00f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.91f, +0.87f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.87f, +0.87f, +3.00f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.91f, +0.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.94f, +0.91f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.13f, +0.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.95f, +0.87f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.97f, +0.91f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.98f, +0.87f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.98f, -0.87f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.94f, +0.96f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.91f, +0.94f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.09f, +0.97f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.13f, +0.87f, +3.00f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.09f, +0.94f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.09f, +0.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.09f, +0.87f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.06f, +0.94f, +2.96f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.03f, +0.91f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.05f, +0.87f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.87f, +0.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.05f, -0.87f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.87f, -0.98f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.99f, -0.87f, +2.91f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.94f, +0.94f, +2.96f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.06f, +0.91f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.09f, -0.99f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -0.97f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -1.00f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -1.00f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -0.99f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -0.99f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -0.99f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -1.00f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -0.99f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -0.99f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -0.99f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -0.99f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -0.99f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -0.98f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -0.98f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -0.97f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -0.95f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -0.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -0.94f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -0.87f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -0.87f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -0.94f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.14f, -0.70f, +0.70f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -0.87f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -0.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -0.91f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, -0.91f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -0.96f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -0.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -0.97f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, -0.87f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -0.94f, +1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.96f, -0.94f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, -0.94f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, -0.98f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, -0.98f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -0.97f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, -0.94f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -0.96f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.98f, -0.95f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.98f, +0.95f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, +0.98f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, +0.94f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.96f, +0.94f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +0.97f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +0.99f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +0.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +0.94f, +1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +0.94f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +0.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, +0.87f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +0.97f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +0.87f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.98f, -0.87f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +0.96f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +0.95f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +0.99f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +0.98f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +0.98f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.99f, +0.91f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +0.99f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +0.97f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +0.94f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, +0.98f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +0.95f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +0.87f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +0.87f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +0.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +0.91f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, +0.91f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +0.96f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +0.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -0.99f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, +0.87f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +0.94f, +1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.04f, +0.94f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, +0.94f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +0.97f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +0.99f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, +0.95f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +0.99f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +0.91f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, +0.87f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, +0.98f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +0.99f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +0.97f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, +0.94f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +0.98f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, +0.95f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +0.91f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, +0.87f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +0.91f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -0.87f, +3.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, -0.87f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +0.87f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, -0.87f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -0.91f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -0.87f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -0.91f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -0.87f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -0.91f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, -0.94f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, -0.95f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, -0.98f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, -0.95f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, -0.98f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, -0.94f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.04f, -0.94f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, -0.91f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -0.97f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, +0.87f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, -0.91f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -0.91f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -0.94f, +1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, -0.87f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, -0.87f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -0.87f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -0.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -0.96f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -0.95f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -0.96f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -0.97f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -0.99f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, -0.91f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -0.95f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -0.94f, +2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.04f, -0.94f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, -0.87f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, -0.87f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, -0.91f, +2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, -0.91f, +2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, -0.98f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -0.95f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -0.97f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -0.98f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, -0.91f, +2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.96f, -0.94f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, -0.99f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -0.91f, +2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.99f, -0.91f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, -0.94f, +2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +0.97f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +0.96f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +0.94f, +2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +0.91f, +2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +0.97f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +0.99f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +0.99f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +1.00f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +0.95f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +0.99f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +0.99f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +1.00f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +1.00f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +1.00f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +0.99f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +0.99f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +0.95f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +0.94f, +2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +0.91f, +2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +0.97f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +0.94f, +2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, +0.87f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.04f, +0.94f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, +0.87f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +0.96f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +0.91f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +0.87f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, +0.91f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +0.98f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.99f, -0.91f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, +0.94f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},

		},

		.indices = { // 1284 values
			0, 1, 2, 3,
			1, 4, 5,
			4, 6, 6,
			0, 7, 8,
			9, 10, 6,
			10, 9, 7,
			11, 10, 12,
			10, 11, 7,
			13, 14, 14,
			15, 16, 16,
			11, 14, 17,
			16, 18, 15,
			18, 16, 12,
			19, 20, 17,
			20, 19, 21,
			22, 17, 21,
			18, 23, 24,
			25, 21, 26,
			23, 18, 26,
			27, 28, 29,
			26, 15, 30,
			31, 29, 32,
			27, 31, 33,
			34, 35, 36,
			35, 37, 22,
			38, 20, 37,
			20, 38, 37,
			8, 12, 22,
			39, 40, 41,
			39, 25, 8,
			34, 42, 43,
			30, 29, 13,
			29, 15, 0,
			43, 13, 0,
			4, 1, 3,
			44, 1, 5,
			3, 4, 6,
			4, 0, 8,
			42, 9, 6,
			7, 10, 7,
			14, 11, 12,
			8, 10, 7,
			0, 13, 14,
			13, 15, 16,
			19, 11, 17,
			19, 16, 15,
			26, 18, 12,
			11, 19, 17,
			22, 20, 21,
			25, 22, 21,
			17, 18, 24,
			41, 25, 26,
			28, 23, 26,
			31, 27, 29,
			31, 26, 30,
			32, 31, 32,
			45, 27, 33,
			46, 34, 36,
			33, 35, 22,
			40, 38, 37,
			12, 20, 37,
			35, 8, 22,
			25, 39, 41,
			47, 39, 8,
			35, 34, 43,
			48, 30, 13,
			43, 29, 0,
			2, 43, 49,
			50, 51, 50,
			52, 53, 51,
			54, 55, 50,
			56, 54, 57,
			54, 56, 57,
			58, 59, 58,
			60, 61, 58,
			62, 63, 59,
			63, 64, 64,
			65, 66, 63,
			67, 65, 65,
			68, 66, 67,
			69, 65, 70,
			71, 67, 62,
			70, 67, 72,
			73, 71, 69,
			74, 68, 75,
			68, 74, 76,
			66, 68, 76,
			77, 78, 75,
			79, 76, 79,
			80, 77, 79,
			81, 82, 77,
			49, 51, 78,
			51, 55, 66,
			55, 64, 59,
			55, 54, 69,
			73, 83, 49,
			84, 50, 50,
			84, 52, 51,
			50, 54, 50,
			53, 56, 57,
			59, 54, 57,
			85, 58, 58,
			85, 60, 58,
			61, 62, 59,
			58, 63, 64,
			63, 65, 63,
			62, 67, 65,
			69, 68, 67,
			71, 69, 70,
			72, 71, 62,
			86, 70, 72,
			87, 73, 69,
			83, 74, 75,
			76, 68, 76,
			78, 66, 76,
			79, 77, 75,
			88, 79, 79,
			82, 80, 79,
			88, 81, 77,
			80, 49, 78,
			77, 51, 66,
			78, 55, 59,
			64, 55, 69,
			71, 73, 89,
			90, 91, 92,
			93, 89, 94,
			92, 89, 95,
			89, 91, 96,
			97, 94, 95,
			96, 94, 98,
			99, 95, 95,
			100, 98, 101,
			102, 98, 100,
			101, 98, 90,
			100, 91, 103,
			104, 100, 104,
			105, 106, 104,
			107, 101, 106,
			108, 107, 106,
			109, 110, 107,
			111, 101, 112,
			107, 108, 110,
			113, 108, 114,
			108, 113, 115,
			112, 114, 112,
			116, 117, 118,
			119, 115, 120,
			116, 119, 117,
			121, 111, 121,
			116, 122, 102,
			121, 123, 102,
			124, 99, 99,
			125, 96, 124,
			126, 125, 125,
			127, 96, 126,
			128, 125, 129,
			130, 131, 130,
			132, 131, 133,
			134, 132, 135,
			136, 137, 135,
			138, 139, 140,
			135, 141, 141,
			137, 142, 143,
			144, 140, 145,
			138, 144, 146,
			134, 145, 146,
			143, 147, 134,
			148, 138, 147,
			149, 150, 143,
			151, 149, 149,
			152, 150, 151,
			153, 149, 154,
			151, 155, 140,
			155, 151, 141,
			156, 155, 157,
			155, 156, 158,
			154, 157, 154,
			159, 160, 161,
			162, 158, 163,
			159, 162, 160,
			164, 153, 164,
			159, 165, 166,
			165, 163, 167,
			165, 168, 169,
			168, 170, 170,
			166, 171, 152,
			164, 167, 152,
			169, 172, 172,
			173, 174, 169,
			175, 173, 173,
			176, 174, 175,
			177, 173, 178,
			175, 179, 170,
			179, 175, 171,
			180, 179, 181,
			179, 180, 171,
			182, 183, 184,
			183, 182, 180,
			185, 186, 187,
			185, 188, 184,
			188, 185, 181,
			186, 189, 187,
			189, 186, 190,
			191, 187, 190,
			188, 192, 193,
			194, 190, 193,
			192, 195, 192,
			196, 195, 197,
			192, 188, 198,
			199, 196, 197,
			200, 198, 201,
			197, 184, 202,
			203, 201, 204,
			200, 203, 109,
			202, 205, 109,
			206, 204, 110,
			205, 207, 207,
			157, 156, 205,
			158, 157, 156,
			113, 207, 199,
			200, 206, 208,
			206, 105, 103,
			199, 208, 158,
			201, 161, 201,
			182, 161, 166,
			161, 182, 195,
			103, 90, 93,
			195, 90, 209,
			193, 93, 209,
			210, 211, 211,
			212, 194, 213,
			210, 214, 210,
			215, 212, 191,
			212, 216, 216,
			215, 217, 191,
			218, 189, 218,
			217, 219, 220,
			214, 221, 222,
			220, 221, 222,
			223, 224, 97,
			221, 92, 127,
			222, 97, 127,
			225, 226, 226,
			227, 223, 228,
			225, 128, 225,
			229, 227, 230,
			231, 232, 233,
			230, 234, 235,
			230, 236, 235,
			129, 237, 238,
			235, 239, 239,
			237, 240, 240,
			241, 242, 237,
			131, 241, 241,
			147, 242, 131,
			146, 241, 242,
			150, 243, 243,
			240, 242, 243,
			174, 244, 150,
			172, 243, 244,
			239, 240, 174,
			245, 244, 176,
			246, 245, 245,
			238, 239, 246,
			247, 238, 246,
			248, 249, 247,
			234, 238, 250,
			251, 252, 253,
			254, 251, 252,
			178, 181, 178,
			254, 255, 255,
			256, 177, 257,
			256, 254, 176,
			256, 258, 258,
			257, 248, 252,
			189, 218, 250,
			218, 219, 221,
			209, 92, 114,
			142, 137, 115,
			137, 136, 89,
			93, 90, 92,
			209, 93, 94,
			97, 92, 95,
			94, 89, 96,
			127, 97, 95,
			99, 96, 98,
			102, 99, 95,
			91, 100, 101,
			111, 102, 100,
			104, 101, 90,
			103, 100, 103,
			208, 104, 104,
			208, 105, 104,
			106, 107, 106,
			110, 108, 106,
			105, 109, 107,
			117, 111, 112,
			117, 107, 110,
			207, 113, 114,
			112, 108, 115,
			119, 112, 112,
			119, 116, 118,
			120, 119, 120,
			122, 116, 117,
			116, 121, 102,
			111, 121, 102,
			123, 124, 99,
			124, 125, 124,
			259, 126, 125,
			128, 127, 126,
			228, 128, 129,
			260, 130, 130,
			133, 132, 133,
			148, 134, 135,
			139, 136, 135,
			144, 138, 140,
			144, 135, 141,
			135, 137, 143,
			145, 144, 145,
			134, 138, 146,
			132, 134, 146,
			145, 143, 147,
			143, 149, 143,
			140, 151, 149,
			153, 152, 151,
			160, 153, 154,
			160, 151, 140,
			141, 155, 141,
			142, 156, 157,
			154, 155, 158,
			162, 154, 154,
			162, 159, 161,
			163, 162, 163,
			165, 159, 160,
			159, 164, 166,
			168, 165, 167,
			164, 165, 169,
			167, 168, 170,
			168, 166, 152,
			153, 164, 152,
			167, 169, 172,
			169, 173, 169,
			170, 175, 173,
			177, 176, 175,
			255, 177, 178,
			255, 175, 170,
			171, 179, 171,
			183, 180, 181,
			178, 179, 171,
			166, 182, 184,
			185, 183, 180,
			183, 185, 187,
			186, 185, 184,
			197, 188, 181,
			180, 186, 187,
			191, 189, 190,
			194, 191, 190,
			187, 188, 193,
			211, 194, 193,
			190, 192, 192,
			198, 196, 197,
			198, 192, 198,
			200, 199, 197,
			203, 200, 201,
			203, 197, 202,
			204, 203, 204,
			206, 200, 109,
			204, 202, 109,
			105, 206, 110,
			109, 205, 207,
			205, 157, 205,
			202, 158, 156,
			142, 113, 208,
			199, 206, 103,
			196, 199, 158,
			202, 201, 201,
			184, 182, 166,
			163, 161, 195,
			196, 103, 93,
			193, 195, 209,
			211, 193, 209,
			214, 210, 211,
			210, 212, 213,
			215, 210, 191,
			194, 212, 216,
			212, 215, 191,
			216, 218, 218,
			216, 217, 220,
			213, 214, 222,
			224, 220, 222,
			226, 223, 97,
			222, 221, 127,
			226, 222, 127,
			128, 225, 226,
			225, 227, 228,
			229, 225, 233,
			231, 230, 235,
			234, 230, 235,
			236, 129, 238,
			234, 235, 239,
			235, 237, 240,
			237, 241, 237,
			129, 131, 241,
			146, 147, 131,
			132, 146, 242,
			147, 150, 243,
			244, 240, 243,
			172, 174, 150,
			152, 172, 244,
			245, 239, 174,
			176, 245, 176,
			258, 246, 245,
			246, 238, 246,
			249, 247, 246,
			258, 248, 247,
			233, 234, 250,
			253, 251, 253,
			257, 254, 252,
			251, 178, 178,
			251, 254, 255,
			254, 256, 176,
			177, 256, 258,
			256, 257, 252,
			181, 189, 250,
			252, 218, 221,
			214, 209, 114,
			113, 142, 115,
			114, 137,
		},
	},
	{
		.name = "YELLOW-GREEN_Cube.016",
		.colors = { game::YELLOW, game::GREEN },
		.vertices = { // 261 vertex
			VertexData{
				.position = { +2.98f, +2.95f, -0.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.95f, +2.98f, -0.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.97f, +2.94f, -0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.96f, +2.94f, -0.94f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.94f, +2.97f, -0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.87f, +2.99f, -0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.87f, +2.98f, -0.95f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.91f, +2.99f, -0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.94f, +2.96f, -0.94f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.13f, +2.98f, -0.95f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.13f, +2.99f, -0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.09f, +2.97f, -0.94f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.05f, +2.98f, -0.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.04f, +2.94f, -0.94f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.09f, +2.99f, -0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.09f, +2.99f, -0.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.05f, +2.98f, +0.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.09f, +2.99f, +0.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.06f, +2.97f, +0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.13f, +2.98f, +0.95f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.87f, +2.99f, +0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.91f, +2.97f, +0.94f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.91f, +2.99f, +0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.87f, +3.00f, +0.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.87f, +2.95f, +0.98f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.91f, +2.99f, +0.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.91f, +2.99f, -0.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.87f, +3.00f, -0.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.13f, +3.00f, -0.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.13f, +3.00f, +0.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.13f, +2.99f, +0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.09f, +2.99f, +0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.13f, +2.95f, +0.98f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.01f, +2.87f, +0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.87f, +2.98f, +0.95f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.97f, +2.94f, +0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.99f, +2.91f, -0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.13f, +2.95f, -0.98f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.02f, +2.95f, +0.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.94f, +2.97f, +0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.94f, +1.03f, -0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, +1.06f, -0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, +1.06f, -0.96f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, +1.02f, -0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, +1.05f, -0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, +1.02f, +0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +1.09f, -0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +3.00f, +1.13f, -0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +1.09f, -0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, +1.06f, +0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +3.00f, +1.13f, +0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +1.09f, +0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.96f, +2.94f, +0.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +3.00f, +2.87f, -0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +1.13f, -0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +3.00f, +2.87f, +0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +2.91f, -0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +2.91f, +0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +2.87f, -0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +2.87f, +0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +2.91f, +0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, +2.94f, +0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, +2.95f, +0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, +2.98f, -0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, +2.95f, -0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, +2.98f, +0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, +2.91f, -0.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +2.91f, -0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, +2.97f, -0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, +2.91f, -0.97f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, +2.94f, -0.96f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, +2.87f, -0.95f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, +2.87f, -0.98f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, +1.13f, +0.98f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, +1.06f, +0.96f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, +1.09f, +0.99f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, +1.09f, +0.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +1.13f, +0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, +2.91f, +0.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, +2.94f, +0.96f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, +1.13f, +0.95f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, +2.99f, +0.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +1.09f, +0.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, +1.03f, -0.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.96f, +1.06f, -0.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, +2.91f, -0.99f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, +1.09f, +0.97f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, +2.97f, +0.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, +1.09f, -0.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +1.09f, +1.01f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +1.03f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +1.00f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +1.00f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +1.01f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +1.01f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +1.01f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +1.00f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +1.01f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +1.01f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +1.01f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +1.01f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +1.02f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +1.01f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +1.02f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +1.03f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +1.05f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +1.09f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +1.06f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +1.13f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +1.13f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +1.06f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.00f, +0.00f, +0.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +1.13f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +1.09f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +1.09f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, +1.09f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +1.04f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +1.09f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +1.03f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, +1.13f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +1.06f, -0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.96f, +1.06f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, +1.06f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, +1.02f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, +1.02f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +1.03f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, +1.06f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +1.04f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.98f, +1.05f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +2.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +2.94f, -0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +2.94f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +2.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, +2.87f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +2.97f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +2.87f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.98f, +1.13f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +2.96f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +2.95f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +2.99f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +2.99f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.99f, +2.91f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +2.94f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +2.99f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +2.95f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +2.87f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +2.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +2.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +2.91f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, +2.91f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +2.96f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +2.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +1.01f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, +2.87f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +2.94f, -0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.04f, +2.94f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, +2.94f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +2.97f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +2.99f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, +2.95f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +2.99f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +2.91f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, +2.87f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, +2.94f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +2.99f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, +2.95f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +2.91f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, +2.87f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +2.91f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +1.13f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, +1.13f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +2.87f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, +1.13f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +1.09f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +1.13f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +1.09f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +1.13f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +1.09f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, +1.06f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, +1.05f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, +1.02f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, +1.05f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, +1.02f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, +1.06f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.04f, +1.06f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, +1.09f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +1.03f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, +2.87f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +1.09f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +1.09f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +1.06f, -0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, +1.13f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, +1.13f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +1.13f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +1.09f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +1.04f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +1.05f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +1.04f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +1.03f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +1.01f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, +1.09f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +1.05f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +1.06f, +0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.04f, +1.06f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, +1.13f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, +1.13f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +1.09f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +1.09f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +1.13f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +1.09f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +1.06f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +2.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +1.02f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +1.05f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +1.03f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +1.09f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +1.13f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +1.06f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +1.02f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.96f, +1.06f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +1.01f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +1.09f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.99f, +1.09f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +1.06f, +0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, +1.13f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, +1.09f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +1.13f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +2.87f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +2.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +2.87f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +2.91f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +2.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, +2.87f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, +2.91f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.98f, +2.87f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.98f, +1.13f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +2.96f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +2.97f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +2.94f, +0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +2.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +2.97f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +2.95f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +2.94f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +2.95f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +2.91f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +2.97f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +2.87f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +2.94f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +2.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +2.87f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +2.94f, +0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, +2.91f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, +2.87f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, +2.87f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.04f, +2.94f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +2.96f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +2.91f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +2.87f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +2.98f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.99f, +1.09f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.99f, +1.13f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},

		},

		.indices = { // 1284 values
			0, 1, 2, 1,
			3, 2, 4,
			5, 3, 6,
			5, 7, 6,
			8, 9, 9,
			10, 11, 10,
			12, 11, 12,
			13, 14, 12,
			15, 16, 16,
			17, 18, 17,
			19, 18, 20,
			21, 22, 20,
			0, 23, 24,
			20, 25, 25,
			23, 26, 26,
			27, 28, 23,
			2, 27, 27,
			9, 28, 2,
			6, 27, 28,
			11, 29, 29,
			26, 28, 29,
			18, 30, 11,
			16, 29, 30,
			25, 26, 18,
			31, 30, 19,
			32, 31, 31,
			24, 25, 19,
			33, 34, 0,
			35, 1, 1,
			4, 3, 4,
			36, 5, 6,
			3, 5, 6,
			7, 8, 9,
			8, 10, 10,
			37, 12, 12,
			37, 13, 12,
			14, 15, 16,
			15, 17, 17,
			38, 19, 20,
			39, 21, 20,
			22, 0, 24,
			39, 20, 25,
			20, 23, 26,
			23, 27, 23,
			0, 2, 27,
			6, 9, 2,
			3, 6, 28,
			9, 11, 29,
			30, 26, 29,
			16, 18, 11,
			12, 16, 30,
			31, 25, 18,
			19, 31, 19,
			34, 32, 31,
			32, 24, 19,
			38, 33, 40,
			41, 42, 43,
			41, 44, 45,
			44, 46, 46,
			40, 47, 48,
			49, 50, 46,
			50, 49, 47,
			51, 50, 52,
			50, 51, 47,
			53, 54, 54,
			55, 56, 56,
			51, 54, 57,
			56, 58, 55,
			58, 56, 52,
			59, 60, 57,
			60, 59, 61,
			62, 57, 61,
			58, 63, 64,
			65, 61, 66,
			63, 58, 66,
			67, 68, 69,
			66, 55, 70,
			71, 69, 72,
			67, 71, 73,
			74, 75, 76,
			75, 77, 62,
			78, 60, 77,
			60, 78, 77,
			48, 52, 62,
			79, 80, 81,
			79, 65, 48,
			74, 82, 83,
			70, 69, 53,
			69, 55, 40,
			83, 53, 40,
			44, 41, 43,
			84, 41, 45,
			43, 44, 46,
			44, 40, 48,
			82, 49, 46,
			47, 50, 47,
			54, 51, 52,
			48, 50, 47,
			40, 53, 54,
			53, 55, 56,
			59, 51, 57,
			59, 56, 55,
			66, 58, 52,
			51, 59, 57,
			62, 60, 61,
			65, 62, 61,
			57, 58, 64,
			81, 65, 66,
			68, 63, 66,
			71, 67, 69,
			71, 66, 70,
			72, 71, 72,
			85, 67, 73,
			86, 74, 76,
			73, 75, 62,
			80, 78, 77,
			52, 60, 77,
			75, 48, 62,
			65, 79, 81,
			87, 79, 48,
			75, 74, 83,
			88, 70, 53,
			83, 69, 40,
			42, 83, 89,
			90, 91, 92,
			93, 89, 94,
			92, 89, 95,
			89, 91, 96,
			97, 94, 95,
			96, 94, 98,
			99, 95, 91,
			98, 95, 100,
			101, 98, 102,
			100, 98, 90,
			102, 91, 103,
			104, 102, 104,
			105, 106, 104,
			107, 100, 106,
			108, 107, 106,
			109, 110, 107,
			111, 100, 112,
			107, 108, 110,
			113, 108, 114,
			108, 113, 115,
			112, 114, 112,
			116, 117, 118,
			119, 115, 120,
			116, 119, 117,
			121, 111, 121,
			116, 122, 101,
			121, 123, 101,
			124, 99, 99,
			125, 96, 124,
			126, 125, 125,
			127, 96, 126,
			128, 125, 129,
			130, 131, 129,
			132, 133, 134,
			129, 135, 135,
			131, 136, 137,
			138, 134, 139,
			132, 138, 140,
			141, 132, 137,
			142, 143, 142,
			144, 143, 145,
			142, 146, 134,
			146, 142, 135,
			147, 146, 148,
			146, 147, 149,
			145, 148, 145,
			150, 151, 152,
			153, 149, 154,
			150, 153, 151,
			155, 144, 155,
			150, 156, 157,
			156, 154, 158,
			156, 159, 160,
			159, 161, 161,
			157, 162, 160,
			163, 164, 163,
			165, 164, 166,
			163, 167, 161,
			167, 163, 162,
			168, 167, 169,
			167, 168, 162,
			170, 171, 172,
			171, 170, 168,
			173, 174, 175,
			173, 176, 172,
			176, 173, 177,
			168, 174, 175,
			177, 174, 178,
			179, 175, 178,
			176, 180, 181,
			182, 178, 181,
			180, 183, 180,
			184, 183, 185,
			180, 176, 186,
			187, 184, 185,
			188, 186, 189,
			185, 172, 190,
			191, 189, 192,
			188, 191, 109,
			190, 193, 109,
			194, 192, 110,
			193, 195, 147,
			193, 148, 193,
			149, 148, 147,
			113, 195, 187,
			188, 194, 196,
			194, 105, 103,
			187, 196, 190,
			152, 149, 189,
			170, 152, 157,
			152, 170, 183,
			103, 90, 93,
			183, 90, 197,
			181, 93, 197,
			198, 199, 199,
			200, 182, 201,
			198, 202, 198,
			203, 200, 179,
			200, 204, 204,
			203, 205, 179,
			206, 177, 206,
			205, 207, 207,
			208, 209, 208,
			203, 201, 209,
			210, 211, 208,
			212, 210, 212,
			202, 213, 214,
			212, 213, 215,
			210, 212, 215,
			216, 217, 214,
			218, 215, 97,
			213, 92, 127,
			214, 97, 127,
			219, 220, 220,
			221, 218, 222,
			219, 128, 219,
			223, 221, 216,
			221, 224, 216,
			225, 226, 217,
			226, 227, 228,
			226, 229, 226,
			230, 229, 229,
			231, 228, 230,
			232, 229, 233,
			234, 230, 225,
			233, 230, 235,
			236, 234, 237,
			236, 238, 239,
			237, 240, 241,
			242, 243, 241,
			244, 245, 242,
			240, 243, 232,
			242, 231, 245,
			231, 242, 246,
			228, 231, 246,
			247, 248, 245,
			249, 246, 249,
			250, 247, 249,
			251, 252, 250,
			253, 254, 252,
			255, 253, 254,
			166, 169, 166,
			255, 256, 256,
			257, 165, 251,
			257, 255, 258,
			251, 244, 254,
			177, 206, 250,
			206, 207, 247,
			207, 209, 248,
			209, 211, 228,
			211, 227, 217,
			211, 210, 232,
			236, 239, 213,
			197, 92, 114,
			136, 131, 115,
			131, 130, 89,
			93, 90, 92,
			197, 93, 94,
			97, 92, 95,
			94, 89, 96,
			127, 97, 95,
			99, 96, 98,
			101, 99, 91,
			102, 98, 100,
			111, 101, 102,
			104, 100, 90,
			103, 102, 103,
			196, 104, 104,
			196, 105, 104,
			106, 107, 106,
			110, 108, 106,
			105, 109, 107,
			117, 111, 112,
			117, 107, 110,
			195, 113, 114,
			112, 108, 115,
			119, 112, 112,
			119, 116, 118,
			120, 119, 120,
			122, 116, 117,
			116, 121, 101,
			111, 121, 101,
			123, 124, 99,
			124, 125, 124,
			259, 126, 125,
			128, 127, 126,
			222, 128, 129,
			133, 130, 129,
			138, 132, 134,
			138, 129, 135,
			129, 131, 137,
			139, 138, 139,
			140, 132, 137,
			134, 142, 142,
			151, 144, 145,
			151, 142, 134,
			135, 146, 135,
			136, 147, 148,
			145, 146, 149,
			153, 145, 145,
			153, 150, 152,
			154, 153, 154,
			156, 150, 151,
			150, 155, 157,
			159, 156, 158,
			155, 156, 160,
			158, 159, 161,
			159, 157, 160,
			161, 163, 163,
			256, 165, 166,
			256, 163, 161,
			162, 167, 162,
			171, 168, 169,
			166, 167, 162,
			157, 170, 172,
			173, 171, 168,
			171, 173, 175,
			174, 173, 172,
			185, 176, 177,
			169, 168, 175,
			179, 177, 178,
			182, 179, 178,
			175, 176, 181,
			199, 182, 181,
			178, 180, 180,
			186, 184, 185,
			186, 180, 186,
			188, 187, 185,
			191, 188, 189,
			191, 185, 190,
			192, 191, 192,
			194, 188, 109,
			192, 190, 109,
			105, 194, 110,
			109, 193, 147,
			195, 193, 193,
			190, 149, 147,
			136, 113, 196,
			187, 194, 103,
			184, 187, 190,
			189, 152, 189,
			172, 170, 157,
			154, 152, 183,
			184, 103, 93,
			181, 183, 197,
			199, 181, 197,
			202, 198, 199,
			198, 200, 201,
			203, 198, 179,
			182, 200, 204,
			200, 203, 179,
			204, 206, 206,
			204, 205, 207,
			205, 208, 208,
			205, 203, 209,
			208, 210, 208,
			201, 212, 212,
			201, 202, 214,
			215, 212, 215,
			217, 210, 215,
			218, 216, 214,
			220, 218, 97,
			214, 213, 127,
			220, 214, 127,
			128, 219, 220,
			219, 221, 222,
			223, 219, 216,
			218, 221, 216,
			224, 225, 217,
			216, 226, 228,
			227, 226, 226,
			225, 230, 229,
			232, 231, 230,
			234, 232, 233,
			235, 234, 225,
			260, 233, 235,
			238, 236, 239,
			236, 237, 241,
			245, 242, 241,
			258, 244, 242,
			239, 240, 232,
			239, 242, 245,
			246, 231, 246,
			248, 228, 246,
			249, 247, 245,
			244, 249, 249,
			252, 250, 249,
			244, 251, 250,
			252, 253, 252,
			251, 255, 254,
			253, 166, 166,
			253, 255, 256,
			255, 257, 258,
			257, 251, 254,
			169, 177, 250,
			254, 206, 247,
			250, 207, 248,
			247, 209, 228,
			248, 211, 217,
			227, 211, 232,
			234, 236, 213,
			202, 197, 114,
			113, 136, 115,
			114, 131,
		},
	},
	{
		.name = "YELLOW-GREEN-RED_Cube.017",
		.colors = { game::RED, game::YELLOW, game::GREEN },
		.vertices = { // 276 vertex
			VertexData{
				.position = { +2.97f, +2.94f, -2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.97f, +2.94f, -1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.95f, +2.98f, -2.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.96f, +2.94f, -2.94f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.94f, +2.97f, -2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.87f, +2.99f, -2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.87f, +2.98f, -2.95f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.91f, +2.99f, -2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.94f, +2.96f, -2.94f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.13f, +2.98f, -2.95f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.13f, +2.99f, -2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.09f, +2.97f, -2.94f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.05f, +2.98f, -2.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.04f, +2.94f, -2.94f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.09f, +2.99f, -2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.09f, +2.99f, -2.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.05f, +2.98f, -1.13f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.09f, +2.99f, -1.13f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.06f, +2.97f, -1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.13f, +2.98f, -1.05f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.87f, +2.99f, -1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.91f, +2.97f, -1.06f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.91f, +2.99f, -1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.98f, +2.95f, -2.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.87f, +3.00f, -1.13f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.87f, +2.95f, -1.02f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.91f, +2.99f, -1.13f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.91f, +2.99f, -2.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.87f, +3.00f, -2.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.13f, +3.00f, -2.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.13f, +3.00f, -1.13f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.13f, +2.99f, -1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.09f, +2.99f, -1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.13f, +2.95f, -1.02f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.01f, +2.87f, -1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.87f, +2.98f, -1.05f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.99f, +2.91f, -2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.13f, +2.95f, -2.98f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.02f, +2.95f, -1.13f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.94f, +2.97f, -1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.94f, +1.03f, -2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, +1.06f, -2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, +1.06f, -2.96f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, +1.02f, -2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, +1.05f, -2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, +1.02f, -1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +1.09f, -2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +3.00f, +1.13f, -2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +1.09f, -2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, +1.06f, -1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +3.00f, +1.13f, -1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +1.09f, -1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.96f, +2.94f, -1.06f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +3.00f, +2.87f, -2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +1.13f, -2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +2.91f, -2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +3.00f, +2.87f, -1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +2.91f, -1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +2.87f, -2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +2.87f, -1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +2.91f, -1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, +2.94f, -1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, +2.95f, -1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, +2.98f, -2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, +2.95f, -2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, +2.98f, -1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, +2.91f, -2.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +2.91f, -2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, +2.97f, -2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, +2.91f, -2.97f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, +2.94f, -2.96f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, +2.87f, -2.95f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, +2.87f, -2.98f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, +1.13f, -1.02f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, +1.06f, -1.04f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, +1.09f, -1.01f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, +1.09f, -1.06f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +1.13f, -1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, +2.91f, -1.06f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, +2.94f, -1.04f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, +1.13f, -1.05f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, +2.99f, -1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +1.09f, -1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, +1.03f, -2.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.96f, +1.06f, -2.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, +2.91f, -2.99f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, +1.09f, -1.03f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, +2.97f, -1.06f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, +1.09f, -2.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +1.13f, +1.09f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.87f, +1.13f, -3.00f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.91f, +1.06f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.09f, +1.13f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.09f, +1.06f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.91f, +1.13f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.91f, +1.09f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.94f, +1.09f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.97f, +1.09f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.94f, +1.04f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.87f, +1.09f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.91f, +1.03f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.95f, +1.13f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.94f, +1.06f, -2.96f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.87f, +2.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.94f, +2.94f, -2.96f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.91f, +2.94f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.91f, +2.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.95f, +2.87f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.91f, +2.97f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.91f, +2.87f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.98f, +1.13f, -2.95f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.94f, +2.96f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.87f, +2.95f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.91f, +2.99f, -2.91f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.87f, +2.99f, -2.91f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.99f, +2.91f, -2.91f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.09f, +2.94f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.13f, +2.99f, -2.91f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.13f, +2.95f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.09f, +2.87f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.13f, +2.87f, -3.00f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.09f, +2.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.06f, +2.91f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.03f, +2.91f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.06f, +2.96f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.13f, +2.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.09f, +1.01f, -2.87f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.05f, +2.87f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.06f, +2.94f, -2.96f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.04f, +2.94f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.06f, +1.06f, -2.96f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.13f, +1.13f, -3.00f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.09f, +1.09f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.05f, +1.13f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.06f, +1.04f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.87f, +1.05f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.97f, +1.06f, -2.91f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.03f, +2.94f, -2.91f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +1.06f, +1.09f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { +2.87f, +1.00f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +1.01f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +1.03f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +1.00f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +1.01f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +1.01f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +1.01f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +1.00f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +1.01f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +1.01f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +1.01f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +1.01f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +1.01f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +1.02f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +1.02f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +1.03f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +1.05f, -2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +1.09f, -2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +1.06f, -2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.00f, +0.00f, +0.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +1.09f, -2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.96f, +1.06f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +1.04f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, +1.06f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, +1.02f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, +1.02f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +1.03f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, +1.06f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +1.04f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.98f, +1.05f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.04f, +2.94f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +2.96f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, +2.94f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +2.97f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +2.94f, -2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +2.99f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, +2.95f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +2.99f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +2.91f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, +2.87f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, +2.94f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +2.99f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, +2.95f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +2.91f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, +2.87f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +2.91f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +1.13f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, +1.13f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +2.87f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, +1.13f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +1.09f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +1.13f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +1.09f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +1.13f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +1.09f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, +1.06f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, +1.05f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, +1.02f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, +1.05f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, +1.02f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, +1.06f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.04f, +1.06f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, +1.09f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +1.03f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, +2.87f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +1.09f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +1.09f, -2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +1.06f, -2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, +1.13f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, +1.13f, -2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +1.09f, -2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +1.05f, -2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +1.01f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +1.04f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +1.03f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +1.01f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, +1.09f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +1.05f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +1.06f, -1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.04f, +1.06f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, +1.13f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, +1.13f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +1.09f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +1.09f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +1.13f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +1.09f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +1.06f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +2.87f, -3.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +1.02f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +1.05f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +1.03f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +1.09f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +1.13f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +1.06f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +1.02f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.96f, +1.06f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +1.01f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +1.09f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.99f, +1.09f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +1.06f, -1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, +1.13f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, +1.09f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +1.13f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +2.87f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +2.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +2.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +2.91f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +2.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, +2.87f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, +2.91f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.98f, +2.87f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.98f, +1.13f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +2.96f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +2.97f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +2.94f, -1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +2.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +2.97f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +2.95f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +2.94f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +2.95f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +2.91f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +2.97f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +2.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +2.94f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +2.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +2.87f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +2.94f, -1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, +2.91f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, +2.87f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, +2.87f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.04f, +2.94f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +2.96f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +2.91f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +2.87f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +2.98f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.99f, +1.09f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.99f, +1.13f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},

		},

		.indices = { // 1284 values
			0, 1, 2, 2,
			3, 0, 4,
			5, 3, 6,
			5, 7, 6,
			8, 9, 9,
			10, 11, 10,
			12, 11, 12,
			13, 14, 12,
			15, 16, 16,
			17, 18, 17,
			19, 18, 20,
			21, 22, 20,
			23, 24, 25,
			20, 26, 26,
			24, 27, 27,
			28, 29, 24,
			0, 28, 28,
			9, 29, 0,
			6, 28, 29,
			11, 30, 30,
			27, 29, 30,
			18, 31, 11,
			16, 30, 31,
			26, 27, 18,
			32, 31, 19,
			33, 32, 32,
			25, 26, 19,
			34, 35, 0,
			23, 1, 2,
			4, 3, 4,
			36, 5, 6,
			3, 5, 6,
			7, 8, 9,
			8, 10, 10,
			37, 12, 12,
			37, 13, 12,
			14, 15, 16,
			15, 17, 17,
			38, 19, 20,
			39, 21, 20,
			22, 23, 25,
			39, 20, 26,
			20, 24, 27,
			24, 28, 24,
			23, 0, 28,
			6, 9, 0,
			3, 6, 29,
			9, 11, 30,
			31, 27, 30,
			16, 18, 11,
			12, 16, 31,
			32, 26, 18,
			19, 32, 19,
			35, 33, 32,
			33, 25, 19,
			38, 34, 40,
			41, 42, 43,
			41, 44, 45,
			44, 46, 46,
			40, 47, 48,
			49, 50, 46,
			50, 49, 47,
			51, 50, 52,
			50, 51, 47,
			53, 54, 55,
			53, 56, 55,
			51, 54, 57,
			55, 58, 56,
			58, 55, 52,
			59, 60, 57,
			60, 59, 61,
			62, 57, 61,
			58, 63, 64,
			65, 61, 66,
			63, 58, 66,
			67, 68, 69,
			66, 56, 70,
			71, 69, 72,
			67, 71, 73,
			74, 75, 76,
			75, 77, 62,
			78, 60, 77,
			60, 78, 77,
			48, 52, 62,
			79, 80, 81,
			79, 65, 48,
			74, 82, 83,
			70, 69, 53,
			69, 56, 40,
			83, 53, 40,
			44, 41, 43,
			84, 41, 45,
			43, 44, 46,
			44, 40, 48,
			82, 49, 46,
			47, 50, 47,
			54, 51, 52,
			48, 50, 47,
			40, 53, 55,
			54, 53, 55,
			59, 51, 57,
			59, 55, 56,
			66, 58, 52,
			51, 59, 57,
			62, 60, 61,
			65, 62, 61,
			57, 58, 64,
			81, 65, 66,
			68, 63, 66,
			71, 67, 69,
			71, 66, 70,
			72, 71, 72,
			85, 67, 73,
			86, 74, 76,
			73, 75, 62,
			80, 78, 77,
			52, 60, 77,
			75, 48, 62,
			65, 79, 81,
			87, 79, 48,
			75, 74, 83,
			88, 70, 53,
			83, 69, 40,
			42, 83, 89,
			90, 91, 89,
			92, 93, 94,
			91, 90, 93,
			95, 90, 96,
			90, 95, 97,
			94, 96, 94,
			98, 99, 100,
			101, 97, 102,
			98, 101, 103,
			104, 105, 103,
			106, 107, 108,
			103, 109, 109,
			105, 110, 111,
			112, 108, 113,
			106, 112, 114,
			115, 106, 111,
			116, 117, 116,
			118, 117, 119,
			116, 120, 108,
			120, 116, 109,
			121, 120, 122,
			120, 121, 123,
			119, 122, 119,
			124, 125, 126,
			127, 123, 128,
			124, 127, 125,
			129, 118, 92,
			130, 131, 92,
			132, 133, 93,
			131, 134, 121,
			131, 122, 131,
			123, 122, 121,
			95, 134, 130,
			126, 123, 96,
			110, 105, 104,
			96, 105, 89,
			93, 90, 89,
			135, 92, 94,
			99, 91, 93,
			134, 95, 96,
			94, 90, 97,
			101, 94, 94,
			101, 98, 100,
			102, 101, 102,
			136, 98, 103,
			107, 104, 103,
			112, 106, 108,
			112, 103, 109,
			103, 105, 111,
			113, 112, 113,
			114, 106, 111,
			108, 116, 116,
			125, 118, 119,
			125, 116, 108,
			109, 120, 109,
			110, 121, 122,
			119, 120, 123,
			127, 119, 119,
			127, 124, 126,
			128, 127, 128,
			137, 124, 125,
			124, 129, 92,
			133, 130, 92,
			135, 132, 93,
			92, 131, 121,
			134, 131, 131,
			130, 123, 121,
			110, 95, 130,
			138, 126, 96,
			95, 110, 104,
			97, 96, 139,
			140, 141, 142,
			140, 143, 144,
			142, 143, 145,
			143, 139, 146,
			147, 144, 145,
			146, 144, 148,
			149, 145, 145,
			150, 148, 151,
			152, 148, 150,
			151, 148, 141,
			150, 139, 153,
			154, 150, 154,
			155, 156, 154,
			157, 151, 157,
			158, 151, 159,
			160, 158, 160,
			161, 162, 152,
			160, 163, 152,
			164, 149, 149,
			165, 146, 164,
			166, 165, 165,
			167, 146, 166,
			168, 165, 169,
			170, 171, 172,
			171, 173, 174,
			171, 175, 176,
			175, 177, 177,
			172, 178, 176,
			179, 180, 179,
			181, 180, 182,
			179, 183, 177,
			183, 179, 178,
			184, 183, 185,
			183, 184, 178,
			186, 187, 188,
			187, 186, 184,
			189, 190, 191,
			189, 192, 188,
			192, 189, 193,
			184, 190, 191,
			193, 190, 194,
			195, 191, 194,
			192, 196, 197,
			198, 194, 197,
			196, 199, 196,
			200, 199, 201,
			196, 192, 202,
			203, 200, 201,
			204, 202, 205,
			201, 188, 206,
			207, 205, 208,
			204, 207, 203,
			204, 209, 210,
			209, 155, 153,
			203, 210, 205,
			186, 211, 172,
			211, 186, 199,
			153, 141, 140,
			199, 141, 212,
			197, 140, 212,
			213, 214, 214,
			215, 198, 216,
			213, 217, 213,
			218, 215, 195,
			215, 219, 219,
			218, 220, 195,
			221, 193, 221,
			220, 222, 222,
			223, 224, 223,
			218, 216, 224,
			225, 226, 223,
			227, 225, 227,
			217, 228, 229,
			227, 228, 230,
			225, 227, 230,
			231, 232, 229,
			233, 230, 147,
			228, 142, 167,
			229, 147, 167,
			234, 235, 235,
			236, 233, 237,
			234, 168, 234,
			238, 236, 231,
			236, 239, 231,
			240, 241, 232,
			241, 242, 242,
			243, 244, 241,
			245, 243, 243,
			246, 244, 245,
			247, 243, 248,
			249, 245, 240,
			248, 245, 250,
			251, 249, 252,
			251, 253, 254,
			252, 255, 256,
			257, 258, 256,
			259, 260, 257,
			255, 258, 247,
			257, 246, 260,
			246, 257, 261,
			244, 246, 261,
			262, 263, 260,
			264, 261, 264,
			265, 262, 264,
			266, 267, 265,
			268, 269, 267,
			270, 268, 269,
			182, 185, 182,
			270, 271, 271,
			272, 181, 266,
			272, 270, 273,
			266, 259, 269,
			193, 221, 265,
			221, 222, 262,
			222, 224, 263,
			224, 226, 244,
			226, 242, 232,
			226, 225, 247,
			251, 254, 228,
			212, 142, 139,
			143, 140, 142,
			212, 140, 144,
			147, 142, 145,
			144, 143, 146,
			167, 147, 145,
			149, 146, 148,
			152, 149, 145,
			139, 150, 151,
			158, 152, 150,
			154, 151, 141,
			153, 150, 153,
			210, 154, 154,
			210, 155, 154,
			156, 157, 157,
			159, 158, 159,
			161, 160, 152,
			158, 160, 152,
			163, 164, 149,
			164, 165, 164,
			274, 166, 165,
			168, 167, 166,
			237, 168, 172,
			175, 171, 174,
			169, 171, 176,
			174, 175, 177,
			175, 172, 176,
			177, 179, 179,
			271, 181, 182,
			271, 179, 177,
			178, 183, 178,
			187, 184, 185,
			182, 183, 178,
			172, 186, 188,
			189, 187, 184,
			187, 189, 191,
			190, 189, 188,
			201, 192, 193,
			185, 184, 191,
			195, 193, 194,
			198, 195, 194,
			191, 192, 197,
			214, 198, 197,
			194, 196, 196,
			202, 200, 201,
			202, 196, 202,
			204, 203, 201,
			207, 204, 205,
			207, 201, 206,
			208, 207, 208,
			209, 204, 210,
			203, 209, 153,
			200, 203, 205,
			188, 186, 172,
			173, 211, 199,
			200, 153, 140,
			197, 199, 212,
			214, 197, 212,
			217, 213, 214,
			213, 215, 216,
			218, 213, 195,
			198, 215, 219,
			215, 218, 195,
			219, 221, 221,
			219, 220, 222,
			220, 223, 223,
			220, 218, 224,
			223, 225, 223,
			216, 227, 227,
			216, 217, 229,
			230, 227, 230,
			232, 225, 230,
			233, 231, 229,
			235, 233, 147,
			229, 228, 167,
			235, 229, 167,
			168, 234, 235,
			234, 236, 237,
			238, 234, 231,
			233, 236, 231,
			239, 240, 232,
			231, 241, 242,
			241, 243, 241,
			240, 245, 243,
			247, 246, 245,
			249, 247, 248,
			250, 249, 240,
			275, 248, 250,
			253, 251, 254,
			251, 252, 256,
			260, 257, 256,
			273, 259, 257,
			254, 255, 247,
			254, 257, 260,
			261, 246, 261,
			263, 244, 261,
			264, 262, 260,
			259, 264, 264,
			267, 265, 264,
			259, 266, 265,
			267, 268, 267,
			266, 270, 269,
			268, 182, 182,
			268, 270, 271,
			270, 272, 273,
			272, 266, 269,
			185, 193, 265,
			269, 221, 262,
			265, 222, 263,
			262, 224, 244,
			263, 226, 232,
			242, 226, 247,
			249, 251, 228,
			217, 212,
		},
	},
	{
		.name = "YELLOW-GREEN-ORANGE_Cube.018",
		.colors = { game::YELLOW, game::GREEN, game::ORANGE },
		.vertices = { // 273 vertex
			VertexData{
				.position = { +2.98f, +2.95f, +1.13f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.95f, +2.98f, +1.13f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.97f, +2.94f, +1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.96f, +2.94f, +1.06f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.94f, +2.97f, +1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.87f, +2.99f, +1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.87f, +2.98f, +1.05f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.91f, +2.99f, +1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.94f, +2.96f, +1.06f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.13f, +2.98f, +1.05f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.13f, +2.99f, +1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.09f, +2.97f, +1.06f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.05f, +2.98f, +1.13f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.04f, +2.94f, +1.06f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.09f, +2.99f, +1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.09f, +2.99f, +1.13f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.05f, +2.98f, +2.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.09f, +2.99f, +2.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.06f, +2.97f, +2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.13f, +2.98f, +2.95f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.87f, +2.99f, +2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.91f, +2.97f, +2.94f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.91f, +2.99f, +2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.87f, +3.00f, +2.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.87f, +2.95f, +2.98f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.91f, +2.99f, +2.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.91f, +2.99f, +1.13f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.87f, +3.00f, +1.13f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.13f, +3.00f, +1.13f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.13f, +3.00f, +2.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.13f, +2.99f, +2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.09f, +2.99f, +2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.13f, +2.95f, +2.98f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.01f, +2.87f, +2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.87f, +2.98f, +2.95f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.97f, +2.94f, +2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.99f, +2.91f, +1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.13f, +2.95f, +1.02f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +1.02f, +2.95f, +2.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.94f, +2.97f, +2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { +2.94f, +1.03f, +1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, +1.06f, +1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, +1.06f, +1.04f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, +1.02f, +1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, +1.05f, +1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, +1.02f, +2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +1.09f, +1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +3.00f, +1.13f, +1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +1.09f, +1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, +1.06f, +2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +3.00f, +1.13f, +2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +1.09f, +2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.96f, +2.94f, +2.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +3.00f, +2.87f, +1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +1.13f, +1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +2.91f, +1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +3.00f, +2.87f, +2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +2.91f, +2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +2.87f, +1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +2.87f, +2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +2.91f, +2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, +2.94f, +2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, +2.95f, +2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, +2.98f, +1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, +2.95f, +1.13f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, +2.98f, +2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, +2.91f, +1.06f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +2.91f, +1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, +2.97f, +1.09f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, +2.91f, +1.03f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, +2.94f, +1.04f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, +2.87f, +1.05f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, +2.87f, +1.02f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.95f, +1.13f, +2.98f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, +1.06f, +2.96f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, +1.09f, +2.99f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, +1.09f, +2.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +1.13f, +2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, +2.91f, +2.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, +2.94f, +2.96f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.98f, +1.13f, +2.95f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, +2.99f, +2.91f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.99f, +1.09f, +2.87f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, +1.03f, +1.06f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.96f, +1.06f, +1.06f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, +2.91f, +1.01f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.94f, +1.09f, +2.97f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.91f, +2.97f, +2.94f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +2.97f, +1.09f, +1.06f },
				.color = colors.at(game::GREEN)
			},
			VertexData{
				.position = { +1.09f, +1.09f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.09f, +1.13f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.13f, +1.09f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.04f, +1.06f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.13f, +1.05f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.09f, +1.06f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.87f, +2.87f, +1.00f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.13f, +1.02f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.87f, +1.09f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.91f, +1.13f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.91f, +1.06f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.94f, +1.09f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.95f, +1.13f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.97f, +1.09f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.87f, +1.13f, +3.00f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.91f, +2.87f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.91f, +2.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.87f, +2.87f, +3.00f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.94f, +2.91f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.13f, +2.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.95f, +2.87f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.97f, +2.91f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.98f, +2.87f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.98f, +1.13f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.94f, +2.96f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.91f, +2.97f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.94f, +2.94f, +2.96f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.87f, +2.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.94f, +2.97f, +2.91f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.13f, +2.95f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.91f, +2.94f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.87f, +2.95f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.06f, +2.91f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.09f, +2.97f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.13f, +2.87f, +3.00f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.09f, +2.94f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.09f, +2.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.09f, +2.87f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.06f, +2.94f, +2.96f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.03f, +2.91f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.05f, +2.87f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.87f, +2.98f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.05f, +1.13f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.87f, +1.02f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +2.99f, +1.13f, +2.91f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.01f, +2.87f, +2.91f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { +1.09f, +1.01f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +1.03f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +1.00f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +1.00f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +1.01f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +1.01f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +1.01f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +1.00f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +1.01f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +1.01f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +1.01f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +1.01f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +1.01f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +1.02f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +1.02f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +1.03f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +1.05f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +1.09f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +1.06f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +1.13f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +1.13f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +1.06f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.15f, +0.45f, -0.88f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +1.13f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +1.09f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +1.09f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, +1.09f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +1.04f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +1.09f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +1.03f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, +1.13f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +1.06f, +1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.96f, +1.06f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, +1.06f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, +1.02f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, +1.02f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +1.03f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.97f, +1.06f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +1.04f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.98f, +1.05f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +2.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +2.94f, +1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +2.94f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +2.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.95f, +2.87f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +2.97f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +2.87f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.98f, +1.13f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +2.96f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +2.95f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +2.99f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +2.99f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.99f, +2.91f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +2.94f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +2.99f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +2.95f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +2.87f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +2.87f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +2.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +2.91f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, +2.91f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +2.96f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +2.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +1.01f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, +2.87f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +2.94f, +1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.04f, +2.94f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, +2.94f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +2.97f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +2.99f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, +2.95f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +2.99f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +2.91f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, +2.87f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, +2.94f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +2.99f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, +2.95f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +2.91f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, +2.87f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +2.91f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +1.13f, +3.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, +1.13f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +2.87f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.00f, +1.13f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +1.09f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +1.13f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +1.09f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +1.13f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +1.09f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, +1.06f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, +1.05f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, +1.02f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, +1.05f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, +1.02f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, +1.06f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.04f, +1.06f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, +1.09f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +1.03f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, +2.87f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +1.09f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +1.09f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +1.06f, +1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, +1.13f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, +1.13f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +1.13f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +1.09f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +1.04f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +1.05f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +1.04f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +1.03f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +1.01f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, +1.09f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +1.05f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +1.06f, +2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.04f, +1.06f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, +1.13f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, +1.13f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +1.09f, +2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.09f, +1.09f, +2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.13f, +1.02f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +1.05f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +1.03f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +1.02f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.87f, +1.09f, +2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.96f, +1.06f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.91f, +1.01f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +1.09f, +2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.99f, +1.09f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.94f, +1.06f, +2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +2.94f, +2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.02f, +2.87f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.04f, +2.94f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.05f, +2.87f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.06f, +2.96f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +2.91f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.01f, +2.87f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +1.03f, +2.91f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +2.99f, +1.09f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},

		},

		.indices = { // 1284 values
			0, 1, 2, 1,
			3, 2, 4,
			5, 3, 6,
			5, 7, 6,
			8, 9, 9,
			10, 11, 10,
			12, 11, 12,
			13, 14, 12,
			15, 16, 16,
			17, 18, 17,
			19, 18, 20,
			21, 22, 20,
			0, 23, 24,
			20, 25, 25,
			23, 26, 26,
			27, 28, 23,
			2, 27, 27,
			9, 28, 2,
			6, 27, 28,
			11, 29, 29,
			26, 28, 29,
			18, 30, 11,
			16, 29, 30,
			25, 26, 18,
			31, 30, 19,
			32, 31, 31,
			24, 25, 19,
			33, 34, 0,
			35, 1, 1,
			4, 3, 4,
			36, 5, 6,
			3, 5, 6,
			7, 8, 9,
			8, 10, 10,
			37, 12, 12,
			37, 13, 12,
			14, 15, 16,
			15, 17, 17,
			38, 19, 20,
			39, 21, 20,
			22, 0, 24,
			39, 20, 25,
			20, 23, 26,
			23, 27, 23,
			0, 2, 27,
			6, 9, 2,
			3, 6, 28,
			9, 11, 29,
			30, 26, 29,
			16, 18, 11,
			12, 16, 30,
			31, 25, 18,
			19, 31, 19,
			34, 32, 31,
			32, 24, 19,
			38, 33, 40,
			41, 42, 43,
			41, 44, 45,
			44, 46, 46,
			40, 47, 48,
			49, 50, 46,
			50, 49, 47,
			51, 50, 52,
			50, 51, 47,
			53, 54, 55,
			53, 56, 55,
			51, 54, 57,
			55, 58, 56,
			58, 55, 52,
			59, 60, 57,
			60, 59, 61,
			62, 57, 61,
			58, 63, 64,
			65, 61, 66,
			63, 58, 66,
			67, 68, 69,
			66, 56, 70,
			71, 69, 72,
			67, 71, 73,
			74, 75, 76,
			75, 77, 62,
			78, 60, 78,
			52, 60, 77,
			48, 52, 62,
			79, 80, 81,
			79, 65, 48,
			74, 82, 83,
			70, 69, 53,
			69, 56, 40,
			83, 53, 40,
			44, 41, 43,
			84, 41, 45,
			43, 44, 46,
			44, 40, 48,
			82, 49, 46,
			47, 50, 47,
			54, 51, 52,
			48, 50, 47,
			40, 53, 55,
			54, 53, 55,
			59, 51, 57,
			59, 55, 56,
			66, 58, 52,
			51, 59, 57,
			62, 60, 61,
			65, 62, 61,
			57, 58, 64,
			81, 65, 66,
			68, 63, 66,
			71, 67, 69,
			71, 66, 70,
			72, 71, 72,
			85, 67, 73,
			86, 74, 76,
			73, 75, 62,
			80, 78, 78,
			77, 52, 77,
			75, 48, 62,
			65, 79, 81,
			87, 79, 48,
			75, 74, 83,
			88, 70, 53,
			83, 69, 40,
			42, 83, 89,
			90, 91, 90,
			92, 93, 91,
			94, 95, 90,
			96, 94, 97,
			94, 96, 97,
			98, 99, 98,
			100, 101, 98,
			102, 103, 99,
			103, 104, 105,
			103, 106, 103,
			107, 106, 106,
			108, 105, 107,
			109, 106, 110,
			111, 107, 102,
			110, 107, 112,
			113, 111, 114,
			113, 115, 116,
			114, 117, 118,
			119, 120, 118,
			121, 122, 119,
			117, 120, 109,
			119, 108, 122,
			108, 119, 123,
			105, 108, 123,
			124, 125, 122,
			126, 123, 126,
			127, 124, 126,
			128, 129, 130,
			128, 121, 124,
			89, 91, 125,
			91, 95, 105,
			95, 104, 99,
			95, 94, 109,
			113, 116, 89,
			131, 90, 90,
			131, 92, 91,
			90, 94, 90,
			93, 96, 97,
			99, 94, 97,
			132, 98, 98,
			132, 100, 98,
			101, 102, 99,
			98, 103, 105,
			104, 103, 103,
			102, 107, 106,
			109, 108, 107,
			111, 109, 110,
			112, 111, 102,
			133, 110, 112,
			115, 113, 116,
			113, 114, 118,
			122, 119, 118,
			130, 121, 119,
			116, 117, 109,
			116, 119, 122,
			123, 108, 123,
			125, 105, 123,
			126, 124, 122,
			121, 126, 126,
			129, 127, 126,
			121, 128, 130,
			134, 128, 124,
			127, 89, 125,
			124, 91, 105,
			125, 95, 99,
			104, 95, 109,
			111, 113, 135,
			136, 137, 138,
			139, 135, 140,
			138, 135, 141,
			135, 137, 142,
			143, 140, 140,
			144, 142, 145,
			144, 141, 141,
			146, 145, 147,
			148, 145, 146,
			147, 145, 136,
			146, 137, 149,
			150, 146, 150,
			151, 152, 150,
			153, 147, 152,
			154, 153, 152,
			155, 156, 153,
			157, 147, 158,
			153, 154, 156,
			159, 154, 160,
			154, 159, 161,
			158, 160, 158,
			162, 163, 164,
			165, 161, 166,
			162, 165, 163,
			167, 157, 167,
			162, 168, 148,
			167, 169, 148,
			170, 144, 144,
			171, 142, 170,
			172, 171, 171,
			173, 142, 172,
			174, 171, 175,
			176, 177, 175,
			178, 179, 180,
			175, 181, 181,
			177, 182, 183,
			184, 180, 185,
			178, 184, 186,
			187, 178, 183,
			188, 189, 188,
			190, 189, 191,
			188, 192, 180,
			192, 188, 181,
			193, 192, 194,
			192, 193, 195,
			191, 194, 191,
			196, 197, 198,
			199, 195, 200,
			196, 199, 197,
			201, 190, 201,
			196, 202, 203,
			202, 200, 204,
			202, 205, 206,
			205, 207, 207,
			203, 208, 206,
			209, 210, 209,
			211, 210, 212,
			209, 213, 207,
			213, 209, 208,
			214, 213, 215,
			213, 214, 208,
			216, 217, 218,
			217, 216, 214,
			219, 220, 221,
			219, 222, 218,
			222, 219, 223,
			214, 220, 221,
			223, 220, 224,
			225, 221, 224,
			222, 226, 227,
			228, 224, 227,
			226, 229, 226,
			230, 229, 231,
			226, 222, 232,
			233, 230, 231,
			234, 232, 235,
			231, 218, 236,
			237, 235, 238,
			234, 237, 155,
			236, 239, 155,
			240, 238, 156,
			239, 241, 241,
			194, 193, 194,
			236, 195, 193,
			159, 241, 233,
			234, 240, 242,
			240, 151, 149,
			233, 242, 195,
			235, 198, 198,
			218, 216, 203,
			198, 216, 229,
			149, 136, 139,
			229, 136, 243,
			227, 139, 243,
			244, 245, 245,
			246, 228, 247,
			244, 248, 244,
			249, 246, 225,
			246, 250, 250,
			249, 251, 225,
			252, 223, 252,
			251, 253, 254,
			248, 255, 256,
			254, 255, 256,
			257, 258, 143,
			255, 138, 173,
			256, 143, 173,
			259, 260, 260,
			261, 257, 262,
			259, 174, 259,
			263, 261, 264,
			265, 266, 267,
			268, 265, 266,
			212, 215, 212,
			268, 269, 269,
			270, 211, 271,
			270, 268, 266,
			223, 252, 264,
			252, 253, 255,
			243, 138, 160,
			182, 177, 161,
			177, 176, 135,
			139, 136, 138,
			243, 139, 140,
			143, 138, 141,
			140, 135, 142,
			173, 143, 140,
			141, 144, 145,
			148, 144, 141,
			137, 146, 147,
			157, 148, 146,
			150, 147, 136,
			149, 146, 149,
			242, 150, 150,
			242, 151, 150,
			152, 153, 152,
			156, 154, 152,
			151, 155, 153,
			163, 157, 158,
			163, 153, 156,
			241, 159, 160,
			158, 154, 161,
			165, 158, 158,
			165, 162, 164,
			166, 165, 166,
			168, 162, 163,
			162, 167, 148,
			157, 167, 148,
			169, 170, 144,
			170, 171, 170,
			272, 172, 171,
			174, 173, 172,
			262, 174, 175,
			179, 176, 175,
			184, 178, 180,
			184, 175, 181,
			175, 177, 183,
			185, 184, 185,
			186, 178, 183,
			180, 188, 188,
			197, 190, 191,
			197, 188, 180,
			181, 192, 181,
			182, 193, 194,
			191, 192, 195,
			199, 191, 191,
			199, 196, 198,
			200, 199, 200,
			202, 196, 197,
			196, 201, 203,
			205, 202, 204,
			201, 202, 206,
			204, 205, 207,
			205, 203, 206,
			207, 209, 209,
			269, 211, 212,
			269, 209, 207,
			208, 213, 208,
			217, 214, 215,
			212, 213, 208,
			203, 216, 218,
			219, 217, 214,
			217, 219, 221,
			220, 219, 218,
			231, 222, 223,
			215, 214, 221,
			225, 223, 224,
			228, 225, 224,
			221, 222, 227,
			245, 228, 227,
			224, 226, 226,
			232, 230, 231,
			232, 226, 232,
			234, 233, 231,
			237, 234, 235,
			237, 231, 236,
			238, 237, 238,
			240, 234, 155,
			238, 236, 155,
			151, 240, 156,
			155, 239, 241,
			239, 194, 194,
			239, 236, 193,
			182, 159, 242,
			233, 240, 149,
			230, 233, 195,
			236, 235, 198,
			235, 218, 203,
			200, 198, 229,
			230, 149, 139,
			227, 229, 243,
			245, 227, 243,
			248, 244, 245,
			244, 246, 247,
			249, 244, 225,
			228, 246, 250,
			246, 249, 225,
			250, 252, 252,
			250, 251, 254,
			247, 248, 256,
			258, 254, 256,
			260, 257, 143,
			256, 255, 173,
			260, 256, 173,
			174, 259, 260,
			259, 261, 262,
			263, 259, 264,
			267, 265, 267,
			271, 268, 266,
			265, 212, 212,
			265, 268, 269,
			268, 270, 266,
			215, 223, 264,
			266, 252, 255,
			248, 243, 160,
			159, 182, 161,
			160, 177,
		},
	},
	{
		.name = "WHITE-BLUE_Cube.019",
		.colors = { game::BLUE, game::WHITE },
		.vertices = { // 258 vertex
			VertexData{
				.position = { -2.91f, -2.99f, +0.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.94f, -2.97f, +0.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.13f, -3.00f, +0.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.87f, -3.00f, -0.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.87f, -2.99f, +0.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.13f, -2.99f, +0.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.09f, -2.99f, -0.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.13f, -3.00f, -0.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.09f, -2.99f, +0.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.09f, -2.99f, -0.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.13f, -2.99f, -0.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.87f, -2.99f, -0.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.13f, -2.98f, -0.95f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.91f, -2.99f, -0.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.87f, -2.98f, -0.95f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.91f, -2.97f, -0.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.04f, -2.94f, -0.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.05f, -2.98f, -0.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.05f, -2.98f, +0.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.06f, -2.97f, +0.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.03f, -2.94f, +0.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.06f, -2.96f, +0.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.02f, -2.95f, +0.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.98f, -1.13f, -0.95f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.87f, -2.95f, -0.98f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.97f, -2.94f, -0.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.94f, -2.96f, +0.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.98f, -2.95f, -0.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.91f, -2.97f, +0.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.91f, -2.99f, +0.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.13f, -2.95f, +0.98f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.09f, -2.97f, +0.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.04f, -2.94f, +0.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.09f, -2.99f, +0.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.01f, -2.91f, +0.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { +0.00f, +0.00f, +0.00f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.01f, -2.91f, -0.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.96f, -2.94f, -0.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.94f, -2.94f, +0.96f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.06f, -2.94f, +0.96f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.94f, -1.03f, -0.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, -1.06f, -0.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, -1.06f, -0.96f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -1.09f, -0.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -3.00f, -1.13f, -0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -1.09f, -0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, -1.06f, +0.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -3.00f, -1.13f, +0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -1.09f, +0.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.87f, -2.87f, +1.00f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -3.00f, -2.87f, -0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -1.13f, -0.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -3.00f, -2.87f, +0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -2.91f, -0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -2.87f, +0.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -2.91f, +0.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -2.87f, -0.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -2.91f, +0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, -2.94f, +0.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, -2.95f, +0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.95f, -2.98f, -0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, -2.95f, -0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.95f, -2.98f, +0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, -2.94f, -0.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.96f, -2.94f, -0.94f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, -2.91f, -0.94f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, -2.97f, -0.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, -1.13f, -0.95f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -2.91f, -0.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, -2.91f, -0.97f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, -2.94f, -0.96f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, -2.87f, -0.95f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.95f, -2.87f, -0.98f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.91f, -2.99f, -0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.91f, -2.99f, +0.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, -2.91f, +0.94f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, -2.87f, +0.95f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, -2.91f, +0.97f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.96f, -1.06f, +0.94f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, -1.04f, +0.94f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -1.09f, +0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, -1.05f, -0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.91f, -2.91f, -0.99f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.91f, -2.97f, +0.94f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, -1.13f, +0.95f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.91f, -2.97f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -2.95f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -2.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -2.94f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -2.99f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -2.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -2.87f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -2.94f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.00f, +0.00f, +0.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -2.87f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -2.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -2.91f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, -2.91f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -2.96f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -2.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -2.97f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, -2.87f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -2.94f, -0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.04f, -2.94f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, -2.94f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -2.97f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, -2.98f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, -2.95f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, -2.98f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -2.91f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, -2.87f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -2.91f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, -2.94f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, -2.87f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -2.91f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.04f, -1.06f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, -1.13f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -2.87f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, -1.13f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -1.09f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -1.09f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -1.13f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -1.13f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -1.09f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, -1.06f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, -1.05f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, -1.02f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, -1.05f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, -1.02f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, -1.06f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.04f, -1.06f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, -1.09f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -1.03f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -1.01f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -1.09f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -1.09f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -1.06f, -0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, -1.13f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, -1.13f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -1.09f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -1.06f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -1.09f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -1.03f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -1.13f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, -2.87f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -1.04f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -1.05f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -1.01f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -1.02f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -1.02f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -1.01f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -1.03f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -1.06f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, -1.02f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -1.05f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -1.13f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -1.13f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -1.09f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -1.09f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, -1.09f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -1.04f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -1.09f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -2.99f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, -1.13f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -1.06f, -0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.96f, -1.06f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, -1.06f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -1.01f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.98f, -1.05f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -1.01f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.99f, -1.09f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, -1.02f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -1.01f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -1.03f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, -1.06f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -1.02f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.98f, -1.05f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -2.94f, -0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -2.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -2.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, -2.87f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -2.96f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.98f, -1.13f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.99f, -2.91f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -2.95f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -2.95f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -2.97f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -2.94f, +0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.96f, -2.94f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, -2.91f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.98f, -2.87f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, -2.87f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -2.91f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -2.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -2.87f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -2.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -2.94f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -1.13f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -2.98f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -2.95f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -2.97f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -2.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -2.87f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -2.94f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -2.98f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -2.99f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -2.91f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.04f, -2.94f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -2.94f, +0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, -2.87f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -2.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, -2.91f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -2.87f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -2.87f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -1.13f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -1.13f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -1.09f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -1.09f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -1.09f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, -1.13f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, -1.09f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, -1.13f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, -2.87f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -1.04f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -1.06f, +0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -1.03f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -1.01f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -1.09f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -1.03f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -1.01f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -1.00f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -1.05f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -1.01f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -1.01f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -1.00f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -1.00f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -1.00f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -1.01f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -1.01f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -1.05f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -1.06f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -1.09f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -1.03f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -1.13f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -1.06f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -1.09f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -1.13f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -1.06f, +0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, -1.09f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, -1.13f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.98f, -1.13f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.96f, -1.06f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -1.04f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.99f, -1.09f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.99f, -1.13f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -1.02f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -2.91f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -2.91f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},

		},

		.indices = { // 1284 values
			0, 1, 2, 3,
			4, 0, 5,
			3, 0, 6,
			0, 2, 7,
			8, 5, 6,
			7, 5, 9,
			10, 6, 2,
			9, 6, 11,
			12, 9, 13,
			11, 9, 1,
			13, 2, 14,
			15, 13, 12,
			16, 17, 12,
			18, 10, 10,
			19, 7, 18,
			20, 19, 19,
			21, 7, 20,
			22, 19, 14,
			23, 24, 25,
			14, 1, 4,
			25, 1, 26,
			27, 4, 26,
			28, 29, 8,
			30, 3, 21,
			31, 8, 21,
			32, 33, 34,
			32, 22, 30,
			26, 3, 0,
			4, 1, 3,
			26, 4, 5,
			8, 3, 6,
			5, 0, 7,
			21, 8, 6,
			10, 7, 9,
			12, 10, 2,
			13, 9, 11,
			35, 12, 13,
			15, 11, 1,
			14, 13, 14,
			24, 15, 12,
			35, 16, 12,
			17, 18, 10,
			18, 19, 18,
			36, 20, 19,
			22, 21, 20,
			34, 22, 14,
			37, 23, 25,
			37, 14, 4,
			27, 25, 26,
			29, 27, 26,
			38, 28, 8,
			31, 30, 21,
			33, 31, 21,
			22, 32, 34,
			39, 32, 30,
			38, 26, 40,
			41, 42, 43,
			40, 44, 45,
			46, 47, 43,
			47, 46, 44,
			48, 47, 49,
			47, 48, 44,
			50, 51, 52,
			51, 50, 48,
			53, 54, 55,
			53, 56, 52,
			56, 53, 49,
			54, 57, 55,
			57, 54, 58,
			59, 55, 58,
			56, 60, 61,
			62, 58, 61,
			60, 63, 60,
			64, 63, 65,
			60, 56, 66,
			67, 64, 65,
			68, 66, 69,
			65, 52, 70,
			71, 69, 72,
			68, 71, 69,
			50, 73, 40,
			73, 50, 74,
			75, 62, 59,
			75, 76, 59,
			77, 57, 78,
			45, 49, 45,
			79, 80, 78,
			57, 77, 40,
			81, 41, 43,
			81, 40, 45,
			80, 46, 43,
			44, 47, 44,
			51, 48, 49,
			45, 47, 44,
			40, 50, 52,
			53, 51, 48,
			51, 53, 55,
			54, 53, 52,
			65, 56, 49,
			48, 54, 55,
			59, 57, 58,
			62, 59, 58,
			55, 56, 61,
			74, 62, 61,
			58, 60, 60,
			66, 64, 65,
			66, 60, 66,
			68, 67, 65,
			71, 68, 69,
			71, 65, 70,
			72, 71, 72,
			82, 68, 69,
			52, 50, 40,
			42, 73, 74,
			83, 75, 59,
			62, 75, 59,
			76, 77, 78,
			84, 45, 45,
			84, 79, 78,
			49, 57, 85,
			86, 87, 85,
			88, 89, 87,
			90, 88, 87,
			91, 92, 88,
			93, 89, 94,
			88, 90, 92,
			95, 90, 96,
			90, 95, 97,
			94, 96, 94,
			98, 99, 100,
			101, 97, 102,
			98, 101, 99,
			103, 93, 103,
			98, 104, 105,
			104, 102, 106,
			104, 107, 108,
			107, 109, 109,
			105, 110, 111,
			112, 113, 109,
			113, 112, 110,
			114, 113, 115,
			113, 114, 110,
			116, 117, 117,
			118, 119, 119,
			114, 117, 120,
			119, 121, 118,
			121, 119, 115,
			122, 123, 120,
			123, 122, 124,
			125, 120, 124,
			121, 126, 127,
			128, 124, 127,
			126, 129, 126,
			130, 129, 131,
			126, 121, 132,
			133, 130, 131,
			134, 132, 135,
			131, 118, 136,
			137, 135, 138,
			134, 137, 139,
			136, 140, 139,
			141, 138, 142,
			139, 143, 143,
			140, 144, 145,
			146, 142, 147,
			141, 146, 148,
			133, 147, 148,
			145, 149, 133,
			134, 141, 149,
			150, 151, 145,
			152, 150, 150,
			153, 151, 152,
			154, 150, 155,
			152, 156, 142,
			156, 152, 143,
			157, 156, 158,
			156, 157, 159,
			155, 158, 155,
			160, 161, 162,
			163, 159, 164,
			160, 163, 161,
			165, 154, 165,
			160, 166, 167,
			166, 168, 169,
			168, 170, 153,
			165, 167, 153,
			169, 171, 171,
			172, 173, 169,
			174, 172, 172,
			175, 173, 174,
			176, 172, 91,
			177, 178, 91,
			179, 180, 92,
			178, 181, 181,
			158, 157, 178,
			159, 158, 157,
			95, 181, 182,
			183, 179, 184,
			179, 86, 177,
			162, 159, 185,
			186, 187, 186,
			188, 189, 190,
			188, 191, 192,
			191, 193, 193,
			194, 195, 194,
			188, 185, 195,
			196, 197, 194,
			198, 196, 198,
			187, 199, 200,
			198, 199, 201,
			196, 198, 201,
			202, 203, 200,
			204, 201, 205,
			206, 204, 207,
			208, 206, 202,
			206, 209, 209,
			208, 210, 202,
			211, 212, 211,
			210, 213, 203,
			212, 214, 214,
			215, 216, 212,
			217, 215, 215,
			218, 216, 217,
			219, 215, 220,
			221, 217, 211,
			220, 217, 125,
			220, 123, 213,
			123, 220, 213,
			111, 115, 222,
			223, 221, 125,
			224, 222, 225,
			223, 224, 226,
			224, 128, 227,
			225, 228, 229,
			225, 226, 229,
			127, 230, 231,
			229, 232, 232,
			230, 233, 233,
			234, 235, 230,
			129, 234, 234,
			149, 235, 129,
			148, 234, 235,
			151, 236, 236,
			233, 235, 236,
			173, 237, 151,
			171, 236, 237,
			232, 233, 173,
			238, 237, 175,
			239, 238, 238,
			231, 232, 239,
			240, 231, 239,
			241, 242, 240,
			228, 231, 219,
			240, 218, 242,
			218, 240, 243,
			216, 218, 243,
			244, 245, 242,
			246, 243, 246,
			247, 244, 246,
			248, 249, 247,
			250, 251, 249,
			252, 250, 253,
			254, 176, 248,
			254, 252, 175,
			254, 255, 255,
			248, 241, 247,
			192, 193, 244,
			193, 195, 197,
			244, 195, 216,
			197, 214, 203,
			197, 196, 219,
			223, 227, 111,
			208, 256, 140,
			95, 144, 97,
			140, 136, 100,
			136, 135, 116,
			135, 118, 105,
			100, 116, 85,
			184, 86, 85,
			87, 88, 87,
			92, 90, 87,
			86, 91, 88,
			99, 93, 94,
			99, 88, 92,
			181, 95, 96,
			94, 90, 97,
			101, 94, 94,
			101, 98, 100,
			102, 101, 102,
			104, 98, 99,
			98, 103, 105,
			107, 104, 106,
			103, 104, 108,
			106, 107, 109,
			107, 105, 111,
			256, 112, 109,
			110, 113, 110,
			117, 114, 115,
			111, 113, 110,
			105, 116, 117,
			116, 118, 119,
			122, 114, 120,
			122, 119, 118,
			131, 121, 115,
			114, 122, 120,
			125, 123, 124,
			128, 125, 124,
			120, 121, 127,
			226, 128, 127,
			124, 126, 126,
			132, 130, 131,
			132, 126, 132,
			134, 133, 131,
			137, 134, 135,
			137, 131, 136,
			138, 137, 138,
			141, 134, 139,
			138, 136, 139,
			146, 141, 142,
			146, 139, 143,
			139, 140, 145,
			147, 146, 147,
			133, 141, 148,
			130, 133, 148,
			147, 145, 149,
			145, 150, 145,
			142, 152, 150,
			154, 153, 152,
			161, 154, 155,
			161, 152, 142,
			143, 156, 143,
			144, 157, 158,
			155, 156, 159,
			163, 155, 155,
			163, 160, 162,
			164, 163, 164,
			166, 160, 161,
			160, 165, 167,
			165, 166, 169,
			167, 168, 153,
			154, 165, 153,
			167, 169, 171,
			169, 172, 169,
			170, 174, 172,
			176, 175, 174,
			253, 176, 91,
			180, 177, 91,
			86, 179, 92,
			91, 178, 181,
			178, 158, 178,
			177, 159, 157,
			144, 95, 184,
			182, 179, 177,
			257, 162, 185,
			188, 186, 190,
			189, 188, 192,
			190, 191, 193,
			191, 194, 194,
			191, 188, 195,
			194, 196, 194,
			185, 198, 198,
			185, 187, 200,
			201, 198, 201,
			203, 196, 201,
			204, 202, 200,
			205, 204, 205,
			207, 206, 202,
			204, 206, 209,
			206, 208, 202,
			209, 211, 211,
			209, 210, 203,
			202, 212, 214,
			212, 215, 212,
			211, 217, 215,
			219, 218, 217,
			221, 219, 220,
			222, 221, 211,
			213, 220, 125,
			222, 220, 213,
			115, 123, 213,
			210, 111, 222,
			224, 223, 125,
			128, 224, 226,
			225, 224, 227,
			223, 225, 229,
			228, 225, 229,
			226, 127, 231,
			228, 229, 232,
			229, 230, 233,
			230, 234, 230,
			127, 129, 234,
			148, 149, 129,
			130, 148, 235,
			149, 151, 236,
			237, 233, 236,
			171, 173, 151,
			153, 171, 237,
			238, 232, 173,
			175, 238, 175,
			255, 239, 238,
			239, 231, 239,
			242, 240, 239,
			255, 241, 240,
			227, 228, 219,
			227, 240, 242,
			243, 218, 243,
			245, 216, 243,
			246, 244, 242,
			241, 246, 246,
			249, 247, 246,
			241, 248, 247,
			249, 250, 249,
			248, 252, 253,
			252, 254, 175,
			176, 254, 255,
			254, 248, 247,
			251, 192, 244,
			247, 193, 197,
			245, 244, 216,
			245, 197, 203,
			214, 197, 219,
			221, 223, 111,
			210, 208, 140,
			96, 95, 97,
			96, 140, 100,
			97, 136, 116,
			100, 135, 105,
			102, 100,
		},
	},
	{
		.name = "WHITE-BLUE-RED_Cube.020",
		.colors = { game::RED, game::BLUE, game::WHITE },
		.vertices = { // 273 vertex
			VertexData{
				.position = { -2.91f, -2.99f, -1.13f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.94f, -2.97f, -1.09f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.13f, -3.00f, -1.13f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.87f, -3.00f, -2.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.87f, -2.99f, -1.09f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.09f, -2.99f, -1.13f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.09f, -2.99f, -2.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.13f, -3.00f, -2.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.13f, -2.99f, -1.09f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.09f, -2.99f, -2.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.13f, -2.99f, -2.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.87f, -2.99f, -2.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.13f, -2.98f, -2.95f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.91f, -2.99f, -2.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.87f, -2.98f, -2.95f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.91f, -2.97f, -2.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.04f, -2.94f, -2.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.05f, -2.98f, -2.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.05f, -2.98f, -1.13f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.06f, -2.97f, -1.09f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.03f, -2.94f, -1.09f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.06f, -2.96f, -1.06f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.02f, -2.95f, -1.13f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.98f, -1.13f, -2.95f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.87f, -2.95f, -2.98f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.97f, -2.94f, -2.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.94f, -2.96f, -1.06f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.98f, -2.95f, -2.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.91f, -2.97f, -1.06f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.91f, -2.99f, -1.09f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.13f, -2.95f, -1.02f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.09f, -2.97f, -1.06f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.04f, -2.94f, -1.06f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.09f, -2.99f, -1.09f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.01f, -2.91f, -1.13f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.46f, -0.16f, +0.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.01f, -2.91f, -2.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.96f, -2.94f, -2.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.94f, -2.94f, -1.04f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.06f, -2.94f, -1.04f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.94f, -1.03f, -2.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, -1.06f, -2.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, -1.06f, -2.96f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -1.09f, -2.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -3.00f, -1.13f, -2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -1.09f, -2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, -1.06f, -1.09f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -3.00f, -1.13f, -1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -1.09f, -1.09f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.87f, -2.87f, -1.00f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -3.00f, -2.87f, -2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -1.13f, -2.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -2.91f, -2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -2.87f, -1.09f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -2.91f, -1.09f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -2.87f, -2.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -3.00f, -2.87f, -1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -2.91f, -1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, -2.94f, -1.09f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, -2.95f, -1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.95f, -2.98f, -2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, -2.95f, -2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.95f, -2.98f, -1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, -2.94f, -2.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.96f, -2.94f, -2.94f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, -2.91f, -2.94f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, -2.97f, -2.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, -1.13f, -2.95f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -2.91f, -2.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, -2.91f, -2.97f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, -2.94f, -2.96f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, -2.87f, -2.95f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.95f, -2.87f, -2.98f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.91f, -2.99f, -2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.91f, -2.99f, -1.09f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, -2.91f, -1.06f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, -2.87f, -1.05f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, -2.91f, -1.03f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.96f, -1.06f, -1.06f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, -1.04f, -1.06f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -1.09f, -1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, -1.05f, -2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.91f, -2.91f, -2.99f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.91f, -2.97f, -1.06f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, -1.13f, -1.05f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.91f, -2.97f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.13f, -2.95f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.87f, -2.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.09f, -2.94f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.87f, -2.99f, -2.91f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.13f, -2.87f, -3.00f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.91f, -2.87f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.91f, -2.94f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -0.46f, -0.16f, +0.87f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.09f, -2.87f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.09f, -2.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.06f, -2.91f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.03f, -2.91f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.06f, -2.96f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.13f, -2.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.09f, -2.97f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.05f, -2.87f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.06f, -2.94f, -2.96f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.04f, -2.94f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.13f, -1.09f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.06f, -1.06f, -2.96f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.09f, -1.06f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.09f, -1.09f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.05f, -1.13f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.09f, -1.03f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.09f, -1.13f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.02f, -2.87f, -2.95f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.91f, -1.13f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.91f, -1.06f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.87f, -1.13f, -3.00f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.91f, -1.09f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.94f, -1.09f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.97f, -1.09f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.94f, -1.04f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.87f, -1.09f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.91f, -2.99f, -2.87f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.95f, -1.13f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.94f, -1.06f, -2.96f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.94f, -2.94f, -2.96f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.87f, -2.87f, -3.00f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.91f, -2.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.95f, -2.87f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.94f, -2.96f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.98f, -1.13f, -2.95f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.99f, -2.91f, -2.91f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.87f, -2.95f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.03f, -2.94f, -2.91f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.13f, -1.05f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.97f, -1.06f, -2.91f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.94f, -2.91f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.04f, -2.94f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -2.96f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, -2.94f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -2.97f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -2.94f, -2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, -2.98f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, -2.95f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, -2.98f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -2.91f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, -2.87f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -2.91f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, -2.94f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, -2.87f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -2.91f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.04f, -1.06f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, -1.13f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -2.87f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, -1.13f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -1.09f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -1.09f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -1.13f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -1.13f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -1.09f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, -1.06f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, -1.05f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, -1.02f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, -1.05f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, -1.02f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, -1.06f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.04f, -1.06f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, -1.09f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -1.03f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -1.01f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -1.09f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -1.09f, -2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -1.06f, -2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, -1.13f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, -1.13f, -2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -1.04f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -1.05f, -2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -1.03f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -1.01f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -1.09f, -2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -1.02f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -1.02f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -1.01f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -1.03f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -1.06f, -2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, -1.02f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -1.05f, -2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -1.09f, -2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.96f, -1.06f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -1.04f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, -1.06f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -1.01f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.98f, -1.05f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -1.01f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.99f, -1.09f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, -1.02f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -1.01f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -1.03f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, -1.06f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -1.02f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.98f, -1.05f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -2.95f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -2.97f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -2.94f, -1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.96f, -2.94f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, -2.91f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.98f, -2.87f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, -2.87f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -2.91f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -2.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -2.87f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -2.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -2.94f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -1.13f, -3.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -2.98f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -2.95f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -2.97f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -2.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -2.87f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -2.94f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -2.98f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -2.99f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -2.91f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.04f, -2.94f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -2.94f, -1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, -2.87f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -2.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, -2.91f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -2.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -2.87f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -1.13f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -1.13f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -1.09f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -1.09f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -1.09f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, -1.13f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, -1.09f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, -1.13f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, -2.87f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -1.04f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -1.06f, -1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -1.03f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -1.01f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -1.09f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -1.03f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -1.01f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -1.00f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -1.05f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -1.01f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -1.01f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -1.00f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -1.00f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -1.00f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -1.01f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -1.01f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -1.05f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -1.06f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -1.09f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -1.03f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -1.13f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -1.06f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -1.09f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -1.13f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -1.06f, -1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, -1.09f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, -1.13f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.98f, -1.13f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.96f, -1.06f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -1.04f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.99f, -1.09f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.99f, -1.13f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -1.02f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -2.91f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -2.97f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, -2.91f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},

		},

		.indices = { // 1284 values
			0, 1, 2, 3,
			4, 0, 0,
			5, 3, 6,
			0, 2, 7,
			5, 8, 6,
			7, 8, 9,
			10, 6, 2,
			9, 6, 11,
			12, 9, 13,
			11, 9, 1,
			13, 2, 14,
			15, 13, 12,
			16, 17, 12,
			18, 10, 10,
			19, 7, 18,
			20, 19, 19,
			21, 7, 20,
			22, 19, 14,
			23, 24, 25,
			14, 1, 4,
			25, 1, 26,
			27, 4, 26,
			28, 29, 5,
			30, 3, 21,
			31, 5, 21,
			32, 33, 34,
			32, 22, 30,
			26, 3, 0,
			4, 1, 3,
			26, 4, 0,
			8, 5, 6,
			8, 0, 7,
			21, 5, 6,
			10, 7, 9,
			12, 10, 2,
			13, 9, 11,
			35, 12, 13,
			15, 11, 1,
			14, 13, 14,
			24, 15, 12,
			35, 16, 12,
			17, 18, 10,
			18, 19, 18,
			36, 20, 19,
			22, 21, 20,
			34, 22, 14,
			37, 23, 25,
			37, 14, 4,
			27, 25, 26,
			29, 27, 26,
			38, 28, 5,
			31, 30, 21,
			33, 31, 21,
			22, 32, 34,
			39, 32, 30,
			38, 26, 40,
			41, 42, 43,
			40, 44, 45,
			46, 47, 43,
			47, 46, 44,
			48, 47, 49,
			47, 48, 44,
			50, 51, 50,
			52, 51, 48,
			52, 53, 54,
			52, 55, 56,
			55, 52, 49,
			53, 57, 54,
			57, 53, 58,
			59, 54, 58,
			55, 60, 61,
			62, 58, 63,
			58, 60, 60,
			64, 63, 65,
			60, 55, 66,
			67, 64, 65,
			68, 66, 69,
			65, 56, 70,
			71, 69, 72,
			68, 71, 73,
			56, 50, 40,
			73, 50, 74,
			75, 62, 59,
			75, 76, 59,
			77, 57, 78,
			45, 49, 45,
			79, 80, 78,
			57, 77, 40,
			81, 41, 43,
			81, 40, 45,
			80, 46, 43,
			44, 47, 44,
			51, 48, 49,
			45, 47, 44,
			40, 50, 50,
			56, 52, 48,
			51, 52, 54,
			53, 52, 56,
			65, 55, 49,
			48, 53, 54,
			59, 57, 58,
			62, 59, 58,
			54, 55, 61,
			74, 62, 63,
			61, 58, 60,
			66, 64, 65,
			66, 60, 66,
			68, 67, 65,
			71, 68, 69,
			71, 65, 70,
			72, 71, 72,
			82, 68, 73,
			69, 56, 40,
			42, 73, 74,
			83, 75, 59,
			62, 75, 59,
			76, 77, 78,
			84, 45, 45,
			84, 79, 78,
			49, 57, 85,
			86, 87, 85,
			88, 89, 87,
			90, 88, 87,
			91, 92, 88,
			93, 89, 94,
			88, 90, 92,
			95, 90, 96,
			90, 95, 97,
			94, 96, 94,
			98, 99, 100,
			101, 97, 102,
			98, 101, 99,
			103, 93, 104,
			105, 106, 104,
			107, 108, 109,
			104, 110, 110,
			106, 111, 112,
			113, 114, 109,
			114, 113, 110,
			115, 114, 116,
			114, 115, 117,
			112, 116, 112,
			118, 119, 120,
			121, 117, 122,
			118, 121, 91,
			123, 124, 91,
			125, 126, 92,
			124, 127, 127,
			116, 115, 124,
			117, 116, 115,
			95, 127, 128,
			129, 125, 130,
			125, 86, 123,
			120, 117, 106,
			95, 111, 97,
			106, 105, 85,
			130, 86, 85,
			87, 88, 87,
			92, 90, 87,
			86, 91, 88,
			99, 93, 94,
			99, 88, 92,
			127, 95, 96,
			94, 90, 97,
			101, 94, 94,
			101, 98, 100,
			102, 101, 102,
			131, 98, 99,
			98, 103, 104,
			108, 105, 104,
			132, 107, 109,
			132, 104, 110,
			104, 106, 112,
			119, 113, 109,
			110, 114, 110,
			111, 115, 116,
			112, 114, 117,
			121, 112, 112,
			121, 118, 120,
			122, 121, 122,
			133, 118, 91,
			126, 123, 91,
			86, 125, 92,
			91, 124, 127,
			124, 116, 124,
			123, 117, 115,
			111, 95, 130,
			128, 125, 123,
			134, 120, 106,
			96, 95, 97,
			96, 106, 135,
			136, 137, 138,
			137, 139, 140,
			137, 141, 142,
			141, 143, 143,
			138, 144, 145,
			146, 147, 143,
			147, 146, 144,
			148, 147, 149,
			147, 148, 144,
			150, 151, 151,
			152, 153, 153,
			148, 151, 154,
			153, 155, 152,
			155, 153, 149,
			156, 157, 154,
			157, 156, 158,
			159, 154, 158,
			155, 160, 161,
			162, 158, 161,
			160, 163, 160,
			164, 163, 165,
			160, 155, 166,
			167, 164, 165,
			168, 166, 169,
			165, 152, 170,
			171, 169, 172,
			168, 171, 173,
			174, 175, 176,
			177, 174, 178,
			167, 176, 178,
			173, 179, 167,
			168, 177, 179,
			180, 181, 173,
			182, 180, 180,
			183, 181, 182,
			184, 180, 185,
			186, 184, 186,
			187, 188, 189,
			188, 190, 191,
			190, 192, 183,
			186, 189, 183,
			191, 193, 193,
			194, 195, 191,
			196, 194, 194,
			197, 195, 196,
			198, 194, 199,
			200, 201, 200,
			202, 203, 204,
			202, 205, 206,
			205, 207, 207,
			208, 209, 208,
			202, 199, 209,
			210, 211, 208,
			212, 210, 212,
			201, 213, 214,
			212, 213, 215,
			210, 212, 215,
			216, 217, 214,
			218, 215, 219,
			220, 218, 221,
			222, 220, 216,
			220, 223, 223,
			222, 224, 216,
			225, 226, 225,
			224, 227, 217,
			226, 228, 228,
			229, 230, 229,
			225, 231, 229,
			232, 230, 231,
			233, 229, 234,
			235, 231, 231,
			227, 234, 159,
			234, 157, 234,
			149, 157, 227,
			145, 149, 236,
			237, 235, 159,
			238, 236, 239,
			237, 238, 240,
			238, 162, 241,
			239, 242, 243,
			239, 240, 243,
			161, 244, 245,
			243, 246, 246,
			244, 247, 248,
			244, 249, 244,
			163, 249, 249,
			179, 248, 163,
			178, 249, 250,
			179, 181, 250,
			247, 248, 250,
			195, 251, 181,
			193, 250, 251,
			246, 247, 195,
			252, 251, 197,
			253, 252, 252,
			245, 246, 253,
			254, 245, 253,
			255, 256, 254,
			242, 245, 233,
			254, 232, 256,
			232, 254, 257,
			230, 232, 257,
			258, 259, 256,
			260, 257, 260,
			261, 258, 260,
			262, 263, 261,
			264, 265, 263,
			266, 264, 267,
			268, 198, 262,
			268, 266, 197,
			268, 269, 269,
			262, 255, 261,
			206, 207, 258,
			207, 209, 211,
			258, 209, 230,
			211, 228, 217,
			211, 210, 233,
			237, 241, 145,
			222, 270, 271,
			170, 169, 150,
			169, 152, 138,
			271, 150, 138,
			141, 137, 140,
			135, 137, 142,
			140, 141, 143,
			141, 138, 145,
			270, 146, 143,
			144, 147, 144,
			151, 148, 149,
			145, 147, 144,
			138, 150, 151,
			150, 152, 153,
			156, 148, 154,
			156, 153, 152,
			165, 155, 149,
			148, 156, 154,
			159, 157, 158,
			162, 159, 158,
			154, 155, 161,
			240, 162, 161,
			158, 160, 160,
			166, 164, 165,
			166, 160, 166,
			168, 167, 165,
			171, 168, 169,
			171, 165, 170,
			172, 171, 172,
			177, 168, 173,
			176, 174, 176,
			167, 177, 178,
			164, 167, 178,
			176, 173, 179,
			173, 180, 173,
			175, 182, 180,
			184, 183, 182,
			185, 184, 185,
			187, 186, 189,
			186, 188, 191,
			189, 190, 183,
			184, 186, 183,
			189, 191, 193,
			191, 194, 191,
			192, 196, 194,
			198, 197, 196,
			267, 198, 199,
			202, 200, 204,
			203, 202, 206,
			204, 205, 207,
			205, 208, 208,
			205, 202, 209,
			208, 210, 208,
			199, 212, 212,
			199, 201, 214,
			215, 212, 215,
			217, 210, 215,
			218, 216, 214,
			219, 218, 219,
			221, 220, 216,
			218, 220, 223,
			220, 222, 216,
			223, 225, 225,
			223, 224, 217,
			216, 226, 228,
			226, 229, 229,
			226, 225, 229,
			233, 232, 231,
			235, 233, 234,
			236, 235, 231,
			225, 227, 159,
			236, 234, 234,
			227, 149, 227,
			224, 145, 236,
			238, 237, 159,
			162, 238, 240,
			239, 238, 241,
			237, 239, 243,
			242, 239, 243,
			240, 161, 245,
			242, 243, 246,
			243, 244, 248,
			247, 244, 244,
			161, 163, 249,
			178, 179, 163,
			164, 178, 250,
			248, 179, 250,
			251, 247, 250,
			193, 195, 181,
			183, 193, 251,
			252, 246, 195,
			197, 252, 197,
			269, 253, 252,
			253, 245, 253,
			256, 254, 253,
			269, 255, 254,
			241, 242, 233,
			241, 254, 256,
			257, 232, 257,
			259, 230, 257,
			260, 258, 256,
			255, 260, 260,
			263, 261, 260,
			255, 262, 261,
			263, 264, 263,
			262, 266, 267,
			266, 268, 197,
			198, 268, 269,
			268, 262, 261,
			265, 206, 258,
			261, 207, 211,
			259, 258, 230,
			259, 211, 217,
			228, 211, 233,
			235, 237, 145,
			224, 222, 271,
			272, 170, 150,
			271, 169, 138,
			139, 271,
		},
	},
	{
		.name = "WHITE-BLUE-ORANGE_Cube.021",
		.colors = { game::BLUE, game::ORANGE, game::WHITE },
		.vertices = { // 273 vertex
			VertexData{
				.position = { -2.91f, -2.99f, +2.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.94f, -2.97f, +2.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.13f, -3.00f, +2.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.87f, -3.00f, +1.13f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.87f, -2.99f, +2.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.13f, -2.99f, +2.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.09f, -2.99f, +1.13f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.13f, -3.00f, +1.13f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.09f, -2.99f, +2.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.13f, -2.99f, +1.09f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.09f, -2.99f, +1.09f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.87f, -2.99f, +1.09f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.13f, -2.98f, +1.05f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.91f, -2.99f, +1.09f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.87f, -2.98f, +1.05f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.91f, -2.97f, +1.06f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.04f, -2.94f, +1.06f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.05f, -2.98f, +1.13f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.05f, -2.98f, +2.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.06f, -2.97f, +2.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.03f, -2.94f, +2.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.06f, -2.96f, +2.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.02f, -2.95f, +2.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.98f, -1.13f, +1.05f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.87f, -2.95f, +1.02f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.97f, -2.94f, +1.09f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.94f, -2.96f, +2.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.98f, -2.95f, +1.13f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.91f, -2.97f, +2.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.91f, -2.99f, +2.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.13f, -2.95f, +2.98f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.09f, -2.97f, +2.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.04f, -2.94f, +2.94f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.09f, -2.99f, +2.91f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.01f, -2.91f, +2.87f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -0.15f, +0.45f, -0.88f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.01f, -2.91f, +1.09f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.96f, -2.94f, +1.06f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.94f, -2.94f, +2.96f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -1.06f, -2.94f, +2.96f },
				.color = colors.at(game::WHITE)
			},
			VertexData{
				.position = { -2.94f, -1.03f, +1.09f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, -1.06f, +1.09f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, -1.06f, +1.04f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -1.09f, +1.09f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -3.00f, -1.13f, +1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -1.09f, +1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, -1.06f, +2.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -3.00f, -1.13f, +2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -1.09f, +2.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.87f, -2.87f, +3.00f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -3.00f, -2.87f, +1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -1.13f, +1.09f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -2.91f, +1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -2.87f, +2.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -2.91f, +2.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -2.87f, +1.09f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -3.00f, -2.87f, +2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -2.91f, +2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, -2.94f, +2.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, -2.95f, +2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.95f, -2.98f, +1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, -2.95f, +1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.95f, -2.98f, +2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, -2.94f, +1.09f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.96f, -2.94f, +1.06f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, -2.91f, +1.06f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, -2.97f, +1.09f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, -1.13f, +1.05f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -2.91f, +1.09f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, -2.91f, +1.03f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, -2.94f, +1.04f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, -2.87f, +1.05f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.95f, -2.87f, +1.02f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.91f, -2.99f, +1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.91f, -2.99f, +2.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, -2.91f, +2.94f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, -2.87f, +2.95f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, -2.91f, +2.97f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.96f, -1.06f, +2.94f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, -1.04f, +2.94f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -1.09f, +2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, -1.05f, +1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.91f, -2.91f, +1.01f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.91f, -2.97f, +2.94f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, -1.13f, +2.95f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.87f, -2.95f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.91f, -2.97f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.94f, -2.94f, +2.96f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.96f, -2.94f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.97f, -2.91f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.98f, -2.87f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.95f, -2.87f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.94f, -2.91f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.91f, -2.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.91f, -2.87f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.87f, -2.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.91f, -2.94f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.13f, -1.13f, +1.00f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.87f, -2.98f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.13f, -2.95f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.13f, -2.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.09f, -2.87f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.09f, -2.94f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.09f, -2.97f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.13f, -2.98f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.09f, -2.99f, +2.91f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.06f, -2.91f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.05f, -2.87f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.03f, -2.91f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.13f, -2.87f, +3.00f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.09f, -1.13f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.13f, -1.13f, +3.00f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.09f, -1.09f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.06f, -1.09f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.87f, -1.09f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.05f, -1.13f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.03f, -1.09f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.02f, -1.13f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.02f, -2.87f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.06f, -1.04f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.09f, -1.06f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.91f, -1.03f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.87f, -1.13f, +3.00f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.91f, -1.06f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.91f, -1.09f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.91f, -1.13f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.94f, -1.06f, +2.96f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.97f, -1.09f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.95f, -1.13f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.98f, -1.13f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.96f, -1.06f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.94f, -1.04f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.13f, -1.09f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.04f, -2.94f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.01f, -2.87f, +2.91f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.06f, -1.06f, +2.96f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.94f, -1.09f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.91f, -2.97f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -2.95f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -2.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -2.94f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -2.99f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -2.87f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -2.87f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -2.94f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.15f, +0.45f, -0.88f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -2.87f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -2.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -2.91f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, -2.91f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -2.96f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -2.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -2.97f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, -2.87f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -2.94f, +1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.04f, -2.94f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, -2.94f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -2.97f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, -2.98f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, -2.95f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, -2.98f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -2.91f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, -2.87f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -2.91f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, -2.94f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, -2.87f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -2.91f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.04f, -1.06f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, -1.13f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -2.87f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, -1.13f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -1.09f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -1.09f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -1.13f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -1.13f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -1.09f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, -1.06f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, -1.05f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, -1.02f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, -1.05f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, -1.02f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, -1.06f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.04f, -1.06f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, -1.09f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -1.03f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -1.01f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -1.09f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -1.09f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -1.06f, +1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, -1.13f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, -1.13f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -1.09f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -1.06f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -1.09f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -1.03f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -1.13f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, -2.87f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -1.04f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -1.05f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -1.01f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -1.02f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -1.02f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -1.01f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -1.03f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -1.06f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, -1.02f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -1.05f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -1.13f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -1.13f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -1.09f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -1.09f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, -1.09f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -1.04f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -1.09f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -2.99f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, -1.13f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -1.06f, +1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.96f, -1.06f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, -1.06f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -1.01f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.98f, -1.05f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -1.01f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.99f, -1.09f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, -1.02f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -1.01f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -1.03f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, -1.06f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -1.02f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.98f, -1.05f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -2.94f, +1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -2.87f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -2.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, -2.87f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -2.96f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.98f, -1.13f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.99f, -2.91f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -2.95f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.04f, -2.94f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -2.94f, +2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -2.91f, +2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, -2.87f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -2.91f, +2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, -2.91f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -2.87f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, -1.09f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -1.06f, +2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, -2.87f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -1.03f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -1.04f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -1.01f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -1.09f, +2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -1.03f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -1.01f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -1.00f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -1.05f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -1.01f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -1.01f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -1.00f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -1.00f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -1.00f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -1.01f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -1.01f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -1.05f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -1.06f, +2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -1.09f, +2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -1.03f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.99f, -1.09f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.99f, -1.13f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, -1.09f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -1.04f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -1.02f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -2.91f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -2.91f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},

		},

		.indices = { // 1284 values
			0, 1, 2, 3,
			4, 0, 5,
			3, 0, 6,
			0, 2, 7,
			8, 5, 5,
			9, 7, 10,
			9, 6, 2,
			10, 6, 11,
			12, 10, 13,
			11, 10, 1,
			13, 2, 14,
			15, 13, 12,
			16, 17, 12,
			18, 9, 9,
			19, 7, 18,
			20, 19, 19,
			21, 7, 20,
			22, 19, 14,
			23, 24, 25,
			14, 1, 4,
			25, 1, 26,
			27, 4, 26,
			28, 29, 8,
			30, 3, 21,
			31, 8, 21,
			32, 33, 34,
			32, 22, 30,
			26, 3, 0,
			4, 1, 3,
			26, 4, 5,
			8, 3, 6,
			5, 0, 7,
			21, 8, 5,
			6, 9, 10,
			12, 9, 2,
			13, 10, 11,
			35, 12, 13,
			15, 11, 1,
			14, 13, 14,
			24, 15, 12,
			35, 16, 12,
			17, 18, 9,
			18, 19, 18,
			36, 20, 19,
			22, 21, 20,
			34, 22, 14,
			37, 23, 25,
			37, 14, 4,
			27, 25, 26,
			29, 27, 26,
			38, 28, 8,
			31, 30, 21,
			33, 31, 21,
			22, 32, 34,
			39, 32, 30,
			38, 26, 40,
			41, 42, 43,
			40, 44, 45,
			46, 47, 43,
			47, 46, 44,
			48, 47, 49,
			47, 48, 44,
			50, 51, 50,
			52, 51, 48,
			52, 53, 54,
			52, 55, 56,
			55, 52, 49,
			53, 57, 54,
			57, 53, 58,
			59, 54, 58,
			55, 60, 61,
			62, 58, 61,
			60, 63, 60,
			64, 63, 65,
			60, 55, 66,
			67, 64, 65,
			68, 66, 69,
			65, 56, 70,
			71, 69, 72,
			68, 71, 69,
			50, 73, 40,
			73, 50, 74,
			75, 62, 59,
			75, 76, 59,
			77, 57, 78,
			45, 49, 45,
			79, 80, 77,
			49, 57, 40,
			81, 41, 43,
			81, 40, 45,
			80, 46, 43,
			44, 47, 44,
			51, 48, 49,
			45, 47, 44,
			40, 50, 50,
			56, 52, 48,
			51, 52, 54,
			53, 52, 56,
			65, 55, 49,
			48, 53, 54,
			59, 57, 58,
			62, 59, 58,
			54, 55, 61,
			74, 62, 61,
			58, 60, 60,
			66, 64, 65,
			66, 60, 66,
			68, 67, 65,
			71, 68, 69,
			71, 65, 70,
			72, 71, 72,
			82, 68, 69,
			56, 50, 40,
			42, 73, 74,
			83, 75, 59,
			62, 75, 59,
			76, 77, 78,
			84, 45, 45,
			84, 79, 77,
			78, 49, 85,
			86, 87, 86,
			88, 89, 90,
			88, 91, 92,
			91, 93, 93,
			94, 95, 94,
			88, 85, 95,
			96, 97, 94,
			98, 96, 98,
			87, 99, 99,
			100, 98, 100,
			96, 98, 100,
			101, 102, 103,
			104, 100, 105,
			106, 104, 101,
			106, 107, 101,
			108, 109, 102,
			109, 110, 110,
			111, 112, 109,
			113, 111, 111,
			114, 112, 113,
			115, 111, 116,
			117, 113, 108,
			116, 113, 118,
			119, 117, 115,
			120, 114, 121,
			114, 120, 122,
			112, 114, 122,
			123, 124, 121,
			125, 122, 125,
			126, 123, 125,
			127, 128, 126,
			129, 130, 128,
			131, 129, 126,
			92, 93, 123,
			93, 95, 97,
			123, 95, 112,
			97, 110, 102,
			97, 96, 115,
			119, 132, 85,
			88, 86, 90,
			89, 88, 92,
			90, 91, 93,
			91, 94, 94,
			91, 88, 95,
			94, 96, 94,
			85, 98, 98,
			85, 87, 99,
			103, 100, 100,
			102, 96, 100,
			104, 101, 103,
			105, 104, 105,
			133, 106, 101,
			104, 106, 101,
			107, 108, 102,
			101, 109, 110,
			109, 111, 109,
			108, 113, 111,
			115, 114, 113,
			117, 115, 116,
			118, 117, 108,
			134, 116, 118,
			135, 119, 115,
			132, 120, 121,
			122, 114, 122,
			124, 112, 122,
			125, 123, 121,
			136, 125, 125,
			128, 126, 125,
			136, 127, 126,
			128, 129, 128,
			127, 131, 126,
			130, 92, 123,
			126, 93, 97,
			124, 123, 112,
			124, 97, 102,
			110, 97, 115,
			117, 119, 137,
			138, 139, 137,
			140, 141, 139,
			142, 140, 139,
			143, 144, 140,
			145, 141, 146,
			140, 142, 144,
			147, 142, 148,
			142, 147, 149,
			146, 148, 146,
			150, 151, 152,
			153, 149, 154,
			150, 153, 151,
			155, 145, 155,
			150, 156, 157,
			156, 154, 158,
			156, 159, 160,
			159, 161, 161,
			157, 162, 163,
			164, 165, 161,
			165, 164, 162,
			166, 165, 167,
			165, 166, 162,
			168, 169, 169,
			170, 171, 171,
			166, 169, 172,
			171, 173, 170,
			173, 171, 167,
			174, 175, 172,
			175, 174, 176,
			177, 172, 176,
			173, 178, 179,
			180, 176, 179,
			178, 181, 178,
			182, 181, 183,
			178, 173, 184,
			185, 182, 183,
			186, 184, 187,
			183, 170, 188,
			189, 187, 190,
			186, 189, 191,
			188, 192, 191,
			193, 190, 194,
			191, 195, 195,
			192, 196, 197,
			198, 194, 199,
			193, 198, 200,
			185, 199, 200,
			197, 201, 185,
			186, 193, 201,
			202, 203, 197,
			204, 202, 202,
			205, 203, 204,
			206, 202, 207,
			204, 208, 194,
			208, 204, 195,
			209, 208, 210,
			208, 209, 211,
			207, 210, 207,
			212, 213, 214,
			215, 211, 216,
			212, 215, 213,
			217, 206, 217,
			212, 218, 219,
			218, 220, 221,
			220, 222, 205,
			217, 219, 205,
			221, 223, 223,
			224, 225, 221,
			226, 224, 224,
			227, 225, 226,
			228, 224, 143,
			229, 230, 143,
			231, 232, 144,
			230, 233, 233,
			210, 209, 230,
			211, 210, 209,
			147, 233, 234,
			235, 231, 236,
			231, 138, 229,
			214, 211, 237,
			238, 239, 240,
			238, 241, 242,
			241, 243, 177,
			244, 175, 243,
			175, 244, 243,
			163, 167, 177,
			245, 246, 247,
			248, 245, 249,
			245, 180, 250,
			247, 251, 252,
			247, 249, 252,
			179, 253, 254,
			252, 255, 255,
			253, 256, 256,
			257, 258, 253,
			181, 257, 257,
			201, 258, 181,
			200, 257, 259,
			201, 203, 259,
			256, 258, 260,
			223, 225, 203,
			223, 259, 260,
			255, 256, 225,
			261, 260, 227,
			262, 261, 261,
			254, 255, 262,
			263, 254, 262,
			264, 265, 263,
			251, 254, 266,
			267, 228, 268,
			267, 269, 227,
			267, 270, 270,
			268, 264, 163,
			238, 271, 148,
			196, 192, 188,
			148, 192, 187,
			149, 188, 170,
			152, 187, 157,
			152, 168, 137,
			236, 138, 137,
			139, 140, 139,
			144, 142, 139,
			138, 143, 140,
			151, 145, 146,
			151, 140, 144,
			233, 147, 148,
			146, 142, 149,
			153, 146, 146,
			153, 150, 152,
			154, 153, 154,
			156, 150, 151,
			150, 155, 157,
			159, 156, 158,
			155, 156, 160,
			158, 159, 161,
			159, 157, 163,
			271, 164, 161,
			162, 165, 162,
			169, 166, 167,
			163, 165, 162,
			157, 168, 169,
			168, 170, 171,
			174, 166, 172,
			174, 171, 170,
			183, 173, 167,
			166, 174, 172,
			177, 175, 176,
			180, 177, 176,
			172, 173, 179,
			249, 180, 179,
			176, 178, 178,
			184, 182, 183,
			184, 178, 184,
			186, 185, 183,
			189, 186, 187,
			189, 183, 188,
			190, 189, 190,
			193, 186, 191,
			190, 188, 191,
			198, 193, 194,
			198, 191, 195,
			191, 192, 197,
			199, 198, 199,
			185, 193, 200,
			182, 185, 200,
			199, 197, 201,
			197, 202, 197,
			194, 204, 202,
			206, 205, 204,
			213, 206, 207,
			213, 204, 194,
			195, 208, 195,
			196, 209, 210,
			207, 208, 211,
			215, 207, 207,
			215, 212, 214,
			216, 215, 216,
			218, 212, 213,
			212, 217, 219,
			217, 218, 221,
			219, 220, 205,
			206, 217, 205,
			219, 221, 223,
			221, 224, 221,
			222, 226, 224,
			228, 227, 226,
			266, 228, 143,
			232, 229, 143,
			138, 231, 144,
			143, 230, 233,
			230, 210, 230,
			229, 211, 209,
			196, 147, 236,
			234, 231, 229,
			272, 214, 240,
			239, 238, 242,
			240, 241, 177,
			246, 244, 243,
			167, 175, 243,
			241, 163, 177,
			180, 245, 249,
			247, 245, 250,
			248, 247, 252,
			251, 247, 252,
			249, 179, 254,
			251, 252, 255,
			252, 253, 256,
			253, 257, 253,
			179, 181, 257,
			200, 201, 181,
			182, 200, 259,
			258, 201, 259,
			260, 256, 260,
			259, 223, 203,
			205, 223, 260,
			261, 255, 225,
			227, 261, 227,
			270, 262, 261,
			262, 254, 262,
			265, 263, 262,
			270, 264, 263,
			250, 251, 266,
			269, 267, 227,
			228, 267, 270,
			267, 268, 163,
			241, 238, 148,
			147, 196, 188,
			149, 148, 187,
			152, 149, 170,
			168, 152, 157,
			154, 152,
		},
	},
	{
		.name = "BLUE_Cube.022",
		.colors = { game::BLUE },
		.vertices = { // 238 vertex
			VertexData{
				.position = { -2.94f, +0.97f, -0.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, +0.94f, -0.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, +0.94f, -0.96f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +0.91f, -0.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -3.00f, +0.87f, -0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +0.91f, -0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, +0.94f, +0.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -3.00f, +0.87f, +0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +0.91f, +0.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.87f, -0.87f, +1.00f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -3.00f, -0.87f, -0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +0.87f, -0.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -3.00f, -0.87f, +0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -0.91f, -0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -0.87f, +0.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -0.91f, +0.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -0.87f, -0.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -0.91f, +0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, -0.94f, +0.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, -0.95f, +0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.95f, -0.98f, -0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, -0.91f, -0.94f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -0.91f, -0.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, -0.97f, -0.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, -0.91f, -0.97f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, -0.94f, -0.96f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, -0.87f, -0.95f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.95f, -0.87f, -0.98f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.91f, -0.99f, -0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, -0.91f, +0.94f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, -0.87f, +0.95f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, -0.91f, +0.97f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.96f, +0.94f, +0.94f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, +0.96f, +0.94f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +0.91f, +0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, +0.95f, -0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.95f, -0.98f, +0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.91f, -0.91f, -0.99f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, +0.87f, +0.95f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.91f, -0.99f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -0.97f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -1.00f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -1.00f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -0.99f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -0.99f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -0.99f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -1.00f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -0.99f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -0.99f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -0.99f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -0.99f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -0.98f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -0.99f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -0.98f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -0.97f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -0.95f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -0.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -0.94f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -0.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -0.87f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -0.94f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.15f, +0.15f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -0.87f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -0.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -0.91f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, -0.91f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -0.96f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -0.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -0.97f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, -0.87f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -0.94f, -0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.04f, -0.94f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, -0.94f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -0.97f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, -0.98f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, -0.95f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, -0.98f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -0.91f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, -0.87f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -0.97f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, -0.94f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -0.96f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, -0.95f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -0.91f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, -0.87f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -0.91f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.04f, +0.94f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, +0.87f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -0.87f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, +0.87f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +0.91f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +0.91f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +0.87f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +0.87f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +0.91f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, +0.94f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, +0.95f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, +0.98f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, +0.95f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, +0.98f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, +0.94f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.04f, +0.94f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, +0.91f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +0.97f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +0.99f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +0.91f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +0.91f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +0.94f, -0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, +0.87f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, +0.87f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +0.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +0.94f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +0.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +0.97f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +0.87f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, -0.87f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +0.96f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +0.95f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +0.99f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +0.98f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +0.98f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +0.99f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +0.97f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +0.94f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, +0.98f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +0.95f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +0.87f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +0.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +0.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +0.91f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, +0.91f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +0.96f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +0.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -0.99f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, +0.87f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +0.94f, -0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.96f, +0.94f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, +0.94f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +0.99f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.98f, +0.95f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +0.99f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.99f, +0.91f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, +0.98f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +0.99f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +0.97f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, +0.94f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +0.98f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.98f, +0.95f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.98f, -0.95f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, -0.98f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, -0.94f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, -0.98f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, -0.94f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.96f, -0.94f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -0.97f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.98f, +0.87f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -0.94f, -0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -0.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -0.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, -0.87f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -0.96f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.99f, -0.91f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -0.95f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -0.96f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -0.97f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -0.99f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, -0.91f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -0.95f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -0.94f, +0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.96f, -0.94f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.98f, -0.87f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, -0.87f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -0.91f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -0.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -0.87f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -0.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -0.94f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +0.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -0.98f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -0.95f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -0.97f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -0.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -0.87f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -0.94f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -0.98f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.04f, -0.94f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -0.99f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -0.91f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -0.91f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -0.94f, +0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, -0.87f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -0.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, -0.91f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -0.87f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -0.87f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +0.87f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +0.87f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +0.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +0.91f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +0.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, +0.87f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, +0.91f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, +0.87f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, -0.87f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +0.96f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +0.94f, +0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +0.97f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +0.99f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +0.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +0.97f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +0.99f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +1.00f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +0.95f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +0.99f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +0.99f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +1.00f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +1.00f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +1.00f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +0.99f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +0.99f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +0.95f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +0.94f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +0.91f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +0.97f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +0.87f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +0.94f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +0.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +0.87f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +0.94f, +0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, +0.91f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, +0.87f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.98f, +0.87f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.96f, +0.94f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +0.96f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.99f, +0.91f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.99f, +0.87f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +0.98f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -0.91f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},

		},

		.indices = { // 1284 values
			0, 1, 2, 3,
			0, 4, 5,
			6, 7, 3,
			7, 6, 4,
			8, 7, 9,
			7, 8, 4,
			10, 11, 12,
			11, 10, 8,
			13, 14, 15,
			13, 16, 12,
			16, 13, 9,
			14, 17, 15,
			17, 14, 18,
			19, 15, 18,
			16, 20, 21,
			20, 16, 21,
			22, 23, 24,
			21, 12, 25,
			26, 24, 27,
			22, 26, 24,
			10, 28, 0,
			28, 10, 19,
			29, 30, 19,
			31, 17, 32,
			5, 9, 5,
			33, 34, 32,
			17, 31, 0,
			35, 1, 3,
			35, 0, 5,
			34, 6, 3,
			4, 7, 4,
			11, 8, 9,
			5, 7, 4,
			0, 10, 12,
			13, 11, 8,
			11, 13, 15,
			14, 13, 12,
			21, 16, 9,
			8, 14, 15,
			19, 17, 18,
			36, 19, 18,
			15, 16, 21,
			23, 20, 21,
			26, 22, 24,
			26, 21, 25,
			27, 26, 27,
			37, 22, 24,
			12, 10, 0,
			2, 28, 19,
			36, 29, 19,
			30, 31, 32,
			38, 5, 5,
			38, 33, 32,
			9, 17, 39,
			40, 41, 42,
			43, 39, 44,
			42, 39, 45,
			39, 41, 46,
			47, 44, 45,
			46, 44, 48,
			49, 45, 41,
			48, 45, 50,
			51, 48, 52,
			50, 48, 40,
			52, 41, 53,
			54, 52, 54,
			55, 56, 54,
			57, 50, 56,
			58, 57, 56,
			59, 60, 57,
			61, 50, 62,
			57, 58, 60,
			63, 58, 64,
			58, 63, 65,
			62, 64, 62,
			66, 67, 68,
			69, 65, 70,
			66, 69, 67,
			71, 61, 71,
			66, 72, 73,
			72, 70, 74,
			72, 75, 76,
			75, 77, 77,
			73, 78, 51,
			71, 74, 51,
			76, 49, 49,
			79, 46, 76,
			80, 79, 79,
			81, 46, 80,
			82, 79, 83,
			80, 84, 77,
			84, 80, 78,
			85, 84, 86,
			84, 85, 78,
			87, 88, 88,
			89, 90, 90,
			85, 88, 91,
			90, 92, 89,
			92, 90, 86,
			93, 94, 91,
			94, 93, 95,
			96, 91, 95,
			92, 97, 98,
			99, 95, 98,
			97, 100, 97,
			101, 100, 102,
			97, 92, 103,
			104, 101, 102,
			105, 103, 106,
			102, 89, 107,
			108, 106, 109,
			105, 108, 110,
			107, 111, 110,
			112, 109, 113,
			110, 114, 114,
			111, 115, 116,
			117, 113, 118,
			112, 117, 119,
			104, 118, 119,
			116, 120, 104,
			105, 112, 120,
			121, 122, 116,
			123, 121, 121,
			124, 122, 123,
			125, 121, 126,
			123, 127, 113,
			127, 123, 114,
			128, 127, 129,
			127, 128, 130,
			126, 129, 126,
			131, 132, 133,
			134, 130, 135,
			131, 134, 132,
			136, 125, 136,
			131, 137, 138,
			137, 139, 140,
			139, 141, 124,
			136, 138, 124,
			140, 142, 142,
			143, 144, 140,
			145, 143, 143,
			146, 144, 145,
			147, 143, 148,
			149, 150, 148,
			151, 152, 151,
			153, 152, 154,
			155, 153, 59,
			156, 157, 59,
			158, 159, 60,
			157, 160, 160,
			129, 128, 157,
			130, 129, 128,
			63, 160, 155,
			161, 158, 162,
			158, 55, 53,
			155, 162, 156,
			133, 130, 152,
			53, 40, 43,
			152, 40, 163,
			148, 43, 163,
			164, 165, 165,
			166, 149, 167,
			164, 168, 164,
			169, 166, 170,
			169, 171, 172,
			171, 173, 173,
			174, 175, 174,
			169, 167, 175,
			176, 177, 174,
			178, 176, 178,
			168, 179, 180,
			178, 179, 181,
			176, 178, 181,
			182, 183, 180,
			184, 181, 47,
			179, 42, 81,
			180, 47, 81,
			185, 186, 186,
			187, 184, 188,
			185, 82, 185,
			189, 187, 182,
			187, 190, 190,
			189, 191, 182,
			192, 193, 192,
			191, 194, 183,
			193, 195, 195,
			196, 197, 193,
			198, 196, 196,
			199, 197, 198,
			200, 196, 201,
			202, 198, 192,
			201, 198, 96,
			201, 94, 194,
			94, 201, 194,
			83, 86, 203,
			204, 202, 96,
			205, 203, 206,
			204, 205, 207,
			205, 99, 208,
			206, 209, 210,
			206, 207, 210,
			98, 211, 212,
			210, 213, 213,
			211, 214, 214,
			215, 216, 211,
			100, 215, 215,
			120, 216, 100,
			119, 215, 216,
			122, 217, 217,
			214, 216, 217,
			144, 218, 122,
			142, 217, 218,
			213, 214, 144,
			219, 218, 146,
			220, 219, 219,
			212, 213, 220,
			221, 212, 220,
			222, 223, 221,
			209, 212, 200,
			221, 199, 223,
			199, 221, 224,
			197, 199, 224,
			225, 226, 223,
			227, 224, 227,
			228, 225, 227,
			229, 230, 228,
			231, 232, 230,
			233, 231, 234,
			235, 147, 229,
			235, 233, 146,
			235, 236, 236,
			229, 222, 228,
			172, 173, 225,
			173, 175, 226,
			175, 177, 197,
			177, 195, 183,
			177, 176, 200,
			204, 208, 83,
			189, 188, 179,
			163, 42, 64,
			115, 111, 65,
			111, 107, 68,
			107, 106, 87,
			106, 89, 73,
			68, 87, 39,
			43, 40, 42,
			163, 43, 44,
			47, 42, 45,
			44, 39, 46,
			81, 47, 45,
			49, 46, 48,
			51, 49, 41,
			52, 48, 50,
			61, 51, 52,
			54, 50, 40,
			53, 52, 53,
			162, 54, 54,
			162, 55, 54,
			56, 57, 56,
			60, 58, 56,
			55, 59, 57,
			67, 61, 62,
			67, 57, 60,
			160, 63, 64,
			62, 58, 65,
			69, 62, 62,
			69, 66, 68,
			70, 69, 70,
			72, 66, 67,
			66, 71, 73,
			75, 72, 74,
			71, 72, 76,
			74, 75, 77,
			75, 73, 51,
			61, 71, 51,
			74, 76, 49,
			76, 79, 76,
			77, 80, 79,
			82, 81, 80,
			188, 82, 83,
			188, 80, 77,
			78, 84, 78,
			88, 85, 86,
			83, 84, 78,
			73, 87, 88,
			87, 89, 90,
			93, 85, 91,
			93, 90, 89,
			102, 92, 86,
			85, 93, 91,
			96, 94, 95,
			99, 96, 95,
			91, 92, 98,
			207, 99, 98,
			95, 97, 97,
			103, 101, 102,
			103, 97, 103,
			105, 104, 102,
			108, 105, 106,
			108, 102, 107,
			109, 108, 109,
			112, 105, 110,
			109, 107, 110,
			117, 112, 113,
			117, 110, 114,
			110, 111, 116,
			118, 117, 118,
			104, 112, 119,
			101, 104, 119,
			118, 116, 120,
			116, 121, 116,
			113, 123, 121,
			125, 124, 123,
			132, 125, 126,
			132, 123, 113,
			114, 127, 114,
			115, 128, 129,
			126, 127, 130,
			134, 126, 126,
			134, 131, 133,
			135, 134, 135,
			137, 131, 132,
			131, 136, 138,
			136, 137, 140,
			138, 139, 124,
			125, 136, 124,
			138, 140, 142,
			140, 143, 140,
			141, 145, 143,
			147, 146, 145,
			234, 147, 148,
			165, 149, 148,
			150, 151, 151,
			154, 153, 154,
			161, 155, 59,
			159, 156, 59,
			55, 158, 60,
			59, 157, 160,
			157, 129, 157,
			156, 130, 128,
			115, 63, 162,
			155, 158, 53,
			153, 155, 156,
			237, 133, 152,
			153, 53, 43,
			148, 152, 163,
			165, 148, 163,
			168, 164, 165,
			164, 166, 167,
			169, 164, 170,
			166, 169, 172,
			170, 171, 173,
			171, 174, 174,
			171, 169, 175,
			174, 176, 174,
			167, 178, 178,
			167, 168, 180,
			181, 178, 181,
			183, 176, 181,
			184, 182, 180,
			186, 184, 47,
			180, 179, 81,
			186, 180, 81,
			82, 185, 186,
			185, 187, 188,
			189, 185, 182,
			184, 187, 190,
			187, 189, 182,
			190, 192, 192,
			190, 191, 183,
			182, 193, 195,
			193, 196, 193,
			192, 198, 196,
			200, 199, 198,
			202, 200, 201,
			203, 202, 192,
			194, 201, 96,
			203, 201, 194,
			86, 94, 194,
			191, 83, 203,
			205, 204, 96,
			99, 205, 207,
			206, 205, 208,
			204, 206, 210,
			209, 206, 210,
			207, 98, 212,
			209, 210, 213,
			210, 211, 214,
			211, 215, 211,
			98, 100, 215,
			119, 120, 100,
			101, 119, 216,
			120, 122, 217,
			218, 214, 217,
			142, 144, 122,
			124, 142, 218,
			219, 213, 144,
			146, 219, 146,
			236, 220, 219,
			220, 212, 220,
			223, 221, 220,
			236, 222, 221,
			208, 209, 200,
			208, 221, 223,
			224, 199, 224,
			226, 197, 224,
			227, 225, 223,
			222, 227, 227,
			230, 228, 227,
			222, 229, 228,
			230, 231, 230,
			229, 233, 234,
			233, 235, 146,
			147, 235, 236,
			235, 229, 228,
			232, 172, 225,
			228, 173, 226,
			225, 175, 197,
			226, 177, 183,
			195, 177, 200,
			202, 204, 83,
			191, 189, 179,
			168, 163, 64,
			63, 115, 65,
			64, 111, 68,
			65, 107, 87,
			68, 106, 73,
			70, 68,
		},
	},
	{
		.name = "BLUE-RED_Cube.023",
		.colors = { game::RED, game::BLUE },
		.vertices = { // 257 vertex
			VertexData{
				.position = { -2.94f, +0.97f, -2.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, +0.94f, -2.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, +0.94f, -2.96f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +0.91f, -2.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -3.00f, +0.87f, -2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +0.91f, -2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, +0.94f, -1.09f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -3.00f, +0.87f, -1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +0.91f, -1.09f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.87f, -0.87f, -1.00f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -3.00f, -0.87f, -2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +0.87f, -2.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -3.00f, -0.87f, -1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -0.91f, -2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -0.87f, -1.09f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -0.91f, -1.09f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -0.87f, -2.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -0.91f, -1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, -0.94f, -1.09f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, -0.95f, -1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.95f, -0.98f, -2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, -0.91f, -2.94f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -0.91f, -2.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, -0.97f, -2.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, -0.91f, -2.97f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, -0.94f, -2.96f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, -0.87f, -2.95f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.95f, -0.87f, -2.98f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.91f, -0.99f, -2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, -0.91f, -1.06f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, -0.87f, -1.05f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, -0.91f, -1.03f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.96f, +0.94f, -1.06f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, +0.96f, -1.06f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +0.91f, -1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, +0.95f, -2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.95f, -0.98f, -1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.91f, -0.91f, -2.99f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, +0.87f, -1.05f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.87f, -0.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.13f, -0.87f, -3.00f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.09f, -0.94f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.91f, -0.87f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.91f, -0.94f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.09f, -0.87f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.09f, -0.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.06f, -0.91f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.03f, -0.91f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.06f, -0.96f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.13f, -0.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.09f, -0.97f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.05f, -0.87f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.06f, -0.94f, -2.96f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.13f, +0.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.06f, +0.94f, -2.96f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.09f, +0.94f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.09f, +0.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.05f, +0.87f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.09f, +0.97f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.09f, +0.87f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.02f, -0.87f, -2.95f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.91f, +0.87f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.91f, +0.94f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.87f, +0.87f, -3.00f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.91f, +0.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.94f, +0.91f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.97f, +0.91f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.94f, +0.96f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.87f, +0.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.91f, -0.99f, -2.87f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.95f, +0.87f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.94f, +0.94f, -2.96f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.94f, -0.94f, -2.96f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.87f, -0.87f, -3.00f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.91f, -0.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.95f, -0.87f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.94f, -0.96f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.13f, -0.95f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.03f, -0.94f, -2.91f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.13f, +0.95f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.97f, +0.94f, -2.91f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.94f, -0.91f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.91f, -0.99f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -0.97f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -1.00f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -1.00f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -0.99f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -0.99f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -0.99f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -1.00f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -0.99f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -0.99f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -0.99f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -0.99f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -0.98f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -0.99f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -0.98f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -0.97f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -0.95f, -2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -0.91f, -2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -0.94f, -2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, -0.17f, +0.17f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -0.91f, -2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.04f, -0.94f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -0.96f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, -0.94f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -0.97f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -0.94f, -2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, -0.98f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, -0.95f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, -0.98f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -0.91f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, -0.87f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -0.97f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, -0.94f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -0.96f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, -0.95f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -0.91f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, -0.87f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -0.91f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.04f, +0.94f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, +0.87f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -0.87f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, +0.87f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +0.91f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +0.91f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +0.87f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +0.87f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +0.91f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, +0.94f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, +0.95f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, +0.98f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, +0.95f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, +0.98f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, +0.94f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.04f, +0.94f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, +0.91f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +0.97f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +0.99f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +0.91f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +0.91f, -2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +0.94f, -2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, +0.87f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, +0.87f, -2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +0.96f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +0.95f, -2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +0.97f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +0.99f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +0.91f, -2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +0.98f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +0.98f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +0.99f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +0.97f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +0.94f, -2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, +0.98f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +0.95f, -2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +0.91f, -2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.96f, +0.94f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +0.96f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, +0.94f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +0.99f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.98f, +0.95f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +0.99f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.99f, +0.91f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, +0.98f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +0.99f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +0.97f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, +0.94f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +0.98f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.98f, +0.95f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.98f, -0.95f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, -0.98f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, -0.94f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, -0.98f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, -0.94f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.96f, -0.94f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -0.97f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.98f, +0.87f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.99f, -0.91f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -0.91f, -2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -0.95f, -2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -0.96f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -0.97f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -0.99f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, -0.91f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -0.95f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -0.94f, -1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.96f, -0.94f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.98f, -0.87f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, -0.87f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -0.91f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -0.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -0.87f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -0.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -0.94f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +0.87f, -3.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -0.98f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -0.95f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -0.97f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -0.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -0.87f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -0.94f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -0.98f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.04f, -0.94f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -0.99f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -0.91f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -0.91f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -0.94f, -1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, -0.87f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -0.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, -0.91f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -0.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -0.87f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +0.87f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +0.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +0.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +0.91f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +0.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, +0.87f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, +0.91f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, +0.87f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, -0.87f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +0.96f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +0.94f, -1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +0.97f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +0.99f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +0.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +0.97f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +0.99f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +1.00f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +0.95f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +0.99f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +0.99f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +1.00f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +1.00f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +1.00f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +0.99f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +0.99f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +0.95f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +0.94f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +0.91f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +0.97f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +0.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +0.94f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +0.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +0.87f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +0.94f, -1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, +0.91f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, +0.87f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.98f, +0.87f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.96f, +0.94f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +0.96f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.99f, +0.91f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.99f, +0.87f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +0.98f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -0.97f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, -0.91f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},

		},

		.indices = { // 1284 values
			0, 1, 2, 3,
			0, 4, 5,
			6, 7, 3,
			7, 6, 4,
			8, 7, 9,
			7, 8, 4,
			10, 11, 12,
			11, 10, 8,
			13, 14, 15,
			13, 16, 12,
			16, 13, 9,
			14, 17, 15,
			17, 14, 18,
			19, 15, 18,
			16, 20, 21,
			20, 16, 21,
			22, 23, 24,
			21, 12, 25,
			26, 24, 27,
			22, 26, 24,
			10, 28, 0,
			28, 10, 19,
			29, 30, 19,
			31, 17, 32,
			5, 9, 5,
			33, 34, 32,
			17, 31, 0,
			35, 1, 3,
			35, 0, 5,
			34, 6, 3,
			4, 7, 4,
			11, 8, 9,
			5, 7, 4,
			0, 10, 12,
			13, 11, 8,
			11, 13, 15,
			14, 13, 12,
			21, 16, 9,
			8, 14, 15,
			19, 17, 18,
			36, 19, 18,
			15, 16, 21,
			23, 20, 21,
			26, 22, 24,
			26, 21, 25,
			27, 26, 27,
			37, 22, 24,
			12, 10, 0,
			2, 28, 19,
			36, 29, 19,
			30, 31, 32,
			38, 5, 5,
			38, 33, 32,
			9, 17, 39,
			40, 41, 39,
			42, 43, 44,
			41, 40, 43,
			45, 40, 46,
			40, 45, 47,
			44, 46, 44,
			48, 49, 50,
			51, 47, 52,
			48, 51, 53,
			54, 55, 53,
			56, 57, 58,
			53, 59, 59,
			55, 60, 61,
			62, 63, 58,
			63, 62, 59,
			64, 63, 65,
			63, 64, 66,
			61, 65, 61,
			67, 68, 69,
			70, 66, 71,
			67, 70, 42,
			72, 73, 42,
			74, 75, 43,
			73, 76, 76,
			65, 64, 73,
			66, 65, 64,
			45, 76, 72,
			69, 66, 46,
			60, 55, 47,
			55, 54, 39,
			43, 40, 39,
			77, 42, 44,
			49, 41, 43,
			76, 45, 46,
			44, 40, 47,
			51, 44, 44,
			51, 48, 50,
			52, 51, 52,
			78, 48, 53,
			57, 54, 53,
			79, 56, 58,
			79, 53, 59,
			53, 55, 61,
			68, 62, 58,
			59, 63, 59,
			60, 64, 65,
			61, 63, 66,
			70, 61, 61,
			70, 67, 69,
			71, 70, 71,
			80, 67, 42,
			75, 72, 42,
			77, 74, 43,
			42, 73, 76,
			73, 65, 73,
			72, 66, 64,
			60, 45, 72,
			81, 69, 46,
			45, 60, 47,
			46, 55, 82,
			83, 84, 85,
			86, 82, 82,
			87, 85, 88,
			82, 84, 89,
			87, 90, 88,
			89, 90, 91,
			92, 88, 84,
			91, 88, 93,
			94, 91, 95,
			93, 91, 83,
			95, 84, 96,
			97, 95, 97,
			98, 99, 97,
			100, 93, 100,
			101, 93, 102,
			103, 101, 103,
			104, 105, 106,
			105, 107, 108,
			105, 109, 110,
			109, 111, 111,
			106, 112, 94,
			103, 108, 94,
			110, 92, 92,
			113, 89, 110,
			114, 113, 113,
			115, 89, 114,
			116, 113, 117,
			114, 118, 111,
			118, 114, 112,
			119, 118, 120,
			118, 119, 112,
			121, 122, 122,
			123, 124, 124,
			119, 122, 125,
			124, 126, 123,
			126, 124, 120,
			127, 128, 125,
			128, 127, 129,
			130, 125, 129,
			126, 131, 132,
			133, 129, 132,
			131, 134, 131,
			135, 134, 136,
			131, 126, 137,
			138, 135, 136,
			139, 137, 140,
			136, 123, 141,
			142, 140, 143,
			139, 142, 144,
			145, 146, 147,
			148, 145, 149,
			138, 147, 149,
			144, 150, 138,
			139, 148, 150,
			151, 152, 144,
			153, 151, 151,
			154, 152, 153,
			155, 151, 156,
			157, 155, 157,
			158, 159, 160,
			159, 161, 162,
			161, 163, 154,
			157, 160, 154,
			162, 164, 164,
			165, 166, 162,
			167, 165, 165,
			168, 166, 167,
			169, 165, 170,
			171, 172, 170,
			173, 174, 173,
			175, 174, 176,
			177, 175, 177,
			178, 179, 180,
			179, 98, 96,
			177, 180, 174,
			96, 83, 86,
			174, 83, 181,
			170, 86, 181,
			182, 183, 183,
			184, 171, 185,
			182, 186, 182,
			187, 184, 188,
			187, 189, 190,
			189, 191, 191,
			192, 193, 192,
			187, 185, 193,
			194, 195, 192,
			196, 194, 196,
			186, 197, 198,
			196, 197, 199,
			194, 196, 199,
			200, 201, 198,
			202, 199, 87,
			197, 85, 115,
			198, 87, 115,
			203, 204, 204,
			205, 202, 206,
			203, 116, 203,
			207, 205, 200,
			205, 208, 208,
			207, 209, 200,
			210, 211, 210,
			209, 212, 201,
			211, 213, 213,
			214, 215, 211,
			216, 214, 214,
			217, 215, 216,
			218, 214, 219,
			220, 216, 216,
			212, 219, 130,
			219, 128, 212,
			128, 219, 212,
			117, 120, 221,
			222, 220, 130,
			223, 221, 224,
			222, 223, 225,
			223, 133, 226,
			224, 227, 228,
			224, 225, 228,
			132, 229, 230,
			228, 231, 231,
			229, 232, 233,
			229, 234, 229,
			134, 234, 234,
			150, 233, 134,
			149, 234, 233,
			152, 235, 235,
			232, 233, 235,
			166, 236, 152,
			164, 235, 236,
			231, 232, 166,
			237, 236, 168,
			238, 237, 237,
			230, 231, 238,
			239, 230, 238,
			240, 241, 239,
			227, 230, 218,
			239, 217, 241,
			217, 239, 242,
			215, 217, 242,
			243, 244, 241,
			245, 242, 245,
			246, 243, 245,
			247, 248, 246,
			249, 250, 248,
			251, 249, 252,
			253, 169, 247,
			253, 251, 168,
			253, 254, 254,
			247, 240, 246,
			190, 191, 243,
			191, 193, 244,
			193, 195, 215,
			195, 213, 201,
			195, 194, 218,
			222, 226, 117,
			207, 206, 197,
			181, 85, 255,
			141, 140, 121,
			140, 123, 106,
			255, 121, 82,
			86, 83, 85,
			181, 86, 82,
			90, 87, 88,
			90, 82, 89,
			115, 87, 88,
			92, 89, 91,
			94, 92, 84,
			95, 91, 93,
			101, 94, 95,
			97, 93, 83,
			96, 95, 96,
			180, 97, 97,
			180, 98, 97,
			99, 100, 100,
			102, 101, 102,
			104, 103, 106,
			109, 105, 108,
			103, 105, 110,
			108, 109, 111,
			109, 106, 94,
			101, 103, 94,
			108, 110, 92,
			110, 113, 110,
			111, 114, 113,
			116, 115, 114,
			206, 116, 117,
			206, 114, 111,
			112, 118, 112,
			122, 119, 120,
			117, 118, 112,
			106, 121, 122,
			121, 123, 124,
			127, 119, 125,
			127, 124, 123,
			136, 126, 120,
			119, 127, 125,
			130, 128, 129,
			133, 130, 129,
			125, 126, 132,
			225, 133, 132,
			129, 131, 131,
			137, 135, 136,
			137, 131, 137,
			139, 138, 136,
			142, 139, 140,
			142, 136, 141,
			143, 142, 143,
			148, 139, 144,
			147, 145, 147,
			138, 148, 149,
			135, 138, 149,
			147, 144, 150,
			144, 151, 144,
			146, 153, 151,
			155, 154, 153,
			156, 155, 156,
			158, 157, 160,
			157, 159, 162,
			160, 161, 154,
			155, 157, 154,
			160, 162, 164,
			162, 165, 162,
			163, 167, 165,
			169, 168, 167,
			252, 169, 170,
			183, 171, 170,
			172, 173, 173,
			176, 175, 176,
			178, 177, 180,
			177, 179, 96,
			175, 177, 174,
			175, 96, 86,
			170, 174, 181,
			183, 170, 181,
			186, 182, 183,
			182, 184, 185,
			187, 182, 188,
			184, 187, 190,
			188, 189, 191,
			189, 192, 192,
			189, 187, 193,
			192, 194, 192,
			185, 196, 196,
			185, 186, 198,
			199, 196, 199,
			201, 194, 199,
			202, 200, 198,
			204, 202, 87,
			198, 197, 115,
			204, 198, 115,
			116, 203, 204,
			203, 205, 206,
			207, 203, 200,
			202, 205, 208,
			205, 207, 200,
			208, 210, 210,
			208, 209, 201,
			200, 211, 213,
			211, 214, 211,
			210, 216, 214,
			218, 217, 216,
			220, 218, 219,
			221, 220, 216,
			210, 212, 130,
			221, 219, 212,
			120, 128, 212,
			209, 117, 221,
			223, 222, 130,
			133, 223, 225,
			224, 223, 226,
			222, 224, 228,
			227, 224, 228,
			225, 132, 230,
			227, 228, 231,
			228, 229, 233,
			232, 229, 229,
			132, 134, 234,
			149, 150, 134,
			135, 149, 233,
			150, 152, 235,
			236, 232, 235,
			164, 166, 152,
			154, 164, 236,
			237, 231, 166,
			168, 237, 168,
			254, 238, 237,
			238, 230, 238,
			241, 239, 238,
			254, 240, 239,
			226, 227, 218,
			226, 239, 241,
			242, 217, 242,
			244, 215, 242,
			245, 243, 241,
			240, 245, 245,
			248, 246, 245,
			240, 247, 246,
			248, 249, 248,
			247, 251, 252,
			251, 253, 168,
			169, 253, 254,
			253, 247, 246,
			250, 190, 243,
			246, 191, 244,
			243, 193, 215,
			244, 195, 201,
			213, 195, 218,
			220, 222, 117,
			209, 207, 197,
			186, 181, 255,
			256, 141, 121,
			255, 140, 106,
			107, 255,
		},
	},
	{
		.name = "BLUE-ORANGE_Cube.024",
		.colors = { game::BLUE, game::ORANGE },
		.vertices = { // 258 vertex
			VertexData{
				.position = { -2.94f, +0.97f, +1.09f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, +0.94f, +1.09f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, +0.94f, +1.04f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +0.91f, +1.09f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -3.00f, +0.87f, +1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +0.91f, +1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, +0.94f, +2.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -3.00f, +0.87f, +2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +0.91f, +2.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.87f, -0.87f, +3.00f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -3.00f, -0.87f, +1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +0.87f, +1.09f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -3.00f, -0.87f, +2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -0.91f, +1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -0.87f, +2.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -0.91f, +2.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -0.87f, +1.09f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -0.91f, +2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, -0.94f, +2.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, -0.95f, +2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.95f, -0.98f, +1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, -0.91f, +1.06f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, -0.91f, +1.09f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, -0.97f, +1.09f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, -0.91f, +1.03f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, -0.94f, +1.04f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, -0.87f, +1.05f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.95f, -0.87f, +1.02f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.91f, -0.99f, +1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, -0.91f, +2.94f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, -0.87f, +2.95f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, -0.91f, +2.97f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.96f, +0.94f, +2.94f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, +0.96f, +2.94f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +0.91f, +2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, +0.95f, +1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.95f, -0.98f, +2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.91f, -0.91f, +1.01f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, +0.87f, +2.95f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, -0.87f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.96f, -0.94f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.95f, -0.87f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.94f, -0.91f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.91f, -0.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.91f, -0.87f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.87f, -0.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.87f, -0.95f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.91f, -0.94f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.13f, +0.87f, +1.00f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.87f, -0.98f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.13f, -0.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.09f, -0.87f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.09f, -0.94f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.06f, -0.91f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.05f, -0.87f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.03f, -0.91f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.13f, -0.87f, +3.00f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.09f, +0.87f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.13f, +0.87f, +3.00f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.09f, +0.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.06f, +0.91f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.87f, +0.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.05f, +0.87f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.03f, +0.91f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.02f, +0.87f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.02f, -0.87f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.06f, +0.96f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.09f, +0.94f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.91f, +0.97f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.87f, +0.87f, +3.00f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.91f, +0.94f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.91f, +0.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.91f, +0.87f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.94f, +0.94f, +2.96f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.97f, +0.91f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.95f, +0.87f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.98f, +0.87f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.96f, +0.94f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.94f, +0.96f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.13f, +0.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.97f, -0.91f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.13f, -0.98f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.01f, -0.87f, +2.91f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.06f, +0.94f, +2.96f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.94f, +0.91f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.91f, -0.99f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -0.97f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -1.00f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -1.00f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -0.99f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -0.99f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -0.99f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -1.00f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -0.99f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -0.99f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -0.99f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -0.99f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -0.98f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -0.99f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -0.98f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -0.97f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -0.95f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -0.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -0.94f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -0.87f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -0.87f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -0.94f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.70f, -0.14f, +0.70f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -0.87f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -0.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -0.91f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, -0.91f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -0.96f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -0.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -0.97f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, -0.87f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -0.94f, +1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.04f, -0.94f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, -0.94f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -0.97f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, -0.98f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, -0.95f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, -0.98f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -0.91f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, -0.87f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -0.97f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, -0.94f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -0.96f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, -0.95f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -0.91f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, -0.87f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -0.91f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.04f, +0.94f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, +0.87f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -0.87f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, +0.87f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +0.91f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +0.91f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +0.87f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +0.87f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +0.91f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, +0.94f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, +0.95f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, +0.98f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, +0.95f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, +0.98f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, +0.94f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.04f, +0.94f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, +0.91f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +0.97f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +0.99f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +0.91f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +0.91f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +0.94f, +1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, +0.87f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, +0.87f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +0.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +0.94f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +0.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +0.97f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +0.87f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, -0.87f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +0.96f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +0.95f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +0.99f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +0.98f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +0.98f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +0.99f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +0.97f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +0.94f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, +0.98f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +0.95f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +0.87f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +0.87f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +0.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +0.91f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, +0.91f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +0.96f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +0.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -0.99f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, +0.87f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +0.94f, +1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.96f, +0.94f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, +0.94f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +0.99f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.98f, +0.95f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +0.99f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.99f, +0.91f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, +0.98f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +0.99f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +0.97f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, +0.94f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +0.98f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.98f, +0.95f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.98f, -0.95f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, -0.98f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, -0.94f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, -0.98f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, -0.94f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.96f, -0.94f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -0.97f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.98f, +0.87f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -0.94f, +1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -0.87f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -0.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, -0.87f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -0.96f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.99f, -0.91f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -0.95f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -0.96f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -0.97f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, -0.99f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, -0.91f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -0.95f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -0.94f, +2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.96f, -0.94f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, -0.98f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -0.95f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -0.97f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -0.98f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, -0.91f, +2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.04f, -0.94f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -0.99f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -0.91f, +2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -0.91f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, -0.94f, +2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, -0.87f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, -0.91f, +2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, -0.91f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, -0.87f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, +0.91f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +0.94f, +2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, -0.87f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +0.97f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +0.96f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +0.99f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +0.91f, +2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +0.97f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +0.99f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +1.00f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +0.95f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +0.99f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +0.99f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +1.00f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +1.00f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +1.00f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +0.99f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +0.99f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +0.95f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +0.94f, +2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +0.91f, +2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +0.97f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.99f, +0.91f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.99f, +0.87f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, +0.91f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +0.96f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +0.98f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, -0.91f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},

		},

		.indices = { // 1284 values
			0, 1, 2, 3,
			0, 4, 5,
			6, 7, 3,
			7, 6, 4,
			8, 7, 9,
			7, 8, 4,
			10, 11, 12,
			11, 10, 8,
			13, 14, 15,
			13, 16, 12,
			16, 13, 9,
			14, 17, 15,
			17, 14, 18,
			19, 15, 18,
			16, 20, 21,
			20, 16, 21,
			22, 23, 24,
			21, 12, 25,
			26, 24, 27,
			22, 26, 24,
			10, 28, 0,
			28, 10, 19,
			29, 30, 19,
			31, 17, 32,
			5, 9, 5,
			33, 34, 32,
			17, 31, 0,
			35, 1, 3,
			35, 0, 5,
			34, 6, 3,
			4, 7, 4,
			11, 8, 9,
			5, 7, 4,
			0, 10, 12,
			13, 11, 8,
			11, 13, 15,
			14, 13, 12,
			21, 16, 9,
			8, 14, 15,
			19, 17, 18,
			36, 19, 18,
			15, 16, 21,
			23, 20, 21,
			26, 22, 24,
			26, 21, 25,
			27, 26, 27,
			37, 22, 24,
			12, 10, 0,
			2, 28, 19,
			36, 29, 19,
			30, 31, 32,
			38, 5, 5,
			38, 33, 32,
			9, 17, 39,
			40, 41, 42,
			41, 43, 43,
			44, 45, 44,
			40, 46, 45,
			47, 48, 44,
			49, 47, 50,
			47, 49, 50,
			51, 52, 51,
			53, 54, 51,
			55, 56, 52,
			56, 57, 57,
			58, 59, 56,
			60, 58, 58,
			61, 59, 60,
			62, 58, 63,
			64, 60, 55,
			63, 60, 65,
			66, 64, 62,
			67, 61, 68,
			61, 67, 69,
			59, 61, 69,
			70, 71, 68,
			72, 69, 72,
			73, 70, 72,
			74, 75, 73,
			76, 77, 75,
			78, 76, 73,
			42, 43, 70,
			43, 45, 71,
			45, 48, 59,
			48, 57, 52,
			48, 47, 62,
			66, 79, 39,
			80, 40, 42,
			39, 41, 43,
			41, 44, 44,
			41, 40, 45,
			44, 47, 44,
			46, 49, 50,
			52, 47, 50,
			81, 51, 51,
			81, 53, 51,
			54, 55, 52,
			51, 56, 57,
			56, 58, 56,
			55, 60, 58,
			62, 61, 60,
			64, 62, 63,
			65, 64, 55,
			82, 63, 65,
			83, 66, 62,
			79, 67, 68,
			69, 61, 69,
			71, 59, 69,
			72, 70, 68,
			84, 72, 72,
			75, 73, 72,
			84, 74, 73,
			75, 76, 75,
			74, 78, 73,
			77, 42, 70,
			73, 43, 71,
			70, 45, 59,
			71, 48, 52,
			57, 48, 62,
			64, 66, 85,
			86, 87, 88,
			89, 85, 90,
			88, 85, 91,
			85, 87, 92,
			93, 90, 90,
			94, 92, 95,
			94, 91, 87,
			95, 91, 96,
			97, 95, 98,
			96, 95, 86,
			98, 87, 99,
			100, 98, 100,
			101, 102, 100,
			103, 96, 102,
			104, 103, 102,
			105, 106, 103,
			107, 96, 108,
			103, 104, 106,
			109, 104, 110,
			104, 109, 111,
			108, 110, 108,
			112, 113, 114,
			115, 111, 116,
			112, 115, 113,
			117, 107, 117,
			112, 118, 119,
			118, 116, 120,
			118, 121, 122,
			121, 123, 123,
			119, 124, 97,
			117, 120, 97,
			122, 94, 94,
			125, 92, 122,
			126, 125, 125,
			127, 92, 126,
			128, 125, 129,
			126, 130, 123,
			130, 126, 124,
			131, 130, 132,
			130, 131, 124,
			133, 134, 134,
			135, 136, 136,
			131, 134, 137,
			136, 138, 135,
			138, 136, 132,
			139, 140, 137,
			140, 139, 141,
			142, 137, 141,
			138, 143, 144,
			145, 141, 144,
			143, 146, 143,
			147, 146, 148,
			143, 138, 149,
			150, 147, 148,
			151, 149, 152,
			148, 135, 153,
			154, 152, 155,
			151, 154, 156,
			153, 157, 156,
			158, 155, 159,
			156, 160, 160,
			157, 161, 162,
			163, 159, 164,
			158, 163, 165,
			150, 164, 165,
			162, 166, 150,
			151, 158, 166,
			167, 168, 162,
			169, 167, 167,
			170, 168, 169,
			171, 167, 172,
			169, 173, 159,
			173, 169, 160,
			174, 173, 175,
			173, 174, 176,
			172, 175, 172,
			177, 178, 179,
			180, 176, 181,
			177, 180, 178,
			182, 171, 182,
			177, 183, 184,
			183, 185, 186,
			185, 187, 170,
			182, 184, 170,
			186, 188, 188,
			189, 190, 186,
			191, 189, 189,
			192, 190, 191,
			193, 189, 194,
			195, 196, 194,
			197, 198, 197,
			199, 198, 200,
			201, 199, 105,
			202, 203, 105,
			204, 205, 106,
			203, 206, 206,
			175, 174, 203,
			176, 175, 174,
			109, 206, 201,
			207, 204, 208,
			204, 101, 99,
			201, 208, 202,
			179, 176, 198,
			99, 86, 89,
			198, 86, 209,
			194, 89, 209,
			210, 211, 211,
			212, 195, 213,
			210, 214, 210,
			215, 212, 216,
			214, 217, 218,
			216, 217, 218,
			219, 220, 93,
			217, 88, 127,
			218, 93, 127,
			221, 222, 222,
			223, 219, 224,
			221, 128, 221,
			225, 223, 226,
			225, 227, 228,
			227, 229, 142,
			230, 140, 229,
			140, 230, 229,
			129, 132, 142,
			231, 232, 233,
			234, 231, 235,
			231, 145, 236,
			233, 237, 238,
			233, 235, 238,
			144, 239, 240,
			238, 241, 241,
			239, 242, 242,
			243, 244, 239,
			146, 243, 243,
			166, 244, 146,
			165, 243, 245,
			166, 168, 245,
			242, 244, 245,
			190, 246, 168,
			188, 245, 246,
			241, 242, 190,
			247, 246, 192,
			248, 247, 247,
			240, 241, 248,
			249, 240, 248,
			250, 251, 249,
			237, 240, 252,
			253, 193, 254,
			253, 255, 192,
			253, 256, 256,
			254, 250, 129,
			225, 224, 217,
			209, 88, 110,
			161, 157, 111,
			157, 153, 152,
			111, 153, 133,
			152, 135, 119,
			114, 133, 85,
			89, 86, 88,
			209, 89, 90,
			93, 88, 91,
			90, 85, 92,
			127, 93, 90,
			91, 94, 95,
			97, 94, 87,
			98, 95, 96,
			107, 97, 98,
			100, 96, 86,
			99, 98, 99,
			208, 100, 100,
			208, 101, 100,
			102, 103, 102,
			106, 104, 102,
			101, 105, 103,
			113, 107, 108,
			113, 103, 106,
			206, 109, 110,
			108, 104, 111,
			115, 108, 108,
			115, 112, 114,
			116, 115, 116,
			118, 112, 113,
			112, 117, 119,
			121, 118, 120,
			117, 118, 122,
			120, 121, 123,
			121, 119, 97,
			107, 117, 97,
			120, 122, 94,
			122, 125, 122,
			123, 126, 125,
			128, 127, 126,
			224, 128, 129,
			224, 126, 123,
			124, 130, 124,
			134, 131, 132,
			129, 130, 124,
			119, 133, 134,
			133, 135, 136,
			139, 131, 137,
			139, 136, 135,
			148, 138, 132,
			131, 139, 137,
			142, 140, 141,
			145, 142, 141,
			137, 138, 144,
			235, 145, 144,
			141, 143, 143,
			149, 147, 148,
			149, 143, 149,
			151, 150, 148,
			154, 151, 152,
			154, 148, 153,
			155, 154, 155,
			158, 151, 156,
			155, 153, 156,
			163, 158, 159,
			163, 156, 160,
			156, 157, 162,
			164, 163, 164,
			150, 158, 165,
			147, 150, 165,
			164, 162, 166,
			162, 167, 162,
			159, 169, 167,
			171, 170, 169,
			178, 171, 172,
			178, 169, 159,
			160, 173, 160,
			161, 174, 175,
			172, 173, 176,
			180, 172, 172,
			180, 177, 179,
			181, 180, 181,
			183, 177, 178,
			177, 182, 184,
			182, 183, 186,
			184, 185, 170,
			171, 182, 170,
			184, 186, 188,
			186, 189, 186,
			187, 191, 189,
			193, 192, 191,
			252, 193, 194,
			211, 195, 194,
			196, 197, 197,
			200, 199, 200,
			207, 201, 105,
			205, 202, 105,
			101, 204, 106,
			105, 203, 206,
			203, 175, 203,
			202, 176, 174,
			161, 109, 208,
			201, 204, 99,
			199, 201, 202,
			257, 179, 198,
			199, 99, 89,
			194, 198, 209,
			211, 194, 209,
			214, 210, 211,
			210, 212, 213,
			215, 210, 216,
			213, 214, 218,
			220, 216, 218,
			222, 219, 93,
			218, 217, 127,
			222, 218, 127,
			128, 221, 222,
			221, 223, 224,
			225, 221, 226,
			223, 225, 228,
			226, 227, 142,
			232, 230, 229,
			132, 140, 229,
			227, 129, 142,
			145, 231, 235,
			233, 231, 236,
			234, 233, 238,
			237, 233, 238,
			235, 144, 240,
			237, 238, 241,
			238, 239, 242,
			239, 243, 239,
			144, 146, 243,
			165, 166, 146,
			147, 165, 245,
			244, 166, 245,
			246, 242, 245,
			188, 190, 168,
			170, 188, 246,
			247, 241, 190,
			192, 247, 192,
			256, 248, 247,
			248, 240, 248,
			251, 249, 248,
			256, 250, 249,
			236, 237, 252,
			255, 253, 192,
			193, 253, 256,
			253, 254, 129,
			227, 225, 217,
			214, 209, 110,
			109, 161, 111,
			110, 157, 152,
			114, 111, 133,
			114, 152, 119,
			116, 114,
		},
	},
	{
		.name = "BLUE-YELLOW_Cube.025",
		.colors = { game::BLUE, game::YELLOW },
		.vertices = { // 258 vertex
			VertexData{
				.position = { -1.02f, +2.95f, -0.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.05f, +2.98f, -0.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.03f, +2.94f, -0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.04f, +2.94f, -0.94f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.06f, +2.97f, -0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.13f, +2.99f, -0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.13f, +2.98f, -0.95f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.09f, +2.99f, -0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.06f, +2.96f, -0.94f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.87f, +2.98f, -0.95f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.87f, +2.99f, -0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.91f, +2.97f, -0.94f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.95f, +2.98f, -0.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.96f, +2.94f, -0.94f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.91f, +2.99f, -0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.91f, +2.99f, -0.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.95f, +2.98f, +0.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.91f, +2.99f, +0.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.94f, +2.97f, +0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.87f, +2.98f, +0.95f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.13f, +2.99f, +0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.09f, +2.97f, +0.94f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.09f, +2.99f, +0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.13f, +3.00f, +0.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.13f, +2.95f, +0.98f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.09f, +2.99f, +0.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.09f, +2.99f, -0.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.13f, +3.00f, -0.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.87f, +3.00f, -0.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.87f, +3.00f, +0.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.87f, +2.99f, +0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.91f, +2.99f, +0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.87f, +2.95f, +0.98f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.99f, +2.87f, +0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.13f, +2.98f, +0.95f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.03f, +2.94f, +0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.01f, +2.91f, -0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.87f, +2.95f, -0.98f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.98f, +2.95f, +0.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.06f, +2.97f, +0.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.94f, +2.97f, -0.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, +2.94f, -0.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, +2.94f, -0.96f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.91f, +2.99f, -0.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, +2.95f, -0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.91f, +2.99f, -0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +2.91f, -0.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -3.00f, +2.87f, -0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, +2.94f, +0.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.91f, +2.99f, +0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, +2.95f, +0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +2.91f, -0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -3.00f, +2.87f, +0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +2.91f, +0.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.87f, +1.13f, +1.00f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -3.00f, +1.13f, -0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +2.87f, -0.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -3.00f, +1.13f, +0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +1.09f, -0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +1.13f, +0.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +1.09f, +0.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +1.13f, -0.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +1.09f, +0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, +1.06f, +0.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, +1.05f, +0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.95f, +1.02f, -0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, +1.09f, -0.94f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +1.09f, -0.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, +1.03f, -0.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, +1.09f, -0.97f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, +1.06f, -0.96f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, +1.13f, -0.95f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.95f, +1.13f, -0.98f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.91f, +1.01f, -0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, +1.09f, +0.94f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, +1.13f, +0.95f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, +1.09f, +0.97f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.96f, +2.94f, +0.94f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, +2.96f, +0.94f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +2.91f, +0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +2.87f, +0.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.96f, +2.94f, -0.94f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.95f, +1.02f, +0.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.91f, +1.09f, -0.99f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, +2.87f, +0.95f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.91f, +1.01f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +1.03f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +1.00f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +1.00f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +1.01f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +1.01f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +1.01f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +1.00f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +1.01f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +1.01f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +1.01f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +1.01f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +1.02f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +1.01f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +1.02f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +1.03f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +1.05f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +1.09f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +1.06f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +1.13f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +1.13f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +1.06f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.97f, -0.17f, -0.17f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +1.13f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +1.09f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +1.09f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, +1.09f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +1.04f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +1.09f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +1.03f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, +1.13f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +1.06f, -0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.04f, +1.06f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, +1.06f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +1.03f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, +1.02f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, +1.05f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, +1.02f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +1.09f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, +1.13f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +1.03f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, +1.06f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +1.04f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, +1.05f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +1.09f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, +1.13f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +1.09f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.04f, +2.94f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, +2.87f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +1.13f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, +2.87f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +2.91f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +2.91f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +2.87f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +2.87f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +2.91f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, +2.94f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, +2.95f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, +2.98f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, +2.95f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, +2.98f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, +2.91f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +2.91f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +2.97f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +2.91f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +2.94f, -0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, +2.87f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, +2.87f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +2.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +2.94f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +2.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +2.97f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +2.87f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, +1.13f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +2.96f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +2.95f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +2.99f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +2.99f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +2.94f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +2.99f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +2.95f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +2.87f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +2.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +2.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +2.91f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, +2.91f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +2.96f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +2.91f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +1.01f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, +2.87f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +2.94f, -0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.96f, +2.94f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, +2.94f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.98f, +1.05f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, +1.02f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, +1.06f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, +1.02f, -0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, +1.06f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.96f, +1.06f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +1.03f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.98f, +2.87f, -0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +1.06f, -0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +1.13f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +1.09f, -0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, +1.13f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +1.04f, -0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.99f, +1.09f, -0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +1.05f, -0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +1.04f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +1.03f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +1.01f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, +1.09f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +1.05f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +1.06f, +0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.96f, +1.06f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.98f, +1.13f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, +1.13f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +1.09f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +1.09f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +1.13f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +1.09f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +1.06f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +2.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +1.02f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +1.05f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +1.03f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +1.09f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +1.13f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +1.06f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +1.02f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.04f, +1.06f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +1.01f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +1.09f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +1.09f, +0.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +1.06f, +0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, +1.13f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +1.09f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, +1.09f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +1.13f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +1.13f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +2.87f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +2.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +2.87f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +2.91f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +2.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, +2.87f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, +2.91f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, +2.87f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, +1.13f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +2.96f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +2.94f, +0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +2.97f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +2.99f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +2.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +2.97f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +2.95f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +2.94f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +2.95f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +2.91f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +2.97f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +2.87f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +2.94f, +0.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +2.91f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +2.87f, +0.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +2.94f, +0.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, +2.91f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, +2.87f, +0.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.98f, +2.87f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.96f, +2.94f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +2.96f, +0.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.99f, +2.87f, +0.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +2.98f, +0.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +1.09f, -0.97f },
				.color = colors.at(game::DEFAULT)
			},

		},

		.indices = { // 1284 values
			0, 1, 2, 1,
			3, 2, 4,
			5, 3, 6,
			5, 7, 6,
			8, 9, 9,
			10, 11, 10,
			12, 11, 12,
			13, 14, 12,
			15, 16, 16,
			17, 18, 17,
			19, 18, 20,
			21, 22, 20,
			0, 23, 24,
			20, 25, 25,
			23, 26, 26,
			27, 28, 23,
			2, 27, 27,
			9, 28, 2,
			6, 27, 28,
			11, 29, 29,
			26, 28, 29,
			18, 30, 11,
			16, 29, 30,
			25, 26, 18,
			31, 30, 19,
			32, 31, 31,
			24, 25, 19,
			33, 34, 0,
			35, 1, 1,
			4, 3, 4,
			36, 5, 6,
			3, 5, 6,
			7, 8, 9,
			8, 10, 10,
			37, 12, 12,
			37, 13, 12,
			14, 15, 16,
			15, 17, 17,
			38, 19, 20,
			39, 21, 20,
			22, 0, 24,
			39, 20, 25,
			20, 23, 26,
			23, 27, 23,
			0, 2, 27,
			6, 9, 2,
			3, 6, 28,
			9, 11, 29,
			30, 26, 29,
			16, 18, 11,
			12, 16, 30,
			31, 25, 18,
			19, 31, 19,
			34, 32, 31,
			32, 24, 19,
			38, 33, 40,
			41, 42, 43,
			41, 44, 45,
			44, 46, 46,
			40, 47, 45,
			48, 49, 48,
			50, 49, 51,
			48, 52, 46,
			52, 48, 47,
			53, 52, 54,
			52, 53, 47,
			55, 56, 57,
			56, 55, 53,
			58, 59, 60,
			58, 61, 57,
			61, 58, 54,
			59, 62, 60,
			62, 59, 63,
			64, 60, 63,
			61, 65, 66,
			65, 61, 66,
			67, 68, 69,
			66, 57, 70,
			71, 69, 72,
			67, 71, 69,
			55, 73, 40,
			73, 55, 64,
			74, 75, 64,
			76, 62, 77,
			51, 54, 51,
			78, 79, 79,
			80, 50, 77,
			62, 76, 40,
			44, 41, 43,
			81, 41, 45,
			43, 44, 46,
			44, 40, 45,
			46, 48, 48,
			79, 50, 51,
			79, 48, 46,
			47, 52, 47,
			56, 53, 54,
			51, 52, 47,
			40, 55, 57,
			58, 56, 53,
			56, 58, 60,
			59, 58, 57,
			66, 61, 54,
			53, 59, 60,
			64, 62, 63,
			82, 64, 63,
			60, 61, 66,
			68, 65, 66,
			71, 67, 69,
			71, 66, 70,
			72, 71, 72,
			83, 67, 69,
			57, 55, 40,
			42, 73, 64,
			82, 74, 64,
			75, 76, 77,
			84, 51, 51,
			84, 78, 79,
			78, 80, 77,
			54, 62, 85,
			86, 87, 88,
			89, 85, 90,
			88, 85, 91,
			85, 87, 92,
			93, 90, 91,
			92, 90, 94,
			95, 91, 87,
			94, 91, 96,
			97, 94, 98,
			96, 94, 86,
			98, 87, 99,
			100, 98, 100,
			101, 102, 100,
			103, 96, 102,
			104, 103, 102,
			105, 106, 103,
			107, 96, 108,
			103, 104, 106,
			109, 104, 110,
			104, 109, 111,
			108, 110, 108,
			112, 113, 114,
			115, 111, 116,
			112, 115, 113,
			117, 107, 117,
			112, 118, 119,
			118, 116, 120,
			118, 121, 122,
			121, 123, 123,
			119, 124, 97,
			117, 120, 97,
			122, 95, 95,
			125, 92, 122,
			126, 125, 125,
			127, 92, 126,
			128, 125, 129,
			126, 130, 123,
			130, 126, 124,
			131, 130, 132,
			130, 131, 124,
			133, 134, 134,
			135, 136, 136,
			131, 134, 137,
			136, 138, 135,
			138, 136, 132,
			139, 140, 137,
			140, 139, 141,
			142, 137, 141,
			138, 143, 144,
			145, 141, 146,
			143, 138, 146,
			147, 148, 149,
			146, 135, 150,
			151, 149, 152,
			147, 151, 153,
			150, 154, 153,
			155, 152, 156,
			153, 157, 157,
			154, 158, 159,
			160, 156, 161,
			155, 160, 162,
			147, 155, 159,
			163, 164, 163,
			165, 164, 166,
			163, 167, 156,
			167, 163, 157,
			168, 167, 169,
			167, 168, 170,
			166, 169, 166,
			171, 172, 173,
			174, 170, 175,
			171, 174, 172,
			176, 165, 176,
			171, 177, 178,
			179, 180, 178,
			181, 182, 181,
			183, 182, 184,
			185, 183, 105,
			186, 187, 105,
			188, 189, 106,
			187, 190, 168,
			187, 169, 187,
			170, 169, 168,
			109, 190, 185,
			191, 188, 192,
			188, 101, 99,
			185, 192, 186,
			173, 170, 182,
			99, 86, 89,
			182, 86, 193,
			178, 89, 193,
			194, 195, 195,
			196, 179, 197,
			194, 198, 194,
			199, 196, 200,
			199, 201, 202,
			201, 203, 203,
			204, 205, 204,
			199, 197, 205,
			206, 207, 204,
			208, 206, 208,
			198, 209, 210,
			208, 209, 211,
			206, 208, 211,
			212, 213, 210,
			214, 211, 93,
			209, 88, 127,
			210, 93, 127,
			215, 216, 216,
			217, 214, 218,
			215, 128, 215,
			219, 217, 212,
			217, 220, 220,
			219, 221, 212,
			222, 223, 222,
			221, 224, 213,
			223, 225, 226,
			223, 227, 223,
			228, 227, 227,
			229, 226, 228,
			230, 227, 231,
			232, 228, 222,
			231, 228, 142,
			231, 140, 224,
			140, 231, 224,
			129, 132, 233,
			234, 232, 142,
			235, 233, 236,
			234, 235, 237,
			235, 145, 238,
			236, 239, 240,
			241, 242, 240,
			243, 244, 241,
			239, 242, 230,
			241, 229, 244,
			229, 241, 245,
			226, 229, 245,
			246, 247, 244,
			248, 245, 248,
			249, 246, 248,
			250, 251, 249,
			252, 253, 251,
			254, 252, 250,
			255, 254, 256,
			250, 243, 249,
			202, 203, 246,
			203, 205, 247,
			205, 207, 226,
			207, 225, 213,
			207, 206, 230,
			234, 238, 129,
			219, 218, 209,
			193, 88, 110,
			158, 154, 111,
			154, 150, 114,
			150, 149, 133,
			149, 135, 119,
			114, 133, 85,
			89, 86, 88,
			193, 89, 90,
			93, 88, 91,
			90, 85, 92,
			127, 93, 91,
			95, 92, 94,
			97, 95, 87,
			98, 94, 96,
			107, 97, 98,
			100, 96, 86,
			99, 98, 99,
			192, 100, 100,
			192, 101, 100,
			102, 103, 102,
			106, 104, 102,
			101, 105, 103,
			113, 107, 108,
			113, 103, 106,
			190, 109, 110,
			108, 104, 111,
			115, 108, 108,
			115, 112, 114,
			116, 115, 116,
			118, 112, 113,
			112, 117, 119,
			121, 118, 120,
			117, 118, 122,
			120, 121, 123,
			121, 119, 97,
			107, 117, 97,
			120, 122, 95,
			122, 125, 122,
			123, 126, 125,
			128, 127, 126,
			218, 128, 129,
			218, 126, 123,
			124, 130, 124,
			134, 131, 132,
			129, 130, 124,
			119, 133, 134,
			133, 135, 136,
			139, 131, 137,
			139, 136, 135,
			146, 138, 132,
			131, 139, 137,
			142, 140, 141,
			145, 142, 141,
			137, 138, 144,
			237, 145, 146,
			148, 143, 146,
			151, 147, 149,
			151, 146, 150,
			152, 151, 152,
			155, 147, 153,
			152, 150, 153,
			160, 155, 156,
			160, 153, 157,
			153, 154, 159,
			161, 160, 161,
			162, 155, 159,
			156, 163, 163,
			172, 165, 166,
			172, 163, 156,
			157, 167, 157,
			158, 168, 169,
			166, 167, 170,
			174, 166, 166,
			174, 171, 173,
			175, 174, 175,
			177, 171, 172,
			171, 176, 178,
			195, 179, 178,
			180, 181, 181,
			184, 183, 184,
			191, 185, 105,
			189, 186, 105,
			101, 188, 106,
			105, 187, 168,
			190, 187, 187,
			186, 170, 168,
			158, 109, 192,
			185, 188, 99,
			183, 185, 186,
			257, 173, 182,
			183, 99, 89,
			178, 182, 193,
			195, 178, 193,
			198, 194, 195,
			194, 196, 197,
			199, 194, 200,
			196, 199, 202,
			200, 201, 203,
			201, 204, 204,
			201, 199, 205,
			204, 206, 204,
			197, 208, 208,
			197, 198, 210,
			211, 208, 211,
			213, 206, 211,
			214, 212, 210,
			216, 214, 93,
			210, 209, 127,
			216, 210, 127,
			128, 215, 216,
			215, 217, 218,
			219, 215, 212,
			214, 217, 220,
			217, 219, 212,
			220, 222, 222,
			220, 221, 213,
			212, 223, 226,
			225, 223, 223,
			222, 228, 227,
			230, 229, 228,
			232, 230, 231,
			233, 232, 222,
			224, 231, 142,
			233, 231, 224,
			132, 140, 224,
			221, 129, 233,
			235, 234, 142,
			145, 235, 237,
			236, 235, 238,
			234, 236, 240,
			244, 241, 240,
			256, 243, 241,
			238, 239, 230,
			238, 241, 244,
			245, 229, 245,
			247, 226, 245,
			248, 246, 244,
			243, 248, 248,
			251, 249, 248,
			243, 250, 249,
			251, 252, 251,
			250, 254, 256,
			255, 250, 249,
			253, 202, 246,
			249, 203, 247,
			246, 205, 226,
			247, 207, 213,
			225, 207, 230,
			232, 234, 129,
			221, 219, 209,
			198, 193, 110,
			109, 158, 111,
			110, 154, 114,
			111, 150, 133,
			114, 149, 119,
			116, 114,
		},
	},
	{
		.name = "BLUE-YELLOW-RED_Cube.026",
		.colors = { game::RED, game::BLUE, game::YELLOW },
		.vertices = { // 272 vertex
			VertexData{
				.position = { -1.02f, +2.95f, -2.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.05f, +2.98f, -2.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.03f, +2.94f, -2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.04f, +2.94f, -2.94f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.06f, +2.97f, -2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.13f, +2.99f, -2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.13f, +2.98f, -2.95f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.09f, +2.99f, -2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.06f, +2.96f, -2.94f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.87f, +2.98f, -2.95f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.87f, +2.99f, -2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.91f, +2.97f, -2.94f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.95f, +2.98f, -2.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.96f, +2.94f, -2.94f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.91f, +2.99f, -2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.91f, +2.99f, -2.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.95f, +2.98f, -1.13f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.91f, +2.99f, -1.13f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.94f, +2.97f, -1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.87f, +2.98f, -1.05f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.13f, +2.99f, -1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.09f, +2.97f, -1.06f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.09f, +2.99f, -1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.13f, +3.00f, -1.13f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.13f, +2.95f, -1.02f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.09f, +2.99f, -1.13f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.09f, +2.99f, -2.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.87f, +3.00f, -2.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.13f, +3.00f, -2.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.87f, +3.00f, -1.13f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.87f, +2.99f, -1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.91f, +2.99f, -1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.87f, +2.95f, -1.02f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.99f, +2.87f, -1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.13f, +2.98f, -1.05f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.03f, +2.94f, -1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.01f, +2.91f, -2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.87f, +2.95f, -2.98f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.98f, +2.95f, -1.13f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.06f, +2.97f, -1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.94f, +2.97f, -2.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, +2.94f, -2.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, +2.94f, -2.96f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.91f, +2.99f, -2.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, +2.95f, -2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.91f, +2.99f, -2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +2.91f, -2.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -3.00f, +2.87f, -2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.91f, +2.99f, -1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, +2.94f, -1.09f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, +2.95f, -1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +2.91f, -2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -3.00f, +2.87f, -1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +2.91f, -1.09f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.87f, +1.13f, -1.00f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -3.00f, +1.13f, -2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +2.87f, -2.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -3.00f, +1.13f, -1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +1.09f, -2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +1.13f, -1.09f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +1.09f, -1.09f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +1.13f, -2.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +1.09f, -1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, +1.06f, -1.09f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, +1.05f, -1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.95f, +1.02f, -2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, +1.09f, -2.94f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +1.09f, -2.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, +1.03f, -2.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, +1.09f, -2.97f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, +1.06f, -2.96f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, +1.13f, -2.95f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.95f, +1.13f, -2.98f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.91f, +1.01f, -2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, +1.09f, -1.06f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, +1.13f, -1.05f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, +1.09f, -1.03f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.96f, +2.94f, -1.06f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, +2.96f, -1.06f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +2.91f, -1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +2.87f, -1.09f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.96f, +2.94f, -2.94f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.95f, +1.02f, -1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.91f, +1.09f, -2.99f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, +2.87f, -1.05f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.87f, +1.09f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.13f, +1.13f, -3.00f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.09f, +1.06f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.91f, +1.13f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.91f, +1.06f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.09f, +1.13f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.09f, +1.09f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.06f, +1.09f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.03f, +1.09f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.06f, +1.04f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.13f, +1.09f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.09f, +1.03f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.05f, +1.13f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.06f, +1.06f, -2.96f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.13f, +2.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.06f, +2.94f, -2.96f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.09f, +2.94f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.09f, +2.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.05f, +2.87f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.09f, +2.97f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.09f, +2.87f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.02f, +1.13f, -2.95f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.06f, +2.96f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.13f, +2.95f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.09f, +2.99f, -2.91f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.87f, +2.99f, -2.91f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.91f, +2.94f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.87f, +2.95f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.91f, +2.87f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.87f, +2.87f, -3.00f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.91f, +2.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.94f, +2.91f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.97f, +2.91f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.94f, +2.96f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.87f, +2.91f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.91f, +1.01f, -2.87f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.95f, +2.87f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.94f, +2.94f, -2.96f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.96f, +2.94f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.97f, +2.94f, -2.91f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.94f, +1.06f, -2.96f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.87f, +1.13f, -3.00f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.91f, +1.09f, -2.99f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.95f, +1.13f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.94f, +1.04f, -2.94f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.13f, +1.05f, -2.98f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.03f, +1.06f, -2.91f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.13f, +2.99f, -2.91f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -2.94f, +1.09f, -2.97f },
				.color = colors.at(game::RED)
			},
			VertexData{
				.position = { -1.13f, +1.00f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +1.01f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +1.03f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +1.00f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +1.01f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +1.01f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +1.01f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +1.00f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +1.01f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +1.01f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +1.01f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +1.01f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +1.02f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +1.01f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +1.02f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +1.03f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +1.05f, -2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +1.09f, -2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +1.06f, -2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -0.46f, -0.87f, -0.16f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +1.09f, -2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.04f, +1.06f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +1.04f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, +1.06f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +1.03f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +1.06f, -2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, +1.02f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, +1.05f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, +1.02f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +1.09f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, +1.13f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +1.03f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, +1.06f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +1.04f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, +1.05f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +1.09f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, +1.13f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +1.09f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.04f, +2.94f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, +2.87f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +1.13f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, +2.87f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +2.91f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +2.91f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +2.87f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +2.87f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +2.91f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, +2.94f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, +2.95f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, +2.98f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, +2.95f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, +2.98f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, +2.91f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +2.91f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +2.97f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +2.91f, -2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +2.94f, -2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, +2.87f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, +2.87f, -2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +2.99f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +2.91f, -2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.98f, +1.05f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, +1.02f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, +1.06f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, +1.02f, -2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, +1.06f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.96f, +1.06f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +1.03f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.98f, +2.87f, -2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.99f, +1.09f, -2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +1.09f, -2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +1.05f, -2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +1.04f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +1.03f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +1.01f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, +1.09f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +1.05f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +1.06f, -1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.96f, +1.06f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.98f, +1.13f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, +1.13f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +1.09f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +1.09f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +1.13f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +1.09f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +1.06f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +2.87f, -3.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +1.02f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +1.05f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +1.03f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +1.09f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +1.13f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +1.06f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +1.02f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.04f, +1.06f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +1.01f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +1.09f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +1.09f, -1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +1.06f, -1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, +1.13f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +1.09f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, +1.09f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +1.13f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +1.13f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +2.87f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +2.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +2.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +2.91f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +2.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, +2.87f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, +2.91f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, +2.87f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, +1.13f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +2.96f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +2.94f, -1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +2.97f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +2.99f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +2.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +2.97f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +2.95f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +2.94f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +2.95f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +2.91f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +2.97f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +2.87f, -1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +2.94f, -1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +2.91f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +2.87f, -1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +2.94f, -1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, +2.91f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, +2.87f, -1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.98f, +2.87f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.96f, +2.94f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +2.96f, -1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.99f, +2.87f, -1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +2.98f, -1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +1.03f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, +1.09f, -2.94f },
				.color = colors.at(game::DEFAULT)
			},

		},

		.indices = { // 1284 values
			0, 1, 2, 1,
			3, 2, 4,
			5, 3, 6,
			5, 7, 6,
			8, 9, 9,
			10, 11, 10,
			12, 11, 12,
			13, 14, 12,
			15, 16, 16,
			17, 18, 17,
			19, 18, 20,
			21, 22, 20,
			0, 23, 24,
			20, 25, 25,
			23, 26, 27,
			23, 28, 23,
			2, 28, 28,
			9, 27, 2,
			6, 28, 27,
			11, 29, 29,
			26, 27, 29,
			18, 30, 11,
			16, 29, 30,
			25, 26, 18,
			31, 30, 19,
			32, 31, 31,
			24, 25, 19,
			33, 34, 0,
			35, 1, 1,
			4, 3, 4,
			36, 5, 6,
			3, 5, 6,
			7, 8, 9,
			8, 10, 10,
			37, 12, 12,
			37, 13, 12,
			14, 15, 16,
			15, 17, 17,
			38, 19, 20,
			39, 21, 20,
			22, 0, 24,
			39, 20, 25,
			20, 23, 27,
			26, 23, 23,
			0, 2, 28,
			6, 9, 2,
			3, 6, 27,
			9, 11, 29,
			30, 26, 29,
			16, 18, 11,
			12, 16, 30,
			31, 25, 18,
			19, 31, 19,
			34, 32, 31,
			32, 24, 19,
			38, 33, 40,
			41, 42, 43,
			41, 44, 45,
			44, 46, 46,
			40, 47, 48,
			46, 49, 49,
			50, 48, 51,
			49, 52, 46,
			52, 49, 47,
			53, 52, 54,
			52, 53, 47,
			55, 56, 57,
			56, 55, 53,
			58, 59, 60,
			58, 61, 57,
			61, 58, 62,
			53, 59, 60,
			62, 59, 63,
			64, 60, 63,
			61, 65, 66,
			65, 61, 66,
			67, 68, 69,
			66, 57, 70,
			71, 69, 72,
			67, 71, 73,
			57, 55, 40,
			73, 55, 64,
			74, 75, 64,
			76, 62, 77,
			51, 54, 51,
			78, 79, 79,
			80, 50, 76,
			54, 62, 40,
			44, 41, 43,
			81, 41, 45,
			43, 44, 46,
			44, 40, 48,
			45, 46, 49,
			79, 50, 51,
			79, 49, 46,
			47, 52, 47,
			56, 53, 54,
			51, 52, 47,
			40, 55, 57,
			58, 56, 53,
			56, 58, 60,
			59, 58, 57,
			66, 61, 62,
			54, 53, 60,
			64, 62, 63,
			82, 64, 63,
			60, 61, 66,
			68, 65, 66,
			71, 67, 69,
			71, 66, 70,
			72, 71, 72,
			83, 67, 73,
			69, 57, 40,
			42, 73, 64,
			82, 74, 64,
			75, 76, 77,
			84, 51, 51,
			84, 78, 79,
			78, 80, 76,
			77, 54, 85,
			86, 87, 85,
			88, 89, 90,
			87, 86, 89,
			91, 86, 92,
			86, 91, 93,
			90, 92, 90,
			94, 95, 96,
			97, 93, 98,
			94, 97, 99,
			100, 101, 99,
			102, 103, 104,
			99, 105, 105,
			101, 106, 107,
			108, 104, 109,
			102, 108, 110,
			104, 111, 111,
			112, 110, 113,
			111, 114, 104,
			114, 111, 105,
			115, 114, 116,
			114, 115, 117,
			113, 116, 113,
			118, 119, 120,
			121, 117, 122,
			118, 121, 119,
			123, 112, 123,
			118, 124, 88,
			125, 126, 88,
			127, 128, 89,
			126, 129, 115,
			126, 116, 126,
			117, 116, 115,
			91, 129, 125,
			120, 117, 92,
			106, 101, 93,
			101, 100, 85,
			89, 86, 85,
			130, 88, 90,
			95, 87, 89,
			129, 91, 92,
			90, 86, 93,
			97, 90, 90,
			97, 94, 96,
			98, 97, 98,
			131, 94, 99,
			103, 100, 99,
			108, 102, 104,
			108, 99, 105,
			99, 101, 107,
			109, 108, 109,
			132, 102, 110,
			107, 104, 111,
			119, 112, 113,
			119, 111, 104,
			105, 114, 105,
			106, 115, 116,
			113, 114, 117,
			121, 113, 113,
			121, 118, 120,
			122, 121, 122,
			124, 118, 119,
			118, 123, 88,
			128, 125, 88,
			130, 127, 89,
			88, 126, 115,
			129, 126, 126,
			125, 117, 115,
			106, 91, 125,
			133, 120, 92,
			91, 106, 93,
			92, 101, 134,
			135, 136, 137,
			135, 138, 138,
			139, 137, 140,
			138, 134, 141,
			139, 142, 140,
			141, 142, 143,
			144, 140, 134,
			143, 140, 145,
			146, 143, 147,
			145, 143, 136,
			147, 134, 148,
			149, 147, 149,
			150, 151, 149,
			152, 145, 152,
			153, 145, 154,
			155, 153, 155,
			156, 157, 158,
			157, 159, 160,
			157, 161, 162,
			161, 163, 163,
			158, 164, 146,
			155, 160, 146,
			162, 144, 144,
			165, 141, 162,
			166, 165, 165,
			167, 141, 166,
			168, 165, 169,
			166, 170, 163,
			170, 166, 164,
			171, 170, 172,
			170, 171, 164,
			173, 174, 174,
			175, 176, 176,
			171, 174, 177,
			176, 178, 175,
			178, 176, 172,
			179, 180, 177,
			180, 179, 181,
			182, 177, 181,
			178, 183, 184,
			185, 181, 186,
			183, 178, 186,
			187, 188, 189,
			186, 175, 190,
			191, 189, 192,
			187, 191, 193,
			187, 194, 195,
			196, 197, 195,
			198, 199, 198,
			200, 199, 201,
			202, 200, 202,
			203, 204, 205,
			204, 150, 148,
			202, 205, 199,
			148, 136, 135,
			199, 136, 206,
			195, 135, 206,
			207, 208, 208,
			209, 196, 210,
			207, 211, 207,
			212, 209, 213,
			212, 214, 215,
			214, 216, 216,
			217, 218, 217,
			212, 210, 218,
			219, 220, 217,
			221, 219, 221,
			211, 222, 223,
			221, 222, 224,
			219, 221, 224,
			225, 226, 223,
			227, 224, 139,
			222, 137, 167,
			223, 139, 167,
			228, 229, 229,
			230, 227, 231,
			228, 168, 228,
			232, 230, 225,
			230, 233, 233,
			232, 234, 225,
			235, 236, 235,
			234, 237, 226,
			236, 238, 238,
			239, 240, 239,
			235, 241, 239,
			242, 240, 241,
			243, 239, 244,
			245, 241, 241,
			237, 244, 182,
			244, 180, 244,
			172, 180, 237,
			169, 172, 246,
			247, 245, 182,
			248, 246, 249,
			247, 248, 250,
			248, 185, 251,
			249, 252, 253,
			254, 255, 253,
			256, 257, 254,
			252, 255, 243,
			254, 242, 257,
			242, 254, 258,
			240, 242, 258,
			259, 260, 257,
			261, 258, 261,
			262, 259, 261,
			263, 264, 262,
			265, 266, 264,
			267, 265, 263,
			268, 267, 269,
			263, 256, 262,
			215, 216, 259,
			216, 218, 260,
			218, 220, 240,
			220, 238, 226,
			220, 219, 243,
			247, 251, 169,
			232, 231, 222,
			206, 137, 270,
			190, 189, 173,
			189, 175, 158,
			270, 173, 134,
			138, 135, 137,
			206, 135, 138,
			142, 139, 140,
			142, 138, 141,
			167, 139, 140,
			144, 141, 143,
			146, 144, 134,
			147, 143, 145,
			153, 146, 147,
			149, 145, 136,
			148, 147, 148,
			205, 149, 149,
			205, 150, 149,
			151, 152, 152,
			154, 153, 154,
			156, 155, 158,
			161, 157, 160,
			155, 157, 162,
			160, 161, 163,
			161, 158, 146,
			153, 155, 146,
			160, 162, 144,
			162, 165, 162,
			163, 166, 165,
			168, 167, 166,
			231, 168, 169,
			231, 166, 163,
			164, 170, 164,
			174, 171, 172,
			169, 170, 164,
			158, 173, 174,
			173, 175, 176,
			179, 171, 177,
			179, 176, 175,
			186, 178, 172,
			171, 179, 177,
			182, 180, 181,
			185, 182, 181,
			177, 178, 184,
			250, 185, 186,
			188, 183, 186,
			191, 187, 189,
			191, 186, 190,
			192, 191, 192,
			194, 187, 195,
			208, 196, 195,
			197, 198, 198,
			201, 200, 201,
			203, 202, 205,
			202, 204, 148,
			200, 202, 199,
			200, 148, 135,
			195, 199, 206,
			208, 195, 206,
			211, 207, 208,
			207, 209, 210,
			212, 207, 213,
			209, 212, 215,
			213, 214, 216,
			214, 217, 217,
			214, 212, 218,
			217, 219, 217,
			210, 221, 221,
			210, 211, 223,
			224, 221, 224,
			226, 219, 224,
			227, 225, 223,
			229, 227, 139,
			223, 222, 167,
			229, 223, 167,
			168, 228, 229,
			228, 230, 231,
			232, 228, 225,
			227, 230, 233,
			230, 232, 225,
			233, 235, 235,
			233, 234, 226,
			225, 236, 238,
			236, 239, 239,
			236, 235, 239,
			243, 242, 241,
			245, 243, 244,
			246, 245, 241,
			235, 237, 182,
			246, 244, 244,
			237, 172, 237,
			234, 169, 246,
			248, 247, 182,
			185, 248, 250,
			249, 248, 251,
			247, 249, 253,
			257, 254, 253,
			269, 256, 254,
			251, 252, 243,
			251, 254, 257,
			258, 242, 258,
			260, 240, 258,
			261, 259, 257,
			256, 261, 261,
			264, 262, 261,
			256, 263, 262,
			264, 265, 264,
			263, 267, 269,
			268, 263, 262,
			266, 215, 259,
			262, 216, 260,
			259, 218, 240,
			260, 220, 226,
			238, 220, 243,
			245, 247, 169,
			234, 232, 222,
			211, 206, 270,
			271, 190, 173,
			270, 189, 158,
			159, 270,
		},
	},
	{
		.name = "BLUE-YELLOW-ORANGE_Cube.027",
		.colors = { game::BLUE, game::YELLOW, game::ORANGE },
		.vertices = { // 273 vertex
			VertexData{
				.position = { -1.02f, +2.95f, +1.13f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.05f, +2.98f, +1.13f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.03f, +2.94f, +1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.04f, +2.94f, +1.06f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.06f, +2.97f, +1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.13f, +2.99f, +1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.13f, +2.98f, +1.05f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.09f, +2.99f, +1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.06f, +2.96f, +1.06f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.87f, +2.98f, +1.05f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.87f, +2.99f, +1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.91f, +2.97f, +1.06f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.95f, +2.98f, +1.13f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.96f, +2.94f, +1.06f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.91f, +2.99f, +1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.91f, +2.99f, +1.13f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.95f, +2.98f, +2.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.91f, +2.99f, +2.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.94f, +2.97f, +2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.87f, +2.98f, +2.95f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.13f, +2.99f, +2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.09f, +2.97f, +2.94f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.09f, +2.99f, +2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.13f, +3.00f, +2.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.13f, +2.95f, +2.98f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.09f, +2.99f, +2.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.09f, +2.99f, +1.13f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.13f, +3.00f, +1.13f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.87f, +3.00f, +1.13f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.87f, +3.00f, +2.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.87f, +2.99f, +2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.91f, +2.99f, +2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.87f, +2.95f, +2.98f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.99f, +2.87f, +2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.13f, +2.98f, +2.95f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.03f, +2.94f, +2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.01f, +2.91f, +1.09f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.87f, +2.95f, +1.02f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.98f, +2.95f, +2.87f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -1.06f, +2.97f, +2.91f },
				.color = colors.at(game::YELLOW)
			},
			VertexData{
				.position = { -2.94f, +2.97f, +1.09f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, +2.94f, +1.09f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, +2.94f, +1.04f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.91f, +2.99f, +1.09f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, +2.95f, +1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.91f, +2.99f, +1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +2.91f, +1.09f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -3.00f, +2.87f, +1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.91f, +2.99f, +2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, +2.94f, +2.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, +2.95f, +2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +2.91f, +1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -3.00f, +2.87f, +2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +2.91f, +2.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.87f, +1.13f, +3.00f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -3.00f, +1.13f, +1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +2.87f, +1.09f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -3.00f, +1.13f, +2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +1.09f, +1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +1.13f, +2.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +1.09f, +2.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +1.13f, +1.09f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +1.09f, +2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, +1.06f, +2.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, +1.05f, +2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.95f, +1.02f, +1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, +1.09f, +1.06f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +1.09f, +1.09f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, +1.03f, +1.09f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, +1.09f, +1.03f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, +1.06f, +1.04f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, +1.13f, +1.05f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.95f, +1.13f, +1.02f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.91f, +1.01f, +1.13f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.97f, +1.09f, +2.94f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, +1.13f, +2.95f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, +1.09f, +2.97f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.96f, +2.94f, +2.94f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.94f, +2.96f, +2.94f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +2.91f, +2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.99f, +2.87f, +2.91f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.96f, +2.94f, +1.06f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.95f, +1.02f, +2.87f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.91f, +1.09f, +1.01f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, +2.87f, +2.95f },
				.color = colors.at(game::BLUE)
			},
			VertexData{
				.position = { -2.98f, +1.13f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.96f, +1.06f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.95f, +1.13f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.94f, +1.09f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.91f, +1.09f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.91f, +1.13f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.87f, +1.09f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.87f, +1.05f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.91f, +1.06f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.13f, +2.87f, +1.00f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.87f, +1.02f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.13f, +1.09f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.09f, +1.13f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.09f, +1.06f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.06f, +1.09f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.05f, +1.13f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.03f, +1.09f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.13f, +1.13f, +3.00f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.09f, +2.87f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.09f, +2.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.13f, +2.87f, +3.00f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.06f, +2.91f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.87f, +2.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.05f, +2.87f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.03f, +2.91f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.02f, +2.87f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.02f, +1.13f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.06f, +2.96f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.13f, +2.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.09f, +2.97f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.06f, +2.97f, +2.91f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.87f, +2.95f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.09f, +2.94f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.13f, +2.95f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.94f, +2.91f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.91f, +2.97f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.87f, +2.87f, +3.00f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.91f, +2.94f, +2.97f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.91f, +2.91f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.91f, +2.87f, +2.99f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.94f, +2.94f, +2.96f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.97f, +2.91f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.95f, +2.87f, +2.98f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.98f, +2.87f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.96f, +2.94f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.94f, +2.96f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.99f, +2.87f, +2.91f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.13f, +2.98f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.97f, +1.09f, +2.94f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.13f, +1.02f, +2.95f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.01f, +1.13f, +2.91f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -1.06f, +2.94f, +2.96f },
				.color = colors.at(game::ORANGE)
			},
			VertexData{
				.position = { -2.91f, +1.01f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +1.03f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +1.00f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +1.00f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +1.01f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +1.01f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +1.01f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +1.00f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +1.01f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +1.01f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +1.01f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +1.01f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +1.02f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +1.01f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +1.02f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +1.03f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +1.05f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +1.09f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +1.06f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +1.13f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +1.13f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +1.06f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { +0.00f, +0.00f, +0.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +1.13f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +1.09f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +1.09f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, +1.09f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +1.04f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +1.09f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +1.03f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, +1.13f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +1.06f, +1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.04f, +1.06f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, +1.06f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +1.03f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, +1.02f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, +1.05f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, +1.02f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +1.09f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, +1.13f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +1.03f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, +1.06f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +1.04f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, +1.05f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +1.09f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, +1.13f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +1.09f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.04f, +2.94f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, +2.87f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +1.13f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.00f, +2.87f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +2.91f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +2.91f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +2.87f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +2.87f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +2.91f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, +2.94f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, +2.95f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, +2.98f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, +2.95f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, +2.98f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, +2.91f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +2.91f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +2.97f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +2.91f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +2.94f, +1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, +2.87f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, +2.87f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +2.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +2.94f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +2.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +2.97f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +2.87f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, +1.13f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +2.96f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +2.95f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +2.99f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +2.99f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +2.94f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +2.99f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +2.95f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +2.87f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +2.87f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +2.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +2.91f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, +2.91f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +2.96f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +2.91f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +1.01f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, +2.87f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +2.94f, +1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.96f, +2.94f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, +2.94f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.98f, +1.05f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, +1.02f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, +1.06f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, +1.02f, +1.13f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, +1.06f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.96f, +1.06f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +1.03f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.98f, +2.87f, +1.05f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +1.06f, +1.04f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +1.13f, +1.00f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +1.09f, +1.01f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.95f, +1.13f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +1.04f, +1.06f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.99f, +1.09f, +1.09f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +1.05f, +1.02f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +1.04f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +1.03f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.91f, +1.01f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.97f, +1.09f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +1.05f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +1.06f, +2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.96f, +1.06f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.87f, +1.02f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +1.05f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +1.03f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +1.02f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.13f, +1.09f, +2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.04f, +1.06f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +1.01f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +1.09f, +2.97f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +1.09f, +2.87f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +1.06f, +2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.05f, +1.13f, +2.98f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +1.09f, +2.99f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, +1.09f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.01f, +1.13f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.03f, +2.91f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +2.94f, +2.96f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.02f, +1.13f, +2.95f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +2.97f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.06f, +2.96f, +2.94f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -1.09f, +2.99f, +2.91f },
				.color = colors.at(game::DEFAULT)
			},
			VertexData{
				.position = { -2.94f, +1.09f, +1.03f },
				.color = colors.at(game::DEFAULT)
			},

		},

		.indices = { // 1284 values
			0, 1, 2, 1,
			3, 2, 4,
			5, 3, 6,
			5, 7, 6,
			8, 9, 9,
			10, 11, 10,
			12, 11, 12,
			13, 14, 12,
			15, 16, 16,
			17, 18, 17,
			19, 18, 20,
			21, 22, 20,
			0, 23, 24,
			20, 25, 25,
			23, 26, 26,
			27, 28, 23,
			2, 27, 27,
			9, 28, 2,
			6, 27, 29,
			9, 11, 29,
			26, 28, 29,
			18, 30, 11,
			16, 29, 30,
			25, 26, 18,
			31, 30, 19,
			32, 31, 31,
			24, 25, 19,
			33, 34, 0,
			35, 1, 1,
			4, 3, 4,
			36, 5, 6,
			3, 5, 6,
			7, 8, 9,
			8, 10, 10,
			37, 12, 12,
			37, 13, 12,
			14, 15, 16,
			15, 17, 17,
			38, 19, 20,
			39, 21, 20,
			22, 0, 24,
			39, 20, 25,
			20, 23, 26,
			23, 27, 23,
			0, 2, 27,
			6, 9, 2,
			3, 6, 29,
			28, 9, 29,
			30, 26, 29,
			16, 18, 11,
			12, 16, 30,
			31, 25, 18,
			19, 31, 19,
			34, 32, 31,
			32, 24, 19,
			38, 33, 40,
			41, 42, 43,
			41, 44, 45,
			44, 46, 46,
			40, 47, 48,
			46, 49, 49,
			50, 48, 51,
			49, 52, 46,
			52, 49, 47,
			53, 52, 54,
			52, 53, 47,
			55, 56, 57,
			56, 55, 53,
			58, 59, 60,
			58, 61, 57,
			61, 58, 62,
			53, 59, 60,
			62, 59, 63,
			64, 60, 63,
			61, 65, 66,
			65, 61, 66,
			67, 68, 69,
			66, 57, 70,
			71, 69, 72,
			67, 71, 69,
			55, 73, 40,
			73, 55, 64,
			74, 75, 64,
			76, 62, 77,
			51, 54, 51,
			78, 79, 79,
			80, 50, 76,
			54, 62, 40,
			44, 41, 43,
			81, 41, 45,
			43, 44, 46,
			44, 40, 48,
			45, 46, 49,
			79, 50, 51,
			79, 49, 46,
			47, 52, 47,
			56, 53, 54,
			51, 52, 47,
			40, 55, 57,
			58, 56, 53,
			56, 58, 60,
			59, 58, 57,
			66, 61, 62,
			54, 53, 60,
			64, 62, 63,
			82, 64, 63,
			60, 61, 66,
			68, 65, 66,
			71, 67, 69,
			71, 66, 70,
			72, 71, 72,
			83, 67, 69,
			57, 55, 40,
			42, 73, 64,
			82, 74, 64,
			75, 76, 77,
			84, 51, 51,
			84, 78, 79,
			78, 80, 76,
			77, 54, 85,
			86, 87, 88,
			87, 89, 89,
			90, 91, 90,
			86, 92, 91,
			93, 94, 90,
			95, 93, 96,
			93, 95, 96,
			97, 98, 97,
			99, 100, 97,
			101, 102, 98,
			102, 103, 104,
			102, 105, 102,
			106, 105, 105,
			107, 104, 106,
			108, 105, 109,
			110, 106, 101,
			109, 106, 111,
			112, 110, 113,
			114, 115, 116,
			117, 118, 116,
			119, 120, 117,
			115, 118, 108,
			117, 107, 120,
			107, 117, 121,
			104, 107, 121,
			122, 123, 120,
			124, 121, 124,
			125, 122, 124,
			126, 127, 125,
			128, 129, 127,
			130, 128, 126,
			131, 130, 132,
			126, 119, 125,
			88, 89, 122,
			89, 91, 123,
			91, 94, 104,
			94, 103, 98,
			94, 93, 108,
			112, 113, 85,
			133, 86, 88,
			85, 87, 89,
			87, 90, 90,
			87, 86, 91,
			90, 93, 90,
			92, 95, 96,
			98, 93, 96,
			134, 97, 97,
			134, 99, 97,
			100, 101, 98,
			97, 102, 104,
			103, 102, 102,
			101, 106, 105,
			108, 107, 106,
			110, 108, 109,
			111, 110, 101,
			135, 109, 111,
			136, 112, 113,
			112, 114, 116,
			120, 117, 116,
			132, 119, 117,
			113, 115, 108,
			113, 117, 120,
			121, 107, 121,
			123, 104, 121,
			124, 122, 120,
			119, 124, 124,
			127, 125, 124,
			119, 126, 125,
			127, 128, 127,
			126, 130, 132,
			131, 126, 125,
			129, 88, 122,
			125, 89, 123,
			122, 91, 104,
			123, 94, 98,
			103, 94, 108,
			110, 112, 137,
			138, 139, 140,
			141, 137, 137,
			142, 140, 143,
			137, 139, 144,
			142, 145, 145,
			146, 144, 147,
			146, 143, 139,
			147, 143, 148,
			149, 147, 150,
			148, 147, 138,
			150, 139, 151,
			152, 150, 152,
			153, 154, 152,
			155, 148, 154,
			156, 155, 154,
			157, 158, 155,
			159, 148, 160,
			155, 156, 158,
			161, 156, 162,
			156, 161, 163,
			160, 162, 160,
			164, 165, 166,
			167, 163, 168,
			164, 167, 165,
			169, 159, 169,
			164, 170, 171,
			170, 168, 172,
			170, 173, 174,
			173, 175, 175,
			171, 176, 149,
			169, 172, 149,
			174, 146, 146,
			177, 144, 174,
			178, 177, 177,
			179, 144, 178,
			180, 177, 181,
			178, 182, 175,
			182, 178, 176,
			183, 182, 184,
			182, 183, 176,
			185, 186, 186,
			187, 188, 188,
			183, 186, 189,
			188, 190, 187,
			190, 188, 184,
			191, 192, 189,
			192, 191, 193,
			194, 189, 193,
			190, 195, 196,
			197, 193, 198,
			195, 190, 198,
			199, 200, 201,
			198, 187, 202,
			203, 201, 204,
			199, 203, 205,
			202, 206, 205,
			207, 204, 208,
			205, 209, 209,
			206, 210, 211,
			212, 208, 213,
			207, 212, 214,
			199, 207, 211,
			215, 216, 215,
			217, 216, 218,
			215, 219, 208,
			219, 215, 209,
			220, 219, 221,
			219, 220, 222,
			218, 221, 218,
			223, 224, 225,
			226, 222, 227,
			223, 226, 224,
			228, 217, 228,
			223, 229, 230,
			231, 232, 230,
			233, 234, 233,
			235, 234, 236,
			237, 235, 157,
			238, 239, 157,
			240, 241, 158,
			239, 242, 242,
			221, 220, 239,
			222, 221, 220,
			161, 242, 237,
			243, 240, 244,
			240, 153, 151,
			237, 244, 238,
			225, 222, 234,
			151, 138, 141,
			234, 138, 245,
			230, 141, 245,
			246, 247, 247,
			248, 231, 249,
			246, 250, 246,
			251, 248, 252,
			250, 253, 254,
			252, 253, 254,
			255, 256, 142,
			253, 140, 179,
			254, 142, 179,
			257, 258, 258,
			259, 255, 260,
			257, 180, 257,
			261, 259, 262,
			261, 263, 264,
			263, 265, 194,
			266, 192, 265,
			192, 266, 265,
			181, 184, 194,
			267, 268, 269,
			270, 267, 271,
			267, 197, 181,
			261, 260, 253,
			245, 140, 162,
			210, 206, 202,
			162, 206, 201,
			163, 202, 187,
			166, 201, 171,
			166, 185, 137,
			141, 138, 140,
			245, 141, 137,
			145, 142, 143,
			145, 137, 144,
			179, 142, 145,
			143, 146, 147,
			149, 146, 139,
			150, 147, 148,
			159, 149, 150,
			152, 148, 138,
			151, 150, 151,
			244, 152, 152,
			244, 153, 152,
			154, 155, 154,
			158, 156, 154,
			153, 157, 155,
			165, 159, 160,
			165, 155, 158,
			242, 161, 162,
			160, 156, 163,
			167, 160, 160,
			167, 164, 166,
			168, 167, 168,
			170, 164, 165,
			164, 169, 171,
			173, 170, 172,
			169, 170, 174,
			172, 173, 175,
			173, 171, 149,
			159, 169, 149,
			172, 174, 146,
			174, 177, 174,
			175, 178, 177,
			180, 179, 178,
			260, 180, 181,
			260, 178, 175,
			176, 182, 176,
			186, 183, 184,
			181, 182, 176,
			171, 185, 186,
			185, 187, 188,
			191, 183, 189,
			191, 188, 187,
			198, 190, 184,
			183, 191, 189,
			194, 192, 193,
			197, 194, 193,
			189, 190, 196,
			271, 197, 198,
			200, 195, 198,
			203, 199, 201,
			203, 198, 202,
			204, 203, 204,
			207, 199, 205,
			204, 202, 205,
			212, 207, 208,
			212, 205, 209,
			205, 206, 211,
			213, 212, 213,
			214, 207, 211,
			208, 215, 215,
			224, 217, 218,
			224, 215, 208,
			209, 219, 209,
			210, 220, 221,
			218, 219, 222,
			226, 218, 218,
			226, 223, 225,
			227, 226, 227,
			229, 223, 224,
			223, 228, 230,
			247, 231, 230,
			232, 233, 233,
			236, 235, 236,
			243, 237, 157,
			241, 238, 157,
			153, 240, 158,
			157, 239, 242,
			239, 221, 239,
			238, 222, 220,
			210, 161, 244,
			237, 240, 151,
			235, 237, 238,
			272, 225, 234,
			235, 151, 141,
			230, 234, 245,
			247, 230, 245,
			250, 246, 247,
			246, 248, 249,
			251, 246, 252,
			249, 250, 254,
			256, 252, 254,
			258, 255, 142,
			254, 253, 179,
			258, 254, 179,
			180, 257, 258,
			257, 259, 260,
			261, 257, 262,
			259, 261, 264,
			262, 263, 194,
			268, 266, 265,
			184, 192, 265,
			263, 181, 194,
			197, 267, 271,
			269, 267, 181,
			263, 261, 253,
			250, 245, 162,
			161, 210, 202,
			163, 162, 201,
			166, 163, 187,
			185, 166, 171,
			168, 166,
		},
	},
};
// clang-format on


}