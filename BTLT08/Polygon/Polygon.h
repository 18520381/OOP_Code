#include "Point.h"

class Polygon
{
protected:
	int n;
	Point a[100];
public:
	Polygon()
	{
		n = 0;
	}
	Polygon(int a)
	{
		n = a;
	}
	void Nhap()
	{
		for (int i = 1; i <= n; i++)
			a[i].Nhap();
		cout << endl;
	}
	void Xuat()
	{
		for (int i = 1; i <= n; i++)
			a[i].Xuat();
		cout << endl;
	}
	~Polygon()
	{
		n = 0;
	}
};
