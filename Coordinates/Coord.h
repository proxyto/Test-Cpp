#pragma once
class Coord
{
public:
	int x, y;
	Coord();
	Coord(int a, int b);
};
bool operator<(Coord a, Coord b);
bool operator==(Coord a, Coord b);
