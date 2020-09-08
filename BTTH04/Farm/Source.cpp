#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
	string Chirp;
	int Amount;
	int Milk;
public:
	Animal()
	{
		Chirp = "";
		Amount = 0;
		Milk = 0;
	}
};

class Cow : public Animal
{
private:
	int v0;
	int v1;
	int v2;
	int v3;
public:
	Cow()
	{
		v0 = 0;
		v1 = 0;
		v2 = 0;
		v3 = 0;
	}
	void Nhap()
	{
		cin >> Amount;
		Chirp = "Booo";
	}
	void Xuat1()
	{
		for (int i = 1; i <= Amount; i++)
			cout << Chirp << ",";
	}
	void Xuat2()
	{
		cout << "Bo: " << Amount << "," << Milk << endl;
	}
	void Up()
	{
		Amount += v3;
		v3 = v2;
		v2 = v1;
		v1 = v0;
		v0 = Amount / 2;
		Milk = Milk + Amount * 10;
	}
	void Sum()
	{
		Amount = Amount + v0 + v1 + v2 + v3;
	}
};

class Lamb : public Animal
{
private:
	int v0;
	int v1;
	int v2;
	int v3;
public:
	Lamb()
	{
		v0 = 0;
		v1 = 0;
		v2 = 0;
		v3 = 0;
	}
	void Nhap()
	{
		cin >> Amount;
		Chirp = "Beee";
	}
	void Xuat1()
	{
		for (int i = 1; i <= Amount; i++)
			cout << Chirp << ",";
	}
	void Xuat2()
	{
		cout << "Cuu: " << Amount << "," << Milk << endl;
	}
	void Up()
	{
		Amount += v3;
		v3 = v2;
		v2 = v1;
		v1 = v0;
		v0 = Amount / 2;
		Milk = Milk + Amount * 5;
	}
	void Sum()
	{
		Amount = Amount + v0 + v1 + v2 + v3;
	}
};

class Goat : public Animal
{
private:
	int v0;
	int v1;
	int v2;
	int v3;
public:
	Goat()
	{
		v0 = 0;
		v1 = 0;
		v2 = 0;
		v3 = 0;
	}
	void Nhap()
	{
		cin >> Amount;
		Chirp = "Eeee";
	}
	void Xuat1()
	{
		for (int i = 1; i <= Amount; i++)
			cout << Chirp << ",";
	}
	void Xuat2()
	{
		cout << "De: " << Amount << "," << Milk << endl;
	}
	void Up()
	{
		Amount += v3;
		v3 = v2;
		v2 = v1;
		v1 = v0;
		v0 = Amount / 2;
		Milk = Milk + Amount * 8;
	}
	void Sum()
	{
		Amount = Amount + v0 + v1 + v2 + v3;
	}
};

class Rabit : public Animal
{
private:
	int v0;
	int v1;
public:
	Rabit()
	{
		v0 = 0;
		v1 = 0;
	}
	void Nhap()
	{
		cin >> Amount;
		Chirp = "";
	}
	void Xuat1()
	{

		for (int i = 1; i <= Amount - 1; i++)
			cout << ",";
		cout << endl;
	}
	void Xuat2()
	{
		cout << "Tho: " << Amount << "," << Milk << endl;
	}
	void Up()
	{
		Amount += v1;
		v1 = v0;
		v0 = Amount / 2;
		cout << Amount << " " << v0 << "(0) " << v1 << "(1)" << endl;
	}
	void Sum()
	{
		Amount = Amount + v0 + v1;
	}
};

int main()
{
	Cow a;
	Lamb b;
	Goat c;
	Rabit d;

	a.Nhap();
	b.Nhap();
	c.Nhap();
	d.Nhap();

	int n;
	cin >> n;

	a.Xuat1();
	b.Xuat1();
	c.Xuat1();
	d.Xuat1();

	for (int i = 1; i <= n; i++)
	{
		a.Up();
		b.Up();
		c.Up();
		d.Up();
	}

	a.Sum();
	b.Sum();
	c.Sum();
	d.Sum();

	a.Xuat2();
	b.Xuat2();
	c.Xuat2();
	d.Xuat2();

	system("pause");
	return 0;
}