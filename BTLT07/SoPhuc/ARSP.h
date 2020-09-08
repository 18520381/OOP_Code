#pragma once
#include "SoPhuc.h"

class ARSP
{
private:
	int n;
	SoPhuc arr[1000];
public:
	ARSP()
	{
		this->n = 0;
	}
	void Nhap()
	{
		cin >> n;
		for (int i = 0; i < n; i++) cin >> arr[i];
	}
	SoPhuc operator[](int i)
	{
		return arr[i];
	}
	int getN()
	{
		return(this->n);
	}
	friend void check(ARSP a, int i);
	void up(int i)
	{
		if (i % 2 == 0)	this->arr[i]++;
	}
};