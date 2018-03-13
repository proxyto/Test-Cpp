#pragma once
class shape
{
protected:
	double side1, side2;

public:
	shape(double, double);
	virtual double area() = 0;
};
