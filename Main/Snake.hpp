#ifndef __Snake__
#define __Snake__

#include <vector>
#include <SDL/SDL.h>

#include "Color24.hpp"
#include "Point.hpp"
#include "Screen.hpp"
#include "Timer.hpp"

class Snake
{
private:
	enum Direction
	{
		left,
		right,
		up,
		down
	};
	typedef std::vector<Direction> Path;
	const static Direction directions[];

	unsigned int length;
	Path path;
	Point location;
	Color24 color;
	Screen* screen;

	Timer timer;

public:
	Snake();

	void Reset();
	void GetInput();
	void Update();
	void SetRenderTarget(Screen& target);
	void Center();
	void Draw() const;
	bool IsDead() const;
};

#endif