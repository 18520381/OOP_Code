#include <iostream>
using namespace std;

class Vector
{
private:
	float arr[100];
	int n;
public:
	Vector()
	{
		n = 0;
	}
	Vector(int x)
	{
		n = x;
	}
	Vector(Vector &v)
	{
		n = v.n;
		for (int i = 0; i < n; i++)
			arr[i] = v.arr[i];
	}
	void Nhap()
	{
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> arr[i];
	}
	void Xuat()
	{
		for (int i = 0; i < n; i++)
			cout << arr[i] << " ";
		cout << endl;
	}
	int getN()
	{
		return n;
	}
	float getArr(int i)
	{
		return arr[i];
	}
	void setN(int a)
	{
		n = a;
	}
	void setArr(int i, float a)
	{
		arr[i] = a;
	}
	friend class Matrix;
	friend Vector Sum(Matrix a, Vector b);

	Vector SumF(Matrix b)
	{
		Vector c;
		if (b.m == 1)
		{
			c.n = this->n;
			if (b.n < c.n)
				for (int i = 0; i < c.n; i++)
					c.arr[i] = this->arr[i] + b.mat[0][i];
			else
			{
				for (int i = 0; i < c.n; i++)
					c.arr[i] = this->arr[i] + b.mat[0][i];
				for (int i = c.n; i < b.n; i++)
					c.arr[i] = b.mat[0][i];
				c.n=b.n;
			}
		}
		else cout << "Khong cong duoc" << endl;
		return c;
	}
	Vector MulF(Matrix b)
	{
		Vector c;
		if (b.m == 1)
		{
			c.n = this->n;
			if (b.n < c.n)
			{
				for (int i = 0; i < b.n; i++)
					c.arr[i] = this->arr[i] * b.mat[0][i];
				for (int i = b.n; i < c.n; i++)
					c.arr[i] = this->arr[i];
			}
			else
			{
				for (int i = 0; i < c.n; i++)
					c.arr[i] = this->arr[i] * b.mat[0][i];
				for (int i = c.n; i < b.n; i++)
					c.arr[i] = b.mat[0][i];
				c.n = b.n;
			}
		}
		else cout << "Khong cong duoc" << endl;
		return c;
	}
	~Vector()
	{
		n = 0;
	}
};

