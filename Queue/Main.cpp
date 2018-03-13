#include "Queue.h"
int main()
{
	Queue Q;
	Q.Enqueue(2);  
	Q.Print();
	Q.Enqueue(4);  
	Q.Print();
	Q.Enqueue(6);  
	Q.Print();
	Q.Dequeue();	  
	Q.Print();
	Q.Enqueue(8); 
	Q.Print();
	return 0;
}