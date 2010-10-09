#pragma once

#include "Color24.hpp"
#include "Point.hpp"

class Screen
{
private:
	SDL_Surface* screen;

	const unsigned int width, height;
	Color24 bgColor;

public:
	Screen(unsigned int width, unsigned int height);

	SDL_Surface* GetSurface();
	Point GetCenter() const;
	Point GetBounds() const;

	void Update();
	void Clear();
};