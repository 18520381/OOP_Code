#pragma once
#include <iostream>
using namespace std;

class Point
{
protected:
	int x;
	int y;
public:
	Point()
	{}
	Point(int a, int b)
	{
		x = a; y = b;
	}
	friend istream &operator >> (istream &in, Point &z)
	{
		in >> z.x;
		in >> z.y;
		return in;
	}
	friend ostream &operator << (ostream &out, Point z)
	{
		out << z.x << " " << z.y << endl;
		return out;
	}
	~Point()
	{}
};
