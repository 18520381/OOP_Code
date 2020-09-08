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
	}
	float Module()
	{
		return((sqrt(this->Nguyen*this->Nguyen + this->Ao*this->Ao)));
	}
	friend SoPhuc operator + (SoPhuc c, SoPhuc a)
	{
		SoPhuc b;
		b.Nguyen = c.Nguyen + a.Nguyen;
		b.Ao = c.Ao + a.Ao;
		return b;
	}
	//
	SoPhuc operator - (SoPhuc a)
	{
		SoPhuc b;
		b.Nguyen = this->Nguyen - a.Nguyen;
		b.Ao = this->Ao - a.Ao;
		return b;
	}
	bool operator >= (SoPhuc a)
	{
		if (this->Module() >= a.Module()) return(true);
		else return(false);
	}
	//friend SoPhuc operator - (SoPhuc c, SoPhuc a)
	//{
	//	SoPhuc b;
	//	b.Nguyen = c.Nguyen - a.Nguyen;
	//	b.Ao = c.Ao - a.Ao;
	//	return b;
	//}
	friend SoPhuc operator * (SoPhuc c, SoPhuc a)
	{
		SoPhuc b;
		b.Nguyen = c.Nguyen*a.Nguyen - c.Ao*a.Ao;
		b.Ao = c.Nguyen*a.Ao + c.Ao*a.Nguyen;
		return b;
	}
	friend SoPhuc operator * (float c, SoPhuc a)
	{
		SoPhuc b;
		b.Nguyen = c * a.Nguyen;
		b.Ao = c * a.Ao;
		return b;
	}
	friend SoPhuc operator / (SoPhuc c, SoPhuc a)
	{
		SoPhuc b;
		b.Nguyen = (c.Nguyen*a.Nguyen + c.Ao*a.Ao) / (a.Nguyen*a.Nguyen + a.Ao*a.Ao);
		b.Ao = (a.Nguyen*c.Ao - a.Ao*c.Nguyen) / (a.Nguyen*a.Nguyen + a.Ao*a.Ao);
		return b;
	}
};

int main()
{
	//float x, y, u, v;
	//cin >> x >> y >> u >> v;
	//SoPhuc a(x, y), b(u, v), c;
	//c = (a + b)*(b - 2 * a) / (a - 4 * b);
	//c.Xuat();
	SoPhuc a;
	a.Nhap(0, 1);
	a.Xuat();

	system("pause");
	return 0;
}