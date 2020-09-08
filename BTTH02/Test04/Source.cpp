#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class List
{
private:
	double arr[1000];
	int n;
public:
	List()
	{
		n = 0;
	}
	List(double a[], int k)
	{
		this->n = k;
		for (int i = 0; i < this->n; i++)
			this->arr[i] = a[i];
	}
	~List()
	{
		n = 0;
	}

	void printf()
	{
		if (n != 0)
		{
			cout << "[";
			for (int i = 0; i < this->n - 1; i++)
				cout << this->arr[i] << ",";
			cout << this->arr[this->n - 1] << "]" << endl;
		}
		else cout << "[" << "]";
	}
	void add(double x)
	{
		this->arr[this->n] = x;
		this->n++;
	}
	void remove(double x)
	{
		if (this->n != 0)
			for (int i = 0; i < n; i++)
			{
				if (this->arr[i] == x)
				{
					for (int j = i; j < n - 1; j++)
						this->arr[j] = this->arr[j + 1];
					this->arr[n - 1] = 0;
					this->n--;
					break;
				}
			}
	}
	void removeAll(double x)
	{
		if (this->n != 0)
			for (int i = 0; i < n; i++)
			{
				if (this->arr[i] == x)
				{
					for (int j = i; j < n - 1; j++)
						this->arr[j] = this->arr[j + 1];
					this->arr[n - 1] = 0;
					this->n--;
					i--;
				}
			}
	}
	void change(int k, double x)
	{
		if (k <= n)
			this->arr[k] = x;
	}
};

int main() {
	List l;
	int n, k;
	double x;
	do
	{
		cin >> n;
		switch (n)
		{
		case 0:
			cin >> x;
			l.add(x);
			break;
		case 1:
			cin >> x;
			l.remove(x);
			break;
		case 2:
			cin >> x;
			l.removeAll(x);
			break;
		case 3:
			cin >> k >> x;
			l.change(k, x);
			break;
		}
	} while (n != -1);
	l.printf();
	system("pause");
	return 0;
}