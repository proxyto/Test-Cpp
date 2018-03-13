#include <iostream>
#include "rectangle.h"
#include "triangle.h"

using namespace std;

int main()
{
	double one, two;

	cout << "Enter the length and breadth of the triangle\n";
	cin >> one >> two;

	rectangle rec(one, two);

	cout << "Area of the rectangle = " << rec.area() << "sq. unit" << endl;

	cout << "Enter the lenght of base and the height of triangle\n";
	cin >> one >> two;

	triangle tri(one, two);

	cout << "Area of triangle = " << tri.area() << "sq. unit" << endl;
	return 0;
}