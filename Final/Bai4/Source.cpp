#include <iostream>
#include <string>
using namespace std;

class Champion
{
protected:
	int def;
public:
	Champion()
	{}
	Champion(int x)
	{
		def = x;
	}
	virtual void Xuat()
	{
		cout << "Sat thuong duoc giam: " << def << endl;
	}
	~Champion()
	{}
};


class Malphite : public Champion
{
public:
	Malphite(int x)
	{
		def = x;
	}
	Malphite(int x, int y)
	{
		def = x * y *2;
	}
	void Xuat()
	{
		cout << "Malphite - Sat thuong duoc giam: " << def << endl;
	}
	~Malphite()
	{}
};

class ChoGath : public Champion
{
public:
	ChoGath(int x)
	{
		def = x;
	}
	ChoGath(int x, int y)
	{
		def = 0;
		for (int i = 0; i < y; i++)
		{
			def += i * 5 + x;
		}
	}
	void Xuat()
	{
		cout << "Cho'Gath - Sat thuong duoc giam: " << def << endl;
	}
	~ChoGath()
	{}
};


class Total : public Champion
{
private:
	int n;
	Champion *a[100];
	int b[100];
	int c[100];
public:
	Total()
	{}
	void Nhap()
	{
		int y;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> b[i] >> c[i];
		}
		cin >> y;
		for (int i = 0; i < n; i++)
		{
			switch (b[i])
			{
			case 1:
			{
				a[i] = new Malphite(c[i] + 10, y);
				break;
			}
			case 2:
			{
				a[i] = new ChoGath(c[i] + 10, y);
				break;
			}
			}
		}
	}
	void Xuat()
	{
		for (int i = 0; i < n; i++)
		{
			a[i]->Xuat();
		}
	}
	~Total()
	{}
};

int main() {
	Total a;
	a.Nhap();
	a.Xuat();
	system("pause");
	return 0;
}