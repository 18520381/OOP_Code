#include "SoAo.h"

class SoPhuc: public SoAo
{
private:
	float iThuc;
public:
	SoPhuc() : SoAo()
	{
		iThuc = 0;
	}
	SoPhuc(float a, float b) : SoAo(b) 
	{
		iThuc = a;
	}
	void Nhap()
	{
		float a, b;
		cin >> a >> b;
		iThuc = a;
		iAo = b;
	}
	friend SoPhuc operator + (SoPhuc a, SoPhuc b)
	{
		SoPhuc c;
		c.iThuc = a.iThuc + b.iThuc;
		c.iAo = a.iAo + b.iAo;
		return(c);
	}
	void Xuat() const
	{
		cout << iThuc;
		if (iAo > 0) cout << "+" << iAo << "i" << endl;
		else if (iAo < 0) cout << iAo << "i" << endl;
	}
	~SoPhuc() 
	{
		iThuc = 0;
	}
};
