#include "SoPhuc.h"

int main()
{
	SoPhuc a(1, 2), b(2, 3), c;
	a.Xuat();
	b.Xuat();
	a.Nhap();
	a.Xuat();
	c = a + b;
	c.Xuat();
	system("pause");
	return 0;
}