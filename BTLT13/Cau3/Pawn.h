#pragma once
#include "Chess.h"

class Pawn : public Chess
{
public:
	Pawn(int a, int b) : Chess(a, b)
	{
		Kind = 7;
	}
	void CanGo(int k, int v[10][9])
	{
		int a[3] = { 1,0,0 };
		int b[3] = { 0,1,-1 };
		int c[3] = { -1,0,0 };
		int d[3] = { 0,1,-1 };
		cout << "Pawn: " << x << " " << y << endl;
		int n = 1;
		if (k < 16)
		{
			if (x >= 5) n += 2;
			for (int i = 0; i < n; i++)
				if ((x + a[i] >= 0) && (x + a[i] <= 9) 
					&& (y + b[i] >= 0) && (y + b[i] <= 9)
					&& ((v[x + a[i]][y + b[i]] == -1) || (v[x + a[i]][y + b[i]] >= 16)))
					cout << x+a[i] << " " << y+b[i] << endl;
		}
		else
		{
			if (x <= 4) n += 2;
			for (int i = 0; i < n; i++)
				if ((x + c[i] >= 0) && (x + c[i] <= 9)
					&& (y + d[i] >= 0) && (y + d[i] <= 9)
					&& (v[x + c[i]][y + d[i]] < 16))
					cout << x + c[i] << " " << y + d[i] << endl;
		}
	}
	~Pawn()
	{}
};