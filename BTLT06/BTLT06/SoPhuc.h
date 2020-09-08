#include <iostream>
#include <math.h>
using namespace std;

class SoPhuc
{
private:
	float Nguyen;
	float Ao;
public:
	SoPhuc()
	{
	}
	SoPhuc(float a)
	{
		Nguyen = a;
		Ao = 0;
	}
	SoPhuc(float a, float b)
	{
		Nguyen = a;
		Ao = b;
	}
	void Nhap(float a, float b)
	{
		Nguyen = a;
		Ao = b;
	}
	void Xuat()
	{
		if ((Nguyen == 0) && (Ao == 0)) cout << "0";
		else
		{
			if (Nguyen != 0) cout << Nguyen << " ";
			if (Ao != 0)
			{
				if (Ao < 0) cout << "- " << -Ao << "i";
				else    if (Nguyen != 0) cout << "+ " << Ao << "i";
				else cout << Ao << "i";
			}
		}
		cout << endl;
	}

	friend SoPhuc operator + (SoPhuc c, SoPhuc a)
	{
		SoPhuc b;
		b.Nguyen = c.Nguyen + a.Nguyen;
		b.Ao = c.Ao + a.Ao;
		return b;
	}
	friend SoPhuc operator - (SoPhuc c, SoPhuc a)
	{
		SoPhuc b;
		b.Nguyen = c.Nguyen - a.Nguyen;
		b.Ao = c.Ao - a.Ao;
		return b;
	}

	friend SoPhuc operator + (SoPhuc c, float a)
	{
		SoPhuc b;
		b.Nguyen = c.Nguyen + a;
		b.Ao = c.Ao;
		return b;
	}
	friend SoPhuc operator - (SoPhuc c, float a)
	{
		SoPhuc b;
		b.Nguyen = c.Nguyen - a;
		b.Ao = c.Ao;
		return b;
	}

	friend SoPhuc operator + (float a, SoPhuc c)
	{
		SoPhuc b;
		b.Nguyen = c.Nguyen + a;
		b.Ao = c.Ao;
		return b;
	}
	friend SoPhuc operator - (float a, SoPhuc c)
	{
		SoPhuc b;
		b.Nguyen = a - c.Nguyen;
		b.Ao = c.Ao;
		return b;
	}

	bool operator != (SoPhuc a)
	{
		if ((this->Nguyen != a.Nguyen) && (this->Ao != a.Ao)) return(true);
		else return(false);
	}
};

