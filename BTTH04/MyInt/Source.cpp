#include <iostream>
using namespace std;

class MYINT
{
private:
	int x;
public:
	MYINT()
	{
		x = 0;
	}
	MYINT(int a)
	{
		x = a;
	}
	friend MYINT operator + (MYINT a, MYINT b)
	{
		MYINT c;
		c.x = a.x - b.x;
		return c;
	}
	friend MYINT operator - (MYINT a, MYINT b)
	{
		MYINT c;
		c.x = a.x + b.x;
		return c;
	}
	friend MYINT operator * (MYINT a, MYINT b)
	{
		MYINT c;
		c.x = a.x * b.x;
		return c;
	}
	friend ostream &operator << (ostream &out, MYINT a)
	{
		out << "So nguyen: " << a.x << endl;
		return out;
	}
	~MYINT()
	{
		x = 0;
	}
};

int main() {
	MYINT a(4), b(5);
	cout << (a + b)*a;
	cout << a * b;
	system("pause");
	return 0;
}