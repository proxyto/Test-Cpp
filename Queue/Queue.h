#pragma once
#define MAX_SIZE 101
class Queue
{
	int A[MAX_SIZE];
	int front, rear;
public:
	Queue();
	bool IsEmpty();
	bool IsFull();
	void Enqueue(int x);
	void Dequeue();
	int Front();
	void Print();
};
