#include "Triangle.h"

triangle::triangle(double a, double b)
	: shape(a, b)
{
	side1 = a;
	side2 = b;
}

double triangle::area()
{
	return 0.5 * side1 * side2;
}