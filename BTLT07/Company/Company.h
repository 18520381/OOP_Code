#pragma once
#include "Employee.h"

class Company
{
private:
	int n;
	Employee a[1000];
public:
	Company()
	{
		n = 0;
	}
	friend istream& operator >> (istream &is, Company &p)
	{
		cout << "So luong nhan vien: ";
		is >> p.n;
		for (int i = 1; i <= p.n; i++)
		{
			cout << "Nhan vien thu " << i << endl;
			cin >> p.a[i];
		}
		return is;
	}
	friend ostream& operator << (ostream &os, Company p)
	{
		int t = 0;
		cout << "Thong tin nhan vien" << endl;
		for (int i = 1; i <= p.n; i++)
		{
			cout << "Nhan vien thu " << i << endl;
			cout << p.a[i];
			t += p.a[i].getLuong();
		}
		cout << "Tong luong phai tra trong 1 thang la: " << t << endl;
		cout << "Tong luong phai tra trong 1 nam la: " << t*12 << endl;
		return os;
	}
	~Company()
	{
		n = 0;
	}
};

