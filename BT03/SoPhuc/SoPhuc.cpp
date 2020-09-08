#include "SoPhuc.h"

SoPhuc SoPhuc::Cong(SoPhuc a)
{
	SoPhuc b;
	b.iNguyen = this->iNguyen + a.iNguyen ;
	b.iAo = this->iAo + a.iAo;
	return b;
}

SoPhuc SoPhuc::Tru(SoPhuc a)
{
	SoPhuc b;
	b.iNguyen = this->iNguyen - a.iNguyen;
	b.iAo = this->iAo - a.iAo;
	return b;
}
