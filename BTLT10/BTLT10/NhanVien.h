#include <iostream>
#include <string>
#pragma once
using namespace std;

class NhanVien
{
protected:
	string HoTen;
	string NSinh;
	int Luong;
	int Basic;
public:
	NhanVien(string ht, string ns, int cb)
	{
		HoTen = ht;
		NSinh = ns;
		Luong = 0;
		Basic = cb;
	}
	virtual void Xuat()
	{
		cout << "Ten:" << HoTen << endl;
		cout << "Ngay sinh: " << NSinh << endl;
		cout << "Luong: " << Luong << endl;
	}
	virtual void TinhLuong()
	{
		Luong = Basic;
	}
	int LayLuong()
	{
		return Luong;
	}
	bool TimKiem(string s)
	{

		if (HoTen == s) return true;
		else return false;
	}
	~NhanVien()
	{}
};
