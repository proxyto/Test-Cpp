#include "Stopwatch.h"
int main()
{
	stopwatch watch;
	long i;
	watch.start();
	for (i = 0; i < 32000; i++)
	watch.stop();
	watch.show();
	return 0;
}    