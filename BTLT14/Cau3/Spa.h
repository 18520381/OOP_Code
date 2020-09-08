#pragma once
#include "KhachHang.h"

class Spa
{
private:
	int n;
	int Richest;
	KhachHang KH[100];
public:
	Spa()
	{
		n = 0;
	}
	void Nhap()
	{
		cout << "So luong khach hang: ";
		cin >> n;
		Richest = 0;
		for (int i = 0; i < n; i++)
		{
			KH[i].ThongTin();
			if (KH[i].getTotalCost() > KH[Richest].getTotalCost())
				Richest = i;
		}
	}
	void Xuat()
	{
		for (int i = 0; i < n; i++)
		{
			KH[i].Xuat();
		}
		cout << "Khach hang chi tieu nhieu nhat:\n";
		KH[Richest].Xuat();
	}
	~Spa()
	{
		n = 0;
	}
};
