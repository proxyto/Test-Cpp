#include <iostream>
#include "Stopwatch.h"
#include <ctime>
using namespace std;
stopwatch::stopwatch()
{
	begin = end = 0.0;
}
stopwatch::~stopwatch()
{
	cout << "stopwatch object being destroyed...";
	show();
}
void stopwatch::start()
{
	begin = (double)clock() / CLOCKS_PER_SEC;
}
void stopwatch::stop()
{
	end = (double)clock() / CLOCKS_PER_SEC;
}
void stopwatch::show()
{
	cout << "Elapsed time " << end - begin;
}