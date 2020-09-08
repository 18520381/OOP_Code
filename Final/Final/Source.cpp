#include <iostream>
#include <string>
using namespace std;

class Quaternion
{
private:
	int a, b, c, d;
public:
	Quaternion()
	{}
	friend istream &operator >> (istream &in, Quaternion &x)
	{
		in >> x.a;
		in >> x.b;
		in >> x.c;
		in >> x.d;
		return in;
	}
	friend ostream &operator << (ostream &os, const Quaternion &x)
	{
		os << "(" << x.a << "," << x.b << "," << x.c << "," << x.d << ")";
		return os;
	}
	friend Quaternion operator + (Quaternion x, Quaternion y)
	{
		Quaternion c;
		c.a = x.a + y.a;
		c.b = x.b + y.b;
		c.c = x.c + y.c;
		c.d = x.d + y.d;
		return c;
	}
	friend Quaternion operator - (Quaternion x, Quaternion y)
	{
		Quaternion c;
		c.a = x.a - y.a;
		c.b = x.b - y.b;
		c.c = x.c - y.c;
		c.d = x.d - y.d;
		return c;
	}
	~Quaternion()
	{}
};

int main() {
	Quaternion a, b;
	cin >> a >> b;
	cout << a + b;
	cout << endl;
	cout << a - b;
	system("pause");
	return 0;
}