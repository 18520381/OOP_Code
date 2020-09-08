#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int doy[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

bool CheckYear(int y)
{
	if (y % 4 == 0)
	{
		if ((y % 100 == 0) && (y % 400 != 0)) return(false);
		return(true);
	}
	return(false);
}
void IncDay(int &d, int &m, int &y)
{
	if (CheckYear(y)) doy[2] = 29;
	else doy[2] = 28;
	d++;
	if (d > doy[m])
	{
		d = 1;
		m++;
	}
	if (m > 12)
	{
		m = 1;
		y++;
	}
}
void DecDay(int &d, int &m, int &y)
{
	if (CheckYear(y)) doy[2] = 29;
	else doy[2] = 28;
	d--;
	if (d == 0)
	{
		m--;
		if (m == 0)
		{
			m = 12;
			y--;
		}
		d = doy[m];
	}
}
int Dis(int a, int b, int c, int d, int m, int y)
{
	if ((c == y) && (b == m) && (a == d)) return(0);
	bool big = false;
	int t = 0;
	if (c > y) big = true;
	if ((c == y) && (b > m)) big = true;
	if ((c == y) && (b == m) && (a > d)) big = true;
	while ((c != y) || (b != m) || (a != d))
	{
		if (big) DecDay(a, b, c);
		else IncDay(a, b, c);
		t++;
	}
	return (t);
}


int main() {
	int d, m, y, x, n=0;
	
	cin >> d >> m >> y;
	d = abs(d);
	m = abs(m);
	y = abs(y);
	if (CheckYear(y)) doy[2] = 29;
	m = m % 12;
	if (m == 0) m = 12;
	if (d > doy[m]) d = 1;
	while (n != 3)
	{
		cin >> n;
		switch (n)
		{
		case 1:
			cin >> x;
			for (int i = 1; i <= x; i++) IncDay(d, m, y);
		break;
		case 2:
			cin >> x;
			for (int i = 1; i <= x; i++) DecDay(d, m, y);
			break;
		case 3:
			int a, b, c;
			cin >> a >> b >> c;
			cout << Dis(a, b, c, d, m, y);
			break;
		}
	}
	system("pause");
	return 0;
}
