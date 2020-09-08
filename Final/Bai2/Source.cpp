#include <iostream>
#include <string>
using namespace std;

class Thuyen
{
protected:
	string SoHieu;
	int ThanhVien;
public:
	Thuyen()
	{}
	Thuyen(string sh, int tv)
	{
		SoHieu = sh;
		ThanhVien = tv;
	}
	virtual void Xuat()
	{
		cout << SoHieu << " - ";
		cout << ThanhVien << " thuyen vien\n";
	}
	~Thuyen()
	{}
};

class Ghe : public Thuyen
{
private: 
	int DongCo;
public:
	Ghe(string sh, int tv, int dc)
	{
		SoHieu = sh;
		ThanhVien = tv;
		DongCo = dc;
	}
	void Xuat()
	{
		cout << SoHieu << " - Ghe - ";
		cout << ThanhVien << " thuyen vien - ";
		if (DongCo == 1) cout << "Co Dong Co\n";
	}
	~Ghe()
	{}
};
class ThuyenNho : public Thuyen
{
private:
	string Hang;
public:
	ThuyenNho(string sh, int tv, string h)
	{
		SoHieu = sh;
		ThanhVien = tv;
		Hang = h;
	}
	void Xuat()
	{
		cout << SoHieu << " - Thuyen thuong - ";
		cout << ThanhVien << " thuyen vien - ";
		cout << Hang << endl;
	}
	~ThuyenNho()
	{}
};
class ThuyenLon : public Thuyen
{
private:
	string Hang;
	int Phamvi;
public:
	ThuyenLon(string sh, int tv, string h, int pv)
	{
		SoHieu = sh;
		ThanhVien = tv;
		Hang = h;
		Phamvi = pv;
	}
	void Xuat()
	{
		cout << SoHieu << " - Thuyen lon - ";
		cout << ThanhVien << " thuyen vien - ";
		cout << Hang << " - ";
		cout << Phamvi << "m\n";
	}
	~ThuyenLon()
	{}
};

class Total : public Thuyen
{
private:
	int n;
	Thuyen *a[100];
public:
	Total()
	{}
	void Nhap()
	{
		int t, tv, pv, dc;
		string sh, h;
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			cin >> t;
			switch (t)
			{
			case 1:
			{
				cin.ignore();
				getline(cin, sh);
				cin >> tv;
				cin >> dc;
				a[i] = new Ghe(sh,tv,dc);
				break;
			}
			case 2:
			{
				cin.ignore();
				getline(cin, sh);
				cin >> tv;
				getline(cin, h);
				a[i] = new ThuyenNho(sh,tv,h);
				break;
			}
			case 3:
			{
				cin.ignore();
				getline(cin, sh);
				cin >> tv;
				getline(cin, h);
				cin >> pv;
				a[i] = new ThuyenLon(sh,tv,h,pv);
				break;
			}
			}
		}
	}
	void Xuat()
	{
		for (int i = 1; i <= n; i++)
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