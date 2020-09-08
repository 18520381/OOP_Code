#include "PS.h"

int main()
{
	PS x,y,z;
	cin >> x >> y;
	cout << "x=" << x << "y=" << y;
	z = x + y;
	cout << "x+y=" << z;
	z = x - y;
	cout << "x-y=" << z;

	system("pause");
	return 0;
}