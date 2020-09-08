#pragma once
#include <string>
#include "QuyTrinh.h"

class KhachHang: public QuyTrinh
{
protected:
	string HoTen;
	QuyTrinh QT;
	int TotalTime;
	int TotalCost;
public:
	KhachHang()
	{
		TotalCost = 0;
		TotalTime = 0;
	}
	void ThongTin()
	{
		cout << "Ho va ten khach hang: ";
		cin.ignore();
		getline(cin, HoTen);
		QT.SuDung();
		QT.Cal(TotalTime, TotalCost);
	}
	void Xuat()
	{
		cout << "Ho va ten: " << HoTen << endl;
		cout << "Tong tien: " << TotalCost << endl;
		cout << "Tong thoi gian: " << TotalTime << endl;
	}
	int getTotalCost()
	{
		return TotalCost;
	}
	~KhachHang()
	{}
};
