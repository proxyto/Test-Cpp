#include <iostream>
#include "Box.h"
using namespace std;
Box::Box(double a, double b, double c)
{
	l = a;
	w = b;
	h = c;
	volume = l * w * h;
}
void Box::vol()
{
	cout << "Volume is:" << volume << endl;
}