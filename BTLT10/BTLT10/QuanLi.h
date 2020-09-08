#include "NhanVien.h"
#pragma once
class QuanLi : public NhanVien
{
protected:
	int HeSo;
	int Thuong;
public:
	QuanLi(string ht, string ns, int cb, int hs, int th) :NhanVien(ht, ns, cb)
	{
		HeSo = hs;
		Thuong = th;
	}
	void Xuat()
	{
		cout << "Ten:" << HoTen << endl;
		cout << "Ngay sinh: " << NSinh << endl;
		cout << "Luong: " << Luong << endl;
		cout << "He so chuc vu: " << HeSo << endl;
		cout << "Thuong: " << Thuong << endl;
	}
	void TinhLuong()
	{
		Luong = Basic * HeSo + Thuong;
	}
	~QuanLi()
	{}
};
