#pragma once
#include "Chess.h"

class Knight : public Chess
{
public:
	Knight(int a, int b) : Chess(a, b)
	{
		Kind = 5;
	}
	void CanGo(int k, int v[10][9])
	{
		int m[8] = { -2,-2,-1,1,2,2,1,-1 };
		int n[8] = { -1,1,2,2,1,-1,-2,-2 };
		int p[8] = { -1,-1,0,0,1,1,0,0 };
		int q[8] = { 0,0,1,1,0,0,-1,-1 };
		cout << "Knight: " << x << " " << y << endl;
		for (int i = 0; i < 8; i++)
			if (k < 16)
			{
				if ((x + m[i] >= 0) && (x + m[i] <= 9) && (y + n[i] >= 0) && (y + n[i] <= 8)
					&& ((v[x + m[i]][y + n[i]] == -1) || (v[x + m[i]][y + n[i]] >= 16))
					&& (v[x + p[i]][y + q[i]] == -1))
					cout << x + m[i] << " " << y + n[i] << endl;
			}
			else
			{
				if ((x + m[i] >= 0) && (x + m[i] <= 9) && (y + n[i] >= 0) && (y + n[i] <= 8)
					&& ((v[x + m[i]][y + n[i]] == -1) || (v[x + m[i]][y + n[i]] < 16))
					&& (v[x + p[i]][y + q[i]] == -1))
					cout << x + m[i] << " " << y + n[i] << endl;
			}
	}
	~Knight()
	{}
};