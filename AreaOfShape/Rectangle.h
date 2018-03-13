#pragma once
#include "shape.h"

class rectangle : public shape
{
public:
	rectangle(double a, double b);
	double area();
};