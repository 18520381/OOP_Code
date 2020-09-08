#pragma once
#include "Point.h"

class DaGiac : public Point
{
private:
	int n;
	Point a[100];
public:
	DaGiac()
	{
		n = 0;
	}
	friend istream &operator >> (istream &in, DaGiac &z)
	{
		in >> z.n;
		for (int i = 0; i < z.n; i++)
			in >> z.a[i];
		return in;
	}
	friend ostream &operator << (ostream &out, DaGiac z)
	{
		for (int i = 0; i < z.n; i++)
			out << z.a[i];
		return out;
	}
	~DaGiac()
	{
		n = 0;
	}
};
