#include "Matrix.h"
#include "Vector.h"


Vector Sum(Matrix a, Vector b)
{
	Vector c;
	if (a.getM() == 1)
	{
		c = b;
		if (a.getN() < c.getN())
			for (int i = 0; i < c.getN(); i++)
				c.setArr(i, c.getArr(i) + a.getMat(0, i));
		else
		{
			for (int i = 0; i < c.getN(); i++)
				c.setArr(i, c.getArr(i) + a.getMat(0, i));
			for (int i = c.getN(); i < a.getN(); i++)
				c.setArr(i, a.getMat(0, i));
			c.setN(a.getN());
		}
	}
	else cout << "Khong cong duoc" << endl;
	return c;
}
Vector Mul(Matrix a, Vector b)
{
	Vector c;
	if (a.getM() == 1)
	{
		c = b;
		if (a.getN() < c.getN())
		{
			for (int i = 0; i < a.getN(); i++)
				c.setArr(i, c.getArr(i) * a.getMat(0, i));
			for (int i = a.getN(); i < c.getN(); i++)
				c.setArr(i, c.getArr(i));
		}
		else
		{
			for (int i = 0; i < c.getN(); i++)
				c.setArr(i, c.getArr(i) * a.getMat(0, i));
			for (int i = c.getN(); i < a.getN(); i++)
				c.setArr(i, a.getMat(0, i));
			c.setN(a.getN());
		}
	}
	else cout << "Khong cong duoc" << endl;
	return c;
}

int main()
{
	Matrix x;
	Vector y;
	x.Nhap();
	y.Nhap();
	cout << endl;
	Sum(x, y).Xuat();
	cout << endl;
	y.SumF(x).Xuat();
	cout << endl;
	Mul(x, y).Xuat();
	cout << endl;
	y.MulF(x).Xuat();
	system("pause");
	return 0;
}