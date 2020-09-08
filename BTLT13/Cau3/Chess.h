#pragma once
#include <iostream>
using namespace std;

class Chess
{
protected:
	int x;
	int y;
	int Kind;
public:
	Chess()
	{
		x = 0; y = 0; Kind = 0;
	}
	Chess(int a, int b)
	{
		x = a; y = b;
	}
	virtual void CanGo(int k, int v[10][9])
	{}
	~Chess()
	{}
};
