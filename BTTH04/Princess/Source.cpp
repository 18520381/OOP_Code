#include <iostream>
using namespace std;

class Prince
{
private:
	int Money;
	int Intel;
	int Power;
public:
	Prince()
	{
		Money = 0;
		Intel = 0;
		Power = 0;
	}
	void Nhap()
	{
		cin >> Money >> Intel >> Power;
	}
	void Trader(int x, int y)
	{
		Money = Money - x * y;
	}
	void Sorcerer(int x)
	{
		if (Intel < x) Intel = -1;
	}
	void Fighter(int x)
	{
		if (Power > x) Power = Power - x;
		else Power = -1;
	}
	void Xuat()
	{
		if ((Money > -1) && (Intel > -1) && (Power > -1))
			cout << Money << " " << Intel << " " << Power;
		else cout << "-1";
	}
	~Prince()
	{}
};

int main()
{
	Prince a;
	int n, t[100], x[100], y[100];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> t[i];
		if (t[i] == 1)	cin >> x[i] >> y[i];
		else	cin >> x[i];
	}
	a.Nhap();
	for (int i = 0; i < n; i++)
	{
		if (t[i] == 1) a.Trader(x[i], y[i]);
		else if (t[i] == 2) a.Sorcerer(x[i]);
		else a.Fighter(x[i]);
	}
	a.Xuat();

	system("pause");
	return 0;
}