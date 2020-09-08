#pragma once
#include <iostream>
#include "PhanSo.h"
using namespace std;
class DanhSach
{
private:
	int n;
	PhanSo a[1000];
public:
	void Nhap()
	{
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			a[i].Nhap();
			a[i].RutGon();
		}
	}
	void Xuat()
	{
		for (int i = 1; i <= n; i++)
			a[i].Xuat();
	}
};
