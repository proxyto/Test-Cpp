#include "Stack.h"
#include <iostream>
#include <string>

using namespace std;

Stack::Stack(int size)
{
	top = 0;
	stck = new int[size];
}

Stack::Stack(const Stack &r) {
	stck_size = r.stck_size;
	stck = new int[stck_size];
	top = r.top;
	memcpy(stck, r.stck, top * sizeof(int));
}
Stack::~Stack() {
	delete[] stck;
}
void Stack::push(int i) {
	if (top == stck_size) {
		cout << "Stack overflow." << endl;
		return;
	}
	stck[top++] = i;
}

int Stack::pop() {
	if (top == 0) {
		cout << "Stack underflow." << endl;
		return 0;
	}
	top--; //decrement top so it points to the last element istead of the empty space at the top.
	return stck[top];
}