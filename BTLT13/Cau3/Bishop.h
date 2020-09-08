#pragma once
#include "Chess.h"

class Bishop : public Chess
{
public:
	Bishop(int a, int b) : Chess(a, b)
	{
		Kind = 3;
	}
	void CanGo(int k, int v[10][9])
	{
		int m[4] = { 2,2,-2,-2 };
		int n[4] = { 2,-2,-2,2 };
		int p[4] = { 1,1,-1,-1 };
		int q[4] = { 1,-1,-1,1 };
		cout << "Bishop: " << x << " " << y << endl;
		for (int i = 0; i < 4; i++)
			if (k < 16)
			{
				if ((x + m[i] >= 0) && (x + m[i] <= 4) && (y + n[i] >= 0) && (y + n[i] <= 8) 
					&& ((v[x + m[i]][y + n[i]] == -1) || (v[x + m[i]][y + n[i]] >= 16))
					&& (v[x + p[i]][y + q[i]] == -1))
					cout << x + m[i] << " " << y + n[i] << endl;
			}
			else
			{
				if ((x + m[i] >= 5) && (x + m[i] <= 9) && (y + n[i] >= 0) && (y + n[i] <= 8) 
					&& ((v[x + m[i]][y + n[i]] == -1) || (v[x + m[i]][y + n[i]] < 16))
					&& (v[x + p[i]][y + q[i]] == -1))
					cout << x + m[i] << " " << y + n[i] << endl;
			}
	}
	~Bishop()
	{}
};