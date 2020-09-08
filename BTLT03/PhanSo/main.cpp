#include <iostream>
#include "PhanSo.h"
using namespace std;

int main()
{
	PhanSo a, b, c;
	a.Nhap();
	a.RutGon();
	b.Nhap();
	b.RutGon();
	c = a.Cong(b);
	c.RutGon();
	c.Xuat();
	c = a.Tru(b);
	c.RutGon();
	c.Xuat();
	c = a.Nhan(b);
	c.RutGon();
	c.Xuat();
	c = a.Chia(b);
	c.RutGon();
	c.Xuat();

	system("pause");
	return 0;
}