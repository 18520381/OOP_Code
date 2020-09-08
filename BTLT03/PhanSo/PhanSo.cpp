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

PhanSo PhanSo::Cong(PhanSo a)
{
	PhanSo b;
	b.iTu = a.iTu * this->iMau + a.iMau * this->iTu;
	b.iMau = a.iMau * this->iMau;
	return (b);
}

PhanSo PhanSo::Tru(PhanSo a)
{
	PhanSo b;
	b.iTu = a.iMau * this->iTu - a.iTu * this->iMau ;
	b.iMau = a.iMau * this->iMau;
	return (b);
}

PhanSo PhanSo::Nhan(PhanSo a)
{
	PhanSo b;
	b.iTu = a.iTu * this->iTu;
	b.iMau = a.iMau * this->iMau;
	return (b);
}

PhanSo PhanSo::Chia(PhanSo a)
{
	PhanSo b;
	b.iTu = a.iMau * this->iTu;
	b.iMau = a.iTu * this->iMau;
	return (b);
}
