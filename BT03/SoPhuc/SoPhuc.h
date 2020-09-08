#pragma once
#include <iostream>
using namespace std;
class SoPhuc
{
private:
	int iNguyen;
	int iAo;
public:
	void Nhap()
	{
		cin >> this->iNguyen;
		cin >> this->iAo;
	}
	void Xuat()
	{
		cout << iNguyen;
		if (iAo < 0) cout << iAo << "i" << endl;
		else cout << "+" << iAo << "i" << endl;
	}
	SoPhuc Cong(SoPhuc a);
	SoPhuc Tru(SoPhuc a);
	
};

