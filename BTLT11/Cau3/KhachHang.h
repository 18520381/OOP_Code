#pragma once
#include <iostream>
#include <string>
using namespace std;

class KhachHang
{
protected:
	string HoTen;
	string CMND;
	int TotalFee;
public:
	KhachHang(string ht, string cm)
	{
		HoTen = ht;
		CMND = cm;
	}
	virtual void Nhap()
	{
		cout << "Ho ten: ";
		cin.ignore();
		getline(cin, HoTen);
		cout << "CMND: ";
		getline(cin, CMND);
	}
	virtual void Xuat()
	{
		cout << "Ho ten: " << HoTen << endl;
		cout << "CMND: " << CMND << endl;
		cout << "Tong so phi: " << TotalFee << endl;
	}
	int getFee()
	{
		return TotalFee;
	}
	~KhachHang()
	{}
};