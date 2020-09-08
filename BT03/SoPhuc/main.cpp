#include <iostream>
#include "SoPhuc.h"
using namespace std;

int main()
{
	SoPhuc a, b, c;
	a.Nhap();
	b.Nhap();
	c = a.Cong(b);
	c.Xuat();
	c = a.Tru(b);
	c.Xuat();

	system("pause");
	return 0;
}