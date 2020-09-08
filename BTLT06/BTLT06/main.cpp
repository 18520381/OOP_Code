#include "SoPhuc.h"

int main()
{
	SoPhuc a(1, 2), b(3,4), c;
	c = a + b;
	c.Xuat();
	c = a - b;
	c.Xuat();
	c = a - 1;
	c.Xuat();
	c = b + 1;
	c.Xuat();
	if (a != b) cout << "a!=b";
	else cout << "a=b";

	system("pause");
	return 0;
}