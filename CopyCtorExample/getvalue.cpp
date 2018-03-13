#include <iostream>
#include "getvalue.h"
using namespace std;
myclass::myclass(int i)
{
	
	p = new int;
	if (!p)
	{
		cout << "Allocation error";
		exit(1);
	}
	*p = i;
}
myclass::myclass(const myclass& obj)
{
	p = new int;
	if (!p)
	{
		cout << "Allocation error";
		exit(1);
	}
	*p = *obj.p;
}
myclass::~myclass()
{
	delete p;
}
int getval(myclass o)
{
	return *o.p;
}