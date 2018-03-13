#pragma once
#include "shape.h"

class triangle : public shape
{
public:
	triangle(double a, double b);
	double area();
};