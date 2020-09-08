#include <iostream>
using namespace std;

float up(float k, int n)
{
	float t = 1;
	for (int i = 0; i < n; i++) t = t * k;
	return(t);
}

class DaThuc
{
	int n;
	int a[1000];
public:
	DaThuc()
	{
		n = 0;
	}
	DaThuc(int k)
	{
		n = k;
	}
	DaThuc(int k, int b[])
	{
		this->n = k;
		for (int i = 0; i <= this->n; i++)
			this->a[i] = b[i];

	}
	void Nhap(int k)
	{
		this->n = k;
		for (int i = 0; i <= this->n; i++)
			cin >> this->a[i];
	}
	float Cal(int x)
	{
		float t = 0;
		for (int i = 0; i <= this->n; i++)
			t = t + a[i] * up(x, i);
		return(t);
	}
	~DaThuc()
	{
		n = 0;
	}
};

