#include "QuanLi.h"
#include "SanXuat.h"
#include "VanPhong.h"
#include "NhanVien.h"
#pragma once
class CongTy
{
private:
	int n;
	NhanVien *a[100];
	int TongLuong;
public:
	CongTy()
	{
		n = 0;
		TongLuong = 0;
	}
	void Nhap()
	{
		cout << "Nhap so luong nhan vien: ";
		cin >> n;
		cout << "1.NV San Xuat\t2.NV Van Phong\t3.NV Quan li" << endl;
		int t;
		for (int i = 0; i < n; i++)
		{
			cout << "Nhap loai nhan vien: ";
			cin >> t;
			switch (t)
			{
			case 1:
				{
					string HoTen;
					string NSinh;
					int Basic;
					int SPham;
					cin.ignore();
					cout << "Ten: ";
					getline(cin, HoTen);
					cout << "Ngay sinh: ";
					getline(cin, NSinh);
					cout << "Luong co ban:";
					cin >> Basic;
					cout << "So san pham: ";
					cin >> SPham;
					a[i] = new SanXuat(HoTen, NSinh, Basic, SPham);
				break;
				}
			case 2:
			{
				string HoTen;
				string NSinh;
				int Basic;
				int DayDo;
				int TroCap;
				cin.ignore();
				cout << "Ten: ";
				getline(cin, HoTen);
				cout << "Ngay sinh: ";
				getline(cin, NSinh);
				cout << "Luong co ban:";
				cin >> Basic;
				cout << "So ngay lam: ";
				cin >> DayDo;
				cout << "Tro cap: ";
				cin >> TroCap;
				a[i] = new VanPhong(HoTen, NSinh, Basic, DayDo, TroCap);
				break;
			}
			case 3:
			{
				string HoTen;
				string NSinh;
				int Basic;
				int HeSo;
				int Thuong;
				cin.ignore();
				cout << "Ten: ";
				getline(cin, HoTen);
				cout << "Ngay sinh: ";
				getline(cin, NSinh);
				cout << "Luong co ban:";
				cin >> Basic;
				cout << "He so chuc vu: ";
				cin >> HeSo;
				cout << "Thuong: ";
				cin >> Thuong;
				a[i] = new QuanLi(HoTen, NSinh, Basic, HeSo, Thuong);
				break;
			}
			}
		}
	}
	void Luong()
	{
		for (int i = 0; i < n; i++)
			a[i]->TinhLuong();
	}
	void Xuat()
	{
		cout << endl;
		for (int i = 0; i < n; i++)
		{
			cout << "Nhan vien thu " << i + 1 << ": " << endl;
			a[i]->Xuat();
			cout << endl;
		}
	}
	void SumLuong()
	{
		for (int i = 0; i < n; i++)
			TongLuong += a[i]->LayLuong();
		cout << "Tong luong cong ty phai tra: " << TongLuong << endl;
	}
	void TimNV()
	{
		string s;
		cout << "\nNhap ten nhan vien can tim: ";
		cin.ignore();
		getline(cin, s);
		for (int i = 0; i < n; i++)
		{
			if (a[i]->TimKiem(s))
			{
				a[i]->Xuat();
				break;
			}
			if (i == n - 1) cout << "Khong tim thay nhan vien\n";
		}
		
	}
	~CongTy()
	{
		n = 0;
		TongLuong = 0;
	}
};