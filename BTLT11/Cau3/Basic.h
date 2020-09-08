#pragma once
#include "KhachHang.h"

class Basic : public KhachHang
{
protected:
	int NumClass;
	int Time;
	bool PT;
public:
	Basic(string ht, string cm, int num, int t, int pt) : KhachHang(ht, cm)
	{
		NumClass = num;
		TotalFee = 500 + num * 100;
		Time = t;
		if (pt == 1) 
		{
			PT = true;
			TotalFee += 100;
		}
		else PT = false;
		TotalFee *= Time;
	}
	void Nhap()
	{
		cout << "Ho ten: ";
		cin.ignore();
		getline(cin, HoTen);
		cout << "CMND: ";
		getline(cin, CMND);
		cout << "So lop dang ki hoc: ";
		cin >> NumClass;
		TotalFee = 500 + NumClass * 100;
		int t;
		cout << "Ho tro PT (1.Co\t2.Khong): ";
		cin >> t;
		if (t == 1)
		{
			PT = true;
			TotalFee += 100;
		}
		else PT = false;
		cout << "So thang tap: ";
		cin >> Time;
		TotalFee *= Time;
	}
	virtual void Xuat()
	{
		cout << "Loai Basic\n";
		cout << "Ho ten: " << HoTen << endl;
		cout << "CMND: " << CMND << endl;
		cout << "So lop dang ki: " << NumClass << endl;
		cout << "Ho tro PT: " << PT << endl;
		cout << "So thang tap: " << Time << endl;
		cout << "Tong so phi: " << TotalFee << endl;
	}
	~Basic()
	{}
};