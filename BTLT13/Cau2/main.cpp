#include "DaThuc.h"

int main()
{
	DaThuc a, b, c;
	int x;
	cin >> a >> b;
	cout << a << b;
	c = a + b;
	cout << c;
	cin >> x;
	cout << "F(" << x << ")=" << c.Cal1(x) << endl;
	c.Cal2();

	system("pause");
	return 0;
}