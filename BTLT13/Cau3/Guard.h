#pragma once
#include "Chess.h"

class Guard : public Chess
{
public:
	Guard(int a, int b) : Chess(a, b)
	{
		Kind = 2;
	}
	void CanGo(int k, int v[10][9])
	{
		int m[4] = { 1,1,-1,-1 };
		int n[4] = { 1,-1,-1,1 };
		cout << "Guard: " << x << " " << y << endl;
		for (int i = 0; i < 4; i++)
			if (k < 16)
			{
				if ((x + m[i] >= 0) && (x + m[i] <= 2) && (y + n[i] >= 3) && (y + n[i] <= 5) && ((v[x + m[i]][y + n[i]] == -1) || (v[x + m[i]][y + n[i]] >= 16)))
					cout << x + m[i] << " " << y + n[i] << endl;
			}
			else
			{
				if ((x + m[i] >= 7) && (x + m[i] <= 9) && (y + n[i] >= 3) && (y + n[i] <= 5) && ((v[x + m[i]][y + n[i]] == -1) || (v[x + m[i]][y + n[i]] < 16)))
					cout << x + m[i] << " " << y + n[i] << endl;
			}
	}
	~Guard()
	{}
};