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
	DaThuc Sum(DaThuc b)
	{
		DaThuc c;
		int t;
		if (this->n > b.n)
		{
			t = b.n;
			c.n = this->n;
			for (int i = this->n; i > b.n; i--) c.a[i] = this->a[i];
		}
		else
		{
			t = this->n;
			c.n = b.n;
			for (int i = b.n; i > this->n; i--) c.a[i] = b.a[i];
		}
		for (int i = t; i >= 0; i--) c.a[i] = this->a[i] + b.a[i];
		return c;
	}
	DaThuc Sub(DaThuc b)
	{
		DaThuc c;
		int t;
		if (this->n > b.n)
		{
			t = b.n;
			c.n = this->n;
			for (int i = this->n; i > b.n; i--) c.a[i] = this->a[i];
		}
		else
		{
			t = this->n;
			c.n = b.n;
			for (int i = b.n; i > this->n; i--) c.a[i] = -b.a[i];

		}
		for (int i = t; i >= 0; i--) c.a[i] = this->a[i] - b.a[i];
		return c;
	}
	DaThuc Mul(DaThuc b)
	{
		DaThuc c;
		c.n = this->n + b.n;
		for (int i = 0; i <= this->n; i++)
			for (int j = 0; j <= b.n; j++)
				c.a[i + j] += this->a[i] * b.a[j];

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
	int n;
	cin >> n;
	a.Nhap(n);
	cin >> n;
	b.Nhap(n);
	cin >> n;
	if (n == 1) c = a.Sum(b);
	if (n == 2) c = a.Sub(b);
	if (n == 3) c = a.Mul(b);
	c.Xuat();
	system("pause");
	return 0;
}
