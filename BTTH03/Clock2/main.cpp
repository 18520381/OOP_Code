#include <iostream>
#include <math.h>
#include <string>
using namespace std;

class Clock
{
private:
	int h, m, s;
public:
	Clock() {};
	void Nhap(int a, int b, int c)
	{
		this->h = a;
		this->m = b;
		this->s = c;
	}
	void Chuan()
	{
		this->h = abs(this->h) % 24;
		this->m = abs(this->m) % 60;
		this->s = abs(this->s) % 60;
	}
	void IncS(int x)
	{
		this->s += x;
		if (this->s >= 60)
		{
			this->m += (this->s / 60);
			this->s = this->s % 60;
		}
		if (this->m >= 60)
		{
			this->h += (this->m / 60);
			this->m = this->m % 60;
		}
		if (this->h >= 24)	this->h = this->h % 24;
	}
	void DecS(int x)
	{
		this->s -= x;
		if (this->s < 0)
		{
			this->m -= ((abs(this->s) / 60) + 1);
			this->s = 60 - (abs(this->s) % 60);
		}
		if (this->m < 0)
		{
			this->h -= ((abs(this->m) / 60) + 1);
			this->m = 60 - (abs(this->m) % 60);
		}
		if (this->h < 0)	this->h = 24 + this->h;
	}
	Clock &operator ++()
	{
		this->s++;
		if (this->s >= 60)
		{
			this->m += (this->s / 60);
			this->s = this->s % 60;
		}
		if (this->m >= 60)
		{
			this->h += (this->m / 60);
			this->m = this->m % 60;
		}
		if (this->h >= 24)	this->h = this->h % 24;
		return *this;
	}
	Clock &operator --()
	{
		this->s--;
		if (this->s < 0)
		{
			this->m -= ((abs(this->s) / 60) + 1);
			this->s = 60 - (abs(this->s) % 60);
		}
		if (this->m < 0)
		{
			this->h -= ((abs(this->m) / 60) + 1);
			this->m = 60 - (abs(this->m) % 60);
		}
		if (this->h < 0)	this->h = 24 + this->h;
		return *this;
	}
	void Xuat()
	{
		cout << h << "h " << m << "p " << s << "s" << endl;
	}
	~Clock() {};
};

int main()
{
	Clock c;
	int h, m, s, n, x;
	string a;
	cin >> h >> m >> s;
	c.Nhap(h, m, s);
	c.Chuan();
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a == "++") ++c;
		if (a == "--") --c;
		if (a == "+")
		{
			cin >> x;
			c.IncS(x);
		}
		if (a == "-")
		{
			cin >> x;
			c.DecS(x);
		}
	}
	c.Xuat();
	system("pause");
	return 0;
}
