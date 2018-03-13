#pragma once
class myclass
{
	int *p;
public:
	myclass(int i);
	myclass(const myclass& obj);
	~myclass(void);
	friend int getval(myclass o);
};
