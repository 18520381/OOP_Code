#include "PS.h"



PS::PS()
{
	iTu = 1;
	iMau = 1;
}

PS::PS(int newTu)
{
	iTu = newTu;
	iMau = 1;
}

PS::PS(int newTu, int newMau)
{
	iTu = newTu;
	iMau = newMau;
}

PS::PS(PS & ps)
{
	iTu = ps.iTu;
	iMau = ps.iMau;
}
