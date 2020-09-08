#pragma once
#include "Management.h"

class Handle
{
private:
	int n;
	Management a[100];
	int Shortest;
	int Richest;
public:
	Handle()
	{
		n = 0;
		Shortest = -1;
		Richest = -1;
	}
	void Nhap()
	{
		cout << "Nhap so luong nguoi can quan li: ";
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			a[i].Nhap();
			if (Shortest == -1) Shortest = i;
			if (Richest == -1) Richest = i;
			if (a[i].getTall() < a[Shortest].getTall()) Shortest = i;
			if (a[i].getFee() > a[Richest].getFee()) Richest = i;
		}
	}
	void Xuat()
	{
		cout << "Thong tin nguoi thap nhat:" << endl;
		a[Shortest].Xuat();
		cout << "Thong tin nguoi chi tieu nhieu nhat:" << endl;
		a[Richest].Xuat();
	}
	~Handle()
	{
		n = 0;
	}
};