#pragma once
#include <iostream>
using namespace std;
class PhanSo
{
private:
	int iTu;
	int iMau;
public:
	void Nhap()
	{
		cin >> this->iTu;
		cin >> this->iMau;
	}
	void Xuat()
	{
		if (iMau<0) cout << -iTu << "/" << -iMau << endl;
		else cout << iTu << "/" << iMau << endl;
	}
	void RutGon();
	PhanSo Cong(PhanSo a);
	PhanSo Tru(PhanSo a);
	PhanSo Nhan(PhanSo a);
	PhanSo Chia(PhanSo a);
};

