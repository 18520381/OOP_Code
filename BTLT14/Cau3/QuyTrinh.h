#pragma once
#include <iostream>
using namespace std;

class QuyTrinh
{
protected:
	int Time[7] = { 5,10,30,10,10,10,30 };
	int Cost[7] = { 30,50,100,50,50,50,50 };
	int Use[7] = { 1,1,1,2,2,2,2 };
public:
	QuyTrinh()
	{}
	void SuDung()
	{
		cout << "Cac buoc Tay trang, Rua mat va Mat na la bat buoc\n";
		cout << "Quy khach co muon su dung Toner (1.Co\t2.Khong):";
		cin >> Use[3];
		cout << "Quy khach co muon su dung Essense/Serum (1.Co\t2.Khong):";
		cin >> Use[4];
		cout << "Quy khach co muon su dung Kem duong (1.Co\t2.Khong):";
		cin >> Use[5];
		cout << "Quy khach co muon su dung Chong nang (1.Co\t2.Khong):";
		cin >> Use[6];
	}
	void Cal(int &x, int &y)
	{
		x = 0; y = 0;
		for (int i = 0; i < 7; i++)
		{
			if (Use[i] == 1)
			{
				x += Time[i];
				y += Cost[i];
			}
		}
	}
	~QuyTrinh()
	{}
};