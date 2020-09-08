#include <iostream>
using namespace std;

class Matrix
{
private:
	float mat[100][100];
	int m,n;
public:
	Matrix()
	{
		m = 0;
		n = 0;
	}
	Matrix(int x, int y)
	{
		m = x;
		n = y;
	}
	Matrix(Matrix &v)
	{
		m = v.m;
		n = v.n;
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				mat[i][j] = v.mat[i][j];
	}
	void Nhap()
	{
		cin >> m >> n;
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				cin >> mat[i][j];
	}
	void Xuat()
	{
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
				cout << mat[i][j] << " ";
			cout << endl;
		}
	}
	int getN()
	{
		return n;
	}
	int getM()
	{
		return m;
	}
	float getMat(int i, int j)
	{
		return mat[i][j];
	}
	void setN(int a)
	{
		n = a;
	}
	void setM(int a)
	{
		m = a;
	}
	void setArr(int i, int j, float a)
	{
		mat[i][j] = a;
	}
	friend class Vector;
	friend Vector Sum(Matrix a, Vector b);

	~Matrix()
	{
		m = 0;
		n = 0;
	}
};