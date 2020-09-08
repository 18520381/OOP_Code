#pragma once
#include <iostream>
#include "BanhXe.h"
#include <string>
using namespace std;
class Xe
{
	string TenXe;
	int Nam;
	BanhXe Banh;
public:
	void Nhap()
	{
		cout << "Nhap ten xe: ";
		getline(cin,this->TenXe);
		cout << "Nhap nam san xuat xe: ";
		cin >> this->Nam;
		Banh.Nhap();
	}
	void Xuat()
	{
		cout << "Hang xe: " << TenXe << endl;
		cout << "Nam san xuat: " << Nam << endl;
		Banh.Xuat();
	}
};

