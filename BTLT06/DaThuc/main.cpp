#include "DaThuc.h"

int main()
{
	int a[6] = {1,0,1,3,0,1};
	DaThuc dt(5, a);
	cout << dt.Cal(5);
	system("pause");
	return 0;
}