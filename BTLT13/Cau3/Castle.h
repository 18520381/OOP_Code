#pragma once
#include "Chess.h"

class Castle : public Chess
{
public:
	Castle(int a, int b) : Chess(a, b)
	{
		Kind = 4;
	}
	void CanGo(int k, int v[10][9])
	{
		cout << "Castle: " << x << " " << y << endl;
		for (int i = 1; i < 9; i++)
			{
					if (k < 16)
					{
						if ((x + i >= 0) && (x + i <= 9)
							&& ((v[x + i][y] == -1) || (v[x + i][y] >= 16)))
							cout << x + i << " " << y << endl;
						if ((x - i >= 0) && (x - i <= 9)
							&& ((v[x - i][y] == -1) || (v[x - i][y] >= 16)))
							cout << x - i << " " << y << endl;
						if ((x + i >= 0) && (x + i <= 9) && (v[x + i][y] != -1)) break;
						if ((x - i >= 0) && (x - i <= 9) && (v[x - i][y] != -1)) break;
					}
					else
					{
						if ((x + i >= 0) && (x + i <= 9)
							&& ((v[x + i][y] == -1) || (v[x + i][y] < 16)))
							cout << x + i << " " << y << endl;
						if ((x - i >= 0) && (x - i <= 9)
							&& ((v[x - i][y] == -1) || (v[x - i][y] < 16)))
							cout << x - i << " " << y << endl;
						if ((x + i >= 0) && (x + i <= 9) && (v[x + i][y] != -1)) break;
						if ((x - i >= 0) && (x - i <= 9) && (v[x - i][y] != -1)) break;
					}
			}
		for (int j = 1; j < 8; j++)
			{
					if (k < 16)
					{
						if ((y + j >= 0) && (y + j <= 8)
							&& ((v[x][y + j] == -1) || (v[x][y + j] >= 16)))
							cout << x << " " << y + j << endl;
						if ((y - j >= 0) && (y - j <= 8)
							&& ((v[x][y - j] == -1) || (v[x][y - j] >= 16)))
							cout << x << " " << y - j << endl;
						if ((y + j >= 0) && (y + j <= 8) && (v[x][y + j] != -1)) break;
						if ((y - j >= 0) && (y - j <= 8) && (v[x][y - j] != -1)) break;
					}
					else
					{
						if ((y + j >= 0) && (y + j <= 8)
							&& ((v[x][y + j] == -1) || (v[x][y + j] < 16)))
							cout << x << " " << y + j << endl;
						if ((y - j >= 0) && (y - j <= 8)
							&& ((v[x][y - j] == -1) || (v[x][y - j] < 16)))
							cout << x << " " << y - j << endl;
						if ((y + j >= 0) && (y + j <= 8) && (v[x][y + j] != -1)) break;
						if ((y - j >= 0) && (y - j <= 8) && (v[x][y - j] != -1)) break;
					}
			}
	}
	~Castle()
	{}
};