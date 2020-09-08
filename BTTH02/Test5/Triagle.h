#include <stdio.h>
#include <math.h>
#include "Point.h"
#include <iostream>
using namespace std;

class Triagle
{
private:
	Point a, b, c;
public:
	Triagle() : a(1, 1), b(1, 2), c(1, 3)
	{
	}
	Triagle(Point x, Point y, Point z) : a(x), b(y), c(z)
	{
	}
	Triagle(float x1, float y1, float x2, float y2, float x3, float y3) 
	: a(x1,y1), b(x2,y2), c(x3,y3)
	{
	}
	void setX(float x)
	{
		a.setX(a.getX() + x);
		b.setX(b.getX() + x);
		c.setX(c.getX() + x);
	}
	void setY(float y)
	{
		a.setY(a.getY() + y);
		b.setY(b.getY() + y);
		c.setY(c.getY() + y);
	}
	void printf()
	{
		cout << "(" << a.getX() << "," << a.getY() << ")" << endl;
		cout << "(" << b.getX() << "," << b.getY() << ")" << endl;
		cout << "(" << c.getX() << "," << c.getY() << ")" << endl;
	}
};

