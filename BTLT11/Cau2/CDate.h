#pragma once
#include <iostream>
using namespace std;

bool Check(int y)
{
	bool t = false;
	if (y % 4 == 0)
	{
		t = true;
		if ((y % 100 == 0) && (y % 400 != 0)) t = false;
	}
	else t = false;
	return t;
}

class CDate
{
private:
	int Ngay;
	int Thang;
	int Nam;
public:
	CDate()
	{
		Ngay = 0;
		Thang = 0;
		Nam = 0;
	}
	friend istream &operator >> (istream &in, CDate &a)
	{
		in >> a.Ngay;
		in >> a.Thang;
		in >> a.Nam;
		return in;
	}
	friend ostream &operator << (ostream &os, const CDate &a)
	{
		os << "Ngay " << a.Ngay << " thang " << a.Thang << " nam " << a.Nam << endl;
		return os;
	}
	CDate operator++()
	{
		Ngay++;
		if (Ngay > 31) 
		{
			Ngay = 1;
			Thang++;
		}
		if ((Thang == 4) || (Thang == 6) || (Thang == 9) || (Thang == 11))
			if (Ngay > 30)
			{
				Ngay = 1;
				Thang++;
			}
		if (Thang == 2)
		{
			if (Check(Nam))
			{
				if (Ngay > 29)
				{
					Ngay = 1;
					Thang++;
				}
			}
			else
				if (Ngay > 28)
				{
					Ngay = 1;
					Thang++;
				}
		}
		if (Thang > 12)
		{
			Thang = 1;
			Nam++;
		}
		return(*this);
	}
	CDate operator++(int)
	{
		CDate t = *this;
		++(*this);
		return t;
	}
	~CDate()
	{}
};
