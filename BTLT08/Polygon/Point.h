#include <iostream>
using namespace std;

class Point
{
private:
	float x, y;
public:
	Point()
	{
		x = 0; y = 0;
	}
	Point(float a, float b)
	{
		x = a; y = b;
	}
	void Nhap()
	{
		float a, b;
		cin >> a >> b;
		x = a; y = b;
	}
	void Xuat()
	{
		cout << "x=" << x << " y=" << y << endl;
	}
	~Point()
	{
		x = 0; y = 0;
	}
};