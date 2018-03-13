#include "getvalue.h"
#include <iostream>

using namespace std;
int main()
{
	myclass a(1), b(2);
    cout << getval(a) << " " << getval(b);
	cout << getval(a) << " " << getval(b);
	
	return 0;

}