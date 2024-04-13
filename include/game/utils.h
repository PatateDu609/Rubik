#ifndef UTILS_HPP
#define UTILS_HPP

namespace game {

enum Colors {
	RED,
	BLUE,
	YELLOW,
	GREEN,
	ORANGE,
	WHITE,

	DEFAULT
};

enum Face {
	NONE		= 0,
	FRONT		= 1,  // 0b000001
	BACK		= 2,  // 0b000010
	RIGHT		= 4,  // 0b000100
	LEFT		= 8,  // 0b001000
	UP			= 16, // 0b010000
	BOTTOM		= 32, // 0b100000
	MIDDLE		= 64,
	EQUATOR		= 128,
};

} // namespace game

#endif // UTILS_HPP
