#pragma once
class stopwatch
{
	double begin, end;
public:
	stopwatch();
	~stopwatch();
	void start();
	void stop();
	void show();
};