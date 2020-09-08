#include <iostream>
using namespace std;

class DaThuc
{
	int n;
	int a[1000];
public:
	DaThuc()
	{
		n = 0;
		for (int i = 0; i < 999; i++) a[i] = 0;
	}
	void Nhap(int k)
	{
		this->n = k;
		for (int i = 0; i <= this->n; i++)
			cin >> this->a[i];
	}
	friend DaThuc operator + (DaThuc d, DaThuc b)
	{
		DaThuc c;
		int t;
		if (d.n > b.n)
		{
			t = b.n;
			c.n = d.n;
			for (int i = d.n; i > b.n; i--) c.a[i] = d.a[i];
		}
		else
		{
			t = d.n;
			c.n = b.n;
			for (int i = b.n; i > d.n; i--) c.a[i] = b.a[i];
		}
		for (int i = t; i >= 0; i--) c.a[i] = d.a[i] + b.a[i];
		return c;
	}
	friend DaThuc operator - (DaThuc d, DaThuc b)
	{
		DaThuc c;
		int t;
		if (d.n > b.n)
		{
			t = b.n;
			c.n = d.n;
			for (int i = d.n; i > b.n; i--) c.a[i] = d.a[i];
		}
		else
		{
			t = d.n;
			c.n = b.n;
			for (int i = b.n; i > d.n; i--) c.a[i] = -b.a[i];
		}
		for (int i = t; i >= 0; i--) c.a[i] = d.a[i] - b.a[i];
		return c;
	}
	friend DaThuc operator * (DaThuc d ,DaThuc b)
	{
		DaThuc c;
		c.n = d.n + b.n;
		for (int i = 0; i <= d.n; i++)
			for (int j = 0; j <= b.n; j++)
				c.a[i + j] += d.a[i] * b.a[j];
		return c;
	}
	void Xuat()
	{
		if (this->a[0] != 0) cout << this->a[0] << "x^0";
		for (int i = 1; i <= this->n; i++)
			if (this->a[i] != 0)
			{
				if (this->a[i] < 0) cout << this->a[i] << "x^" << i;
				else cout << "+" << this->a[i] << "x^" << i;
			}
	}
	~DaThuc()
	{}
};

int main()
{
	DaThuc a, b, c;
	int m;
	char n;
	cin >> m;
	a.Nhap(m);
	cin >> m;
	b.Nhap(m);
	cin >> n;
	if (n == '+') c = a + b;
	if (n == '-') c = a - b;
	if (n == '*') c = a * b;
	c.Xuat();
	system("pause");
	return 0;
}
