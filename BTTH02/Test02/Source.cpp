#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

float up1(float a, float b)
{
	float x = 1;
	for (float i = 1; i <= b; i++) x = x * a;
	return(x);
}

float up2(float a, float b)
{
	return(up1(a, up1(a, b)));
}

float up3(float a, float b)
{
	return(up2(a, up2(a, b)));
}

int main() {
	float a, b, c;
	cin >> a >> c >> b;
	if (c == 0) cout << "1";
	if (c == 1) cout << up1(a, b);
	if (c == 2) cout << up2(a, b);
	if (c == 3) cout << up3(a, b);
	system("pause");
	return 0;

}
