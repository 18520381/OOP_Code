#include "NhanVien.h"
#pragma once
class SanXuat : public NhanVien 
{
protected:
	int SPham;
public:
	SanXuat(string ht, string ns, int cb, int sp):NhanVien(ht,ns,cb)
	{
		SPham = sp;
	}
	void Xuat()
	{
		cout << "Ten:" << HoTen << endl;
		cout << "Ngay sinh: " << NSinh << endl;
		cout << "Luong: " << Luong << endl;
		cout << "So san pham: " << SPham << endl;
	}
	void TinhLuong()
	{
		Luong = Basic + SPham * 2000;
	}
	~SanXuat()
	{}
};
