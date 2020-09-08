#pragma once
#include <iostream>
using namespace std;

int UCLN(int a, int b)
{
	int r;
	while (a%b != 0)
	{
		r = a % b;
		a = b;
		b = r;
	}
	return b;
}

class PS
{
private:
	int iTu;
	int iMau;
public:
	PS()
	{
		iTu = 0;
		iMau = 0;
	}
	void RutGon()
	{
		int c = UCLN(iTu, iMau);
		iTu /= c;
		iMau /= c;
	}
	friend PS operator + (PS a, PS b)
	{
		PS c;
		c.iTu = a.iTu * b.iMau + b.iTu * a.iMau;
		c.iMau = a.iMau * b.iMau;
		c.RutGon();
		return c;
	}
	friend PS operator - (PS a, PS b)
	{
		PS c;
		c.iTu = a.iTu * b.iMau - b.iTu * a.iMau;
		c.iMau = a.iMau * b.iMau;
		c.RutGon();
		return c;
	}
	friend istream &operator >> (istream &in, PS &a)
	{
		in >> a.iTu;
		in >> a.iMau;
		a.RutGon();
		return in;
	}
	friend ostream &operator << (ostream &os, const PS &a)
	{
		if (a.iMau == 1) os << a.iTu << endl;
		else if (a.iMau < 0) os << -a.iTu << "/" << -a.iMau << endl;
		else os << a.iTu << "/" << a.iMau << endl;
		return os;
	}
	~PS()
	{
		iTu = 0;
		iMau = 0;
	}
};