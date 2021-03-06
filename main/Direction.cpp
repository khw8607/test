#include "Direction.hpp"

const Direction Direction::empty(0, 0);
const Direction Direction::left(-1, 0);
const Direction Direction::right(1, 0);
const Direction Direction::up(0, -1);
const Direction Direction::down(0, 1);

Direction::Direction(const Sint8 x, const Sint8 y)
{
	direction = Vector2D(x, y);
}

Direction::Direction()
{
	direction = Vector2D(empty);
}

Direction::operator Vector2D() const
{
	return direction;
}

Direction Direction::operator-() const
{
	Vector2D nDirection = -direction;
	return Direction(nDirection.x, nDirection.y);
}

bool Direction::operator==(const Direction obj) const
{
	return (direction == obj.direction);
}

bool Direction::IsHorizontal() const
{
	return direction.x != 0 && direction.y == 0;
}
