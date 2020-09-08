#include <math.h>
#include <iostream>
using namespace std;

struct point
{
	float x, y;
};

float calArea(point A, point B, point C) {
		return (0.5*abs((C.x - A.x)*(B.y - A.y) - (B.x - A.x)*(C.y - A.y)));
};


int main() {
	int n;
	float x, y, Area;
	cin >> n;
	point p[1000];
	float s[1000];
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		p[i].x = x;
		p[i].y = y;
		p[n + i].x = x;
		p[n + i].y = y;
	}
	for (int i = 0; i < n; i++)
	{
		s[i] = 0;
		for (int j = i + 1; j < i + n - 1; j++)
			s[i] = s[i] + calArea(p[i], p[j], p[j + 1]);
		if (i == 0) Area = s[i];
		if (s[i] < Area) Area = s[i];
	}
	cout << Area;

	system("pause");
	return 0;
}
