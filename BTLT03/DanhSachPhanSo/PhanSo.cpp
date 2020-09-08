#include "PhanSo.h"

int UCLN(int a, int b)
{
	int temp;
	while (b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}

void PhanSo::RutGon()
{
	int Uoc = UCLN(iTu, iMau);
	iTu = iTu / Uoc;
	iMau = iMau / Uoc;
}

