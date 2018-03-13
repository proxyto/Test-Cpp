#include "Coord.h"
Coord::Coord()
{
	x = y = 0;
}
Coord::Coord(int a, int b)
{
	x = a;
	y = b;
}
bool operator<(Coord a, Coord b)
{
	return (a.x + a.y) < (b.x + b.y);
}
bool operator==(Coord a, Coord b)
{
	return (a.x + a.y) == (b.x + b.y);
}