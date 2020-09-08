#pragma once
#include "KhachHang.h"

class Member : public KhachHang
{
protected:
	int Time;
	bool PT;
public:
	Member(string ht, string cm, int t, int pt) : KhachHang(ht, cm)
	{
		TotalFee = 200;
		Time = t;
		if (pt == 1)
		{
			PT = true;
			TotalFee += 200;
		}
		else PT = false;
		TotalFee *= Time;
	}
	void Nhap()
	{
		TotalFee = 200;
		cout << "Ho ten: ";
		cin.ignore();
		getline(cin, HoTen);
		cout << "CMND: ";
		getline(cin, CMND);
		int t;
		cout << "Ho tro PT (1.Co\t2.Khong): ";
		cin >> t;
		if (t == 1)
		{
			PT = true;
			TotalFee += 200;
		}
		else PT = false;
		cout << "So thang tap: ";
		cin >> Time;
		TotalFee *= Time;
	}
	virtual void Xuat()
	{
		cout << "Loai Member\n";
		cout << "Ho ten: " << HoTen << endl;
		cout << "CMND: " << CMND << endl;
		cout << "Ho tro PT: " << PT << endl;
		cout << "So thang tap: " << Time << endl;
		cout << "Tong so phi: " << TotalFee << endl;
	}
	~Member()
	{}
};