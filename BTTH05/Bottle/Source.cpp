#include <iostream>
using namespace std;

class Total
{
public:
	Total()
	{}
	virtual float TheTich()
	{
		return 0;
	}
	virtual float DienTich()
	{
		return 0;
	}
	~Total()
	{}
};
class Tru : public Total
{
protected:
	int Cao;
	int Day;
public:
	Tru(int x, int r)
	{
		Cao = x;
		Day = r;
	}
	virtual float TheTich()
	{
		return 3.14*Day*Day*Cao;
	}
	virtual float DienTich()
	{
		return 2 * 3.14*Day* Cao;
	}
	~Tru()
	{}
};
class Hop : public Total
{
protected:
	int Cao;
	int Dai; 
	int Rong;
public:
	Hop(int x, int y, int z)
	{
		Cao = x;
		Dai = y;
		Rong = z;
	}
	virtual float TheTich()
	{
		return Dai*Rong*Cao;
	}
	virtual float DienTich()
	{
		return 2*(Dai+Rong)*Cao + 2*Dai*Rong;
	}
	~Hop()
	{}
};
class Lap : public Total
{
protected:
	int Canh;
public:
	Lap(int c)
	{
		Canh = c;
	}
	virtual float TheTich()
	{
		return Canh*Canh*Canh;
	}
	virtual float DienTich()
	{
		return Canh * 4 * 6;
	}
	~Lap()
	{}
};

class End : public Total
{
private:
	int n;
	Total *a[100];
	float SumDT;
	float SumTT;
public:
	End()
	{
		SumDT = 0;
		SumTT = 0;
	}
	void Nhap()
	{
		int t,x,y,z;
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			cin >> t;
			switch (t)
			{
			case 1:
			{
				cin >> x >> y;
				a[i] = new Tru(x, y);
				break;
			}
			case 2:
			{
				cin >> x >> y >> z;
				a[i] = new Hop(x, y, z);
				break;
			}
			case 3:
			{
				cin >> x;
				a[i] = new Lap(x);
				break;
			}
			}
		}
	}
	void Xuat()
	{
		for (int i = 1; i <= n; i++)
		{
			SumDT += a[i]->DienTich();
			SumTT += a[i]->TheTich();
		}
		cout << "Dien tich chai vo: " << SumDT << endl;
		cout << "Luong nuoc tren mat dat: " << SumTT/10 << endl;
	}
	~End()
	{}
};

int main()
{
	End a;
	a.Nhap();
	a.Xuat();

	system("pause");
	return 0;
}