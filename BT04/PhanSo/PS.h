class PS
{
private:
	int iTu, iMau;
public:
	PS();
	PS(int newTu);
	PS(int newTu, int newMau);
	PS(PS &ps);
	void setTu(int newTu)
	{
		iTu = newTu;
	}
	void setMau(int newMau)
	{
		iMau = newMau;
	}
	int getTu()
	{
		return(iTu);
	}
	int getMau()
	{
		return(iMau);
	}
	bool isMau0()
	{
		if (iMau == 0) return(true);
		else return(false);
	}
};

