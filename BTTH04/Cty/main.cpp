#include <iostream>
#include <string>
using namespace std;

class NV
{
protected:
	string Ten;
	float Luong;
public:
	NV()
	{
		Ten = "";
		Luong = 0;
	}
	~NV()
	{
		Ten = "";
		Luong = 0;
	}
};

class NVSX : public NV
{
private:
	float BaseLuong;
	int SanPham;
public:
	NVSX()
	{
		BaseLuong = 0;
		SanPham = 0;
	}
	void Nhap()
	{
		cin >> Ten >> BaseLuong >> SanPham;
		Luong = BaseLuong + SanPham * 5;
	}
	void Xuat()
	{
		cout << Ten << ": " << Luong << endl;
	}
	int getSP()
	{
		return SanPham;
	}
	~NVSX()
	{
		BaseLuong = 0;
		SanPham = 0;
	}
};

class NVVP : public NV
{
private:
	int Day;
public:
	NVVP()
	{
		Day = 0;
	}
	void Nhap()
	{
		cin >> Ten >> Day;
		Luong = Day * 100;
	}
	void Xuat()
	{
		cout << Ten << ": " << Luong << endl;
	}
	int getDay()
	{
		return Day;
	}
	~NVVP()
	{
		Day = 0;
	}
};

class Boss : public NV
{
private:
	int Day;
	int SP;
public:
	Boss()
	{
		Day = 0;
		SP = 0;
	}
	void Nhap()
	{
		cin >> Ten;
	}
	void Sum(int a, int b)
	{
		SP = a;
		Day = b;
		Luong = 100 + SP * 2 + Day * 40;
	}
	void Xuat()
	{
		cout << Ten << ": " << Luong << endl;
	}
	int getDay()
	{
		return Day;
	}
	~Boss()
	{
		Day = 0;
		SP = 0;
	}
};

int main()
{
	int n, u = 0, v = 0, k, o = 0, p = 0, q = 0, a[300];
	NVSX x[100];
	NVVP y[100];
	Boss z[100];
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> k;
		a[i] = k;
		switch (k)
		{
		case 1:
		{
			o++;
			x[o].Nhap();
			u += x[o].getSP();
			break;
		}
		case 2:
		{
			p++;
			y[p].Nhap();
			v += y[p].getDay();
			break;
		}
		case 3:
		{
			q++;
			z[q].Nhap();
			break;
		}
		}
		z[1].Sum(u, v);
	}
	o = 0; p = 0; q = 0;
	for (int i = 1; i <= n; i++)
	{
		k = a[i];
		switch (k)
		{
		case 1:
		{
			o++;
			x[o].Xuat();
			break;
		}
		case 2:
		{
			p++;
			y[p].Xuat();
			break;
		}
		case 3:
		{
			q++;
			z[q].Xuat();
			break;
		}
		}
	}
	system("pause");
	return 0;
}