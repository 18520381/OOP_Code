#include "GV.h"

GV::GV()
{
	HoTen ="";
	MSGV = 0;
	NamSinh = 0;
	Tuoi = 0;
	NamCT = 0;
}

GV::GV(GV & gv)
{
	HoTen = gv.HoTen;
	MSGV = gv.MSGV;
	NamSinh = gv.NamSinh;
	Tuoi = gv.Tuoi;
	NamCT = gv.NamCT;
}


GV::~GV()
{
	HoTen = "";
	MSGV = 0;
	NamSinh = 0;
	Tuoi = 0;
	NamCT = 0;
}

int GV::getLuong()
{
	int Luong = 5000000;
	if (NamCT > 30) return(Luong * 2);
	else return(Luong);
}
