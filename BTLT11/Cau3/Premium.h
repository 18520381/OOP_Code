#pragma once
#include "KhachHang.h"

class Premium : public KhachHang
{
protected:
	int NumClass;
	int Time;
	bool Steam;
	bool PT;
public:
	Premium(string ht, string cm, int num, int t, int st, int pt) : KhachHang(ht,cm)
	{
		TotalFee = 1000;
		NumClass = num;
		Time = t;
		if (st == 1) Steam = true;
		else Steam = false;
		if (pt == 1) PT = true;
		else PT = false;
		TotalFee *= Time;
	}
	void Nhap()
	{
		TotalFee = 1000;
		cout << "Ho ten: ";
		cin.ignore();
		getline(cin, HoTen);
		cout << "CMND: ";
		getline(cin, CMND);
		cout << "So lop dang ki hoc: ";
		cin >> NumClass;
		int t;
		cout << "Xong hoi (1.Co\t2.Khong): ";
		cin >> t;
		if (t == 1) Steam = true;
		else Steam = false;
		cout << "Ho tro PT (1.Co\t2.Khong): ";
		cin >> t;
		if (t == 1) PT = true;
		else PT = false;
		cout << "So thang tap: ";
		cin >> Time;
	}
	virtual void Xuat()
	{
		cout << "Loai Premium\n";
		cout << "Ho ten: " << HoTen << endl;
		cout << "CMND: " << CMND << endl;
		cout << "So lop dang ki: " << NumClass << endl;
		cout << "Xong hoi: " << Steam << endl;
		cout << "Ho tro PT: " << PT << endl;
		cout << "So thang tap: " << Time << endl;
		cout << "Tong so phi: " << TotalFee << endl;
	}
	~Premium()
	{}
};