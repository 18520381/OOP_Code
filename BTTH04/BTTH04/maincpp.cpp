#include <iostream>
#include <string>
using namespace std;

class Sach
{
protected:
	string Ten;
	string TacGia;
public:
	Sach()
	{
		Ten = "";
		TacGia = "";
	}
	void Nhap()
	{
		cin >> Ten >> TacGia;
	}
	~Sach()
	{
		Ten = "";
		TacGia = "";
	}
};

class SGK : public Sach
{
private:
	string MonHoc;
public:
	SGK()
	{
		MonHoc = "";
	}
	void Nhap()
	{
		cin >> Ten >> TacGia >> MonHoc;
	}
	void Xuat()
	{
		cout << Ten << " - " << TacGia << " - " << MonHoc << endl;
	}
	~SGK()
	{
		MonHoc = "";
	}
};

class Truyen : public Sach
{
private:
	string TheLoai;
public:
	Truyen()
	{
		TheLoai = "";
	}
	void Nhap()
	{
		cin >> Ten >> TacGia >> TheLoai;
	}
	void Xuat()
	{
		cout << Ten << " - " << TacGia << " - " << TheLoai << endl;
	}
	~Truyen()
	{
		TheLoai = "";
	}
};

class TapChi : public Sach
{
private:
	string ToaSoan;
public:
	TapChi()
	{
		ToaSoan = "";
	}
	void Nhap()
	{
		cin >> Ten >> TacGia >> ToaSoan;
	}
	void Xuat()
	{
		cout << Ten << " - " << TacGia << " - " << ToaSoan << endl;
	}
	~TapChi()
	{
		ToaSoan = "";
	}
};

int main()
{
	int n, k, o = 0, p = 0, q = 0, a[300];
	SGK x[100];
	Truyen y[100];
	TapChi z[100];
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
				break;
			}
			case 2:
			{
				p++;
				y[p].Nhap();
				break;
			}
			case 3:
			{
				o++;
				z[q].Nhap();
				break;
			}
		}
	}
	o = 0; p = 0; q = 0;
	for (int i = 1; i <= n; i++)
	{
		cout << i << " - ";
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
			o++;
			z[q].Xuat();
			break;
		}
		}
	}
	system("pause");
	return 0;
}