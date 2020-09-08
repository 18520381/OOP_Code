#pragma once
#include <string>
#include <iostream>
using namespace std;

class BanhXe
{
private:
	int Lop;
	int DuongKinh;
public:
	void Nhap()
	{
		cout << "Nhap kich thuoc lop xe: ";
		cin >> this->Lop;
		cout << "Nhap duong kinh banh xe: ";
		cin >> this->DuongKinh;
	}
	void Xuat()
	{
		cout << "Kich thuoc lop xe: " << Lop << endl;
		cout << "Duong kinh banh xe: " << DuongKinh << endl;
	}
};

