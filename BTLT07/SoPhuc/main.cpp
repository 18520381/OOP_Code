#include "ARSP.h"

void check(ARSP a, int i)
{
	cout << a.arr[i];
}
int main()
{
	ARSP x;
	x.Nhap();
	for (int i = 0; i < x.getN(); i++)
	{
		check(x, i);	
		x.up(i);
	}
	for (int i = 0; i < x.getN(); i++)	check(x, i);
	system("pause");
	return 0;
}