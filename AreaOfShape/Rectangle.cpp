#include "rectangle.h"

rectangle::rectangle(double a, double b)
	: shape(a, b)
{

}

double rectangle::area()
{
	return side1 * side2;
}