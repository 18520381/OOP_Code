#pragma once
#include <string>
using namespace std;

class GV
{
	string HoTen;
	int MSGV;
	int NamSinh;
	int Tuoi;
	int NamCT;
public:
	GV(	);
	GV(GV &gv);
	~GV();

	void setHoTen(string Name)
	{
		HoTen = Name;
	}
	void setMSGV(int MS)
	{
		MSGV = MS;
	}
	void setNamSinh(int NS)
	{
		NamSinh = NS;
	}
	void setTuoi(int Old)
	{
		Tuoi = Old;
	}
	void setNamCT(int CT)
	{
		NamCT = CT;
	}
	
	string getHoTen()
	{
		return(HoTen);
	}
	int getMSGV()
	{
		return(MSGV);
	}
	int getNamSinh()
	{
		return(NamSinh);
	}
	int getTuoi()
	{
		return(Tuoi);
	}
	int getNamCT()
	{
		return(NamCT);
	}

	int getLuong();
};

