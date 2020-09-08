#include "Triagle.h"

#define PI 3.14

int main()
{
	float a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	Triagle x(a, b, c, d, e, f);
	float angle, length, val, ret, dis;
	cin >> angle >> length;
	val = PI / 180.0;
	ret = cos(angle*val);
	dis = length * ret;
	x.setX(dis);
	ret = sin(angle*val);
	dis = length * ret;
	x.setY(dis);
	x.printf();
	system("pause");
	return 0;
}
