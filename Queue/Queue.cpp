#include "Queue.h"
#include <iostream>
using namespace std;
Queue::Queue()
{
	front = -1;
	rear = -1;
}
bool Queue::IsEmpty()
{
	return (front == -1 && rear == -1);
}
bool Queue::IsFull()
{
	return (rear + 1) % MAX_SIZE == front ? true : false;
}

void Queue::Enqueue(int x)
{
	cout << "Enqueuing " << x << " \n";
	if (IsFull())
	{
		cout << "Error: Queue is Full\n";
		return;
	}
	if (IsEmpty())
	{
		front = rear = 0;
	}
	else
	{
		rear = (rear + 1) % MAX_SIZE;
	}
	A[rear] = x;
}

void Queue::Dequeue()
{
	cout << "Dequeuing \n";
	if (IsEmpty())
	{
		cout << "Error: Queue is Empty\n";
		return;
	}
	else if (front == rear)
	{
		rear = front = -1;
	}
	else
	{
		front = (front + 1) % MAX_SIZE;
	}
}

int Queue::Front()
{
	if (front == -1)
	{
		cout << "Error: cannot return front from empty queue\n";
		return -1;
	}
	return A[front];
}

void Queue::Print()
{
	int count = (rear + MAX_SIZE - front) % MAX_SIZE + 1;
	cout << "Queue       : ";
	for (int i = 0; i <count; i++)
	{
		int index = (front + i) % MAX_SIZE;
		cout << A[index] << " ";
	}
	cout << "\n\n";
}
