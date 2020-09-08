#pragma once
#include <iostream>
using namespace std;

class DaThuc
{
private:
	int a;
	int b;
public:
	DaThuc()
	{
		a = 0;
		b = 0;
	}
	DaThuc(int x, int y)
	{
		a = x;
		b = y;
	}
	int Cal1(int x)
	{
		return a * x + b;
	}
	void Cal2()
	{
		if (b == 0) cout << "Vo so nghiem\n";
		else cout << "Nghiem x=" << (float)-b / a << endl;
	}
	friend DaThuc operator + (DaThuc x, DaThuc y)
	{
		DaThuc z;
		z.a = x.a + y.a;
		z.b = x.b + y.b;
		return z;
	}
	friend istream &operator >> (istream &in, DaThuc &x)
	{
		in >> x.a;
		in >> x.b;
		return in;
	}
	friend ostream &operator << (ostream &os, const DaThuc &x)
	{
		if (x.a == 0) os << x.b << endl;
		else if (x.b == 0) os << x.a << "x" << endl;
		else os << x.a << "x+" << x.b << endl;
		return os;
	}
	~DaThuc()
	{
		a = 0;
		b = 0;
	}
};
