#include <iostream>
#include "Coord.h"
#include <vector>
using namespace std;
int main()
{
	vector <Coord> v;
	int i;
	for (i = 0; i < 10; i++)
	  v.push_back(Coord(i, i));

	for (i = 0; i < v.size(); i++)
		cout << v[i].x << "," << v[i].y << " ";
	cout << endl;

	for (i = 0; i < v.size(); i++)
		v[i].x = v[i].y * 2;

	for (i = 0; i < v.size(); i++)
		cout << v[i].x << "," << v[i].y << " ";

	return 0;
}
