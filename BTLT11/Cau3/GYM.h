#pragma once
#include "KhachHang.h"
#include "Premium.h"
#include "Basic.h"
#include "Member.h"

class GYM
{
private:
	int n;
	KhachHang *a[100];
	int Richest;
public:
	GYM()
	{
		n = 0;
		Richest = 0;
	}
	void Nhap()
	{
		string ht;
		string cm;
		int num;
		int st;
		int pt;
		int ti;
		cout << "Nhap so luong thanh vien: ";
		cin >> n;
		int t;
		cout << "1.Premium\t2.Basic\t\t3.Member\n";
		for (int i = 0; i < n; i++)
		{
			cout << "Thanh vien thu " << i + 1 << endl;
			cout << "Nhap loai thanh vien: ";
			cin >> t;
			switch (t)
			{
			case 1:
			{
				cout << "Ho ten: ";
				cin.ignore();
				getline(cin, ht);
				cout << "CMND: ";
				getline(cin, cm);
				cout << "So lop dang ki hoc: ";
				cin >> num;
				cout << "Xong hoi (1.Co\t2.Khong): ";
				cin >> st;
				cout << "Ho tro PT (1.Co\t2.Khong): ";
				cin >> pt;
				cout << "So thang tap: ";
				cin >> ti;
				a[i] = new Premium(ht, cm, num, ti, st, pt);
				if (a[i]->getFee() > a[Richest]->getFee()) Richest = i;
				break;
			}
			case 2:
			{
				cout << "Ho ten: ";
				cin.ignore();
				getline(cin, ht);
				cout << "CMND: ";
				getline(cin, cm);
				cout << "So lop dang ki hoc: ";
				cin >> num;
				cout << "Ho tro PT (1.Co\t2.Khong): ";
				cin >> pt;
				cout << "So thang tap: ";
				cin >> ti;
				a[i] = new Basic(ht, cm, num, ti, pt);
				if (a[i]->getFee() > a[Richest]->getFee()) Richest = i;
				break;
			}
			case 3:
			{
				cout << "Ho ten: ";
				cin.ignore();
				getline(cin, ht);
				cout << "CMND: ";
				getline(cin, cm);
				cout << "Ho tro PT (1.Co\t2.Khong): ";
				cin >> pt;
				cout << "So thang tap: ";
				cin >> ti;
				a[i] = new Member(ht, cm, ti, pt);
				if (a[i]->getFee() > a[Richest]->getFee()) Richest = i;
				break;
			}
			}
		}
	}
	void Xuat()
	{
		cout << endl;
		for (int i = 0; i < n; i++)
		{
			cout << "Khach hang thu " << i + 1 << ":\n";
			a[i]->Xuat();
			cout << endl;
		}
	}
	void RichMem()
	{
		cout << "Khach hang tiem nang:\n";
		for (int i = 0; i < n; i++)
		{
			if (a[i]->getFee() == a[Richest]->getFee())
			{
				a[i]->Xuat();
				cout << endl;
			}
		}

	}
	~GYM()
	{}
};