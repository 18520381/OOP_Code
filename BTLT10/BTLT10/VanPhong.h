#include "NhanVien.h"
#pragma once
class VanPhong: public NhanVien
{
protected:
	int DayDo;
	int TroCap;
public:
	VanPhong(string ht, string ns, int cb, int dd, int tc) :NhanVien(ht, ns, cb)
	{
		DayDo = dd;
		TroCap = tc;
	}

	void Xuat()
	{
		cout << "Ten:" << HoTen << endl;
		cout << "Ngay sinh: " << NSinh << endl;
		cout << "Luong: " << Luong << endl;
		cout << "So ngay lam: " << DayDo << endl;
		cout << "Tro cap: " << TroCap << endl;
	}
	void TinhLuong()
	{
		Luong = Basic + DayDo * 200000 + TroCap;
	}
	~VanPhong()
	{}
};
