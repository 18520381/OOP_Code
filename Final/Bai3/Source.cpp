#include <iostream>
#include <string>
using namespace std;

class Champion
{
protected:
	int dmg;
public:
	Champion()
	{}
	Champion(int x)
	{
		dmg = x;
	}
	virtual void Xuat()
	{
		cout << "Sat thuong gay ra: " << dmg << endl;
	}
	~Champion()
	{}
};


class Zed : public Champion
{
public:
	Zed(int x)
	{
		dmg = x;
	}
	Zed(int x, int y)
	{
		dmg = x * y + x * (y / 3) * 2;
	}
	void Xuat()
	{
		cout << "Zed - Sat thuong gay ra: " << dmg << endl;
	}
	~Zed()
	{}
};

class Shaco : public Champion
{
public:
	Shaco(int x)
	{
		dmg = x;
	}
	Shaco(int x, int y)
	{
		dmg = x * y * 2;
	}
	void Xuat()
	{
		cout << "Shaco - Sat thuong gay ra: " << dmg << endl;
	}
	~Shaco()
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
				a[i] = new Shaco(c[i] + 10, y);
				break;
			}
			case 2:
			{
				a[i] = new Zed(c[i] + 10, y);
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