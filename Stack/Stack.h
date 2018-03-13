#pragma once

//class Num
//{
//private:
//	int num;
//public:
//	Num(int n);
//	int getNum();
//
//}; 

#ifndef STACK_H
#define STACK_H

class Stack {
public:
	//constructor
	Stack(int size);
	Stack() : top(0), stck(new int[4]) { }
	Stack(const Stack &r);
	
	//destructor
	~Stack();

	//public members (data & functions)
	void push(int i);
	int pop();

private:
	//private members (data & functions)
	int stck_size;
	int* stck;
	int top;
};

#endif
