#pragma once
#include <string>
#include <iostream>
using namespace std;

class HocSinh
{
private:
	string Ten;
	float Toan, Van;
public:
	void Nhap()
	{
		getline(cin, this->Ten);
		cin >> Toan >> Van;
		while (((Toan < 0) || (Toan > 10)) || ((Van < 0) || (Van > 10)))
		{
			cin >> Toan;
			cin >> Van;
		}
	}
	void Xuat()
	{
		cout << "Thong tin hoc sinh:" << endl;
		cout << "Ho ten: " << Ten << endl;
		cout << "Diem toan: " << Toan << endl;
		cout << "Diem van: " << Van << endl;
		cout << "Diem trung binh: " << (Toan + Van) / 2 << endl;
	}
};

