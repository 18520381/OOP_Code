#pragma once
#include "Chess.h"

class Cannon : public Chess
{
public:
	Cannon(int a, int b) : Chess(a, b)
	{
		Kind = 6;
	}
	void CanGo(int k, int v[10][9])
	{
	cout << "Cannon: " << x << " " << y << endl;
	bool ok1 = true, ok2 = true;
	for (int i = 1; i < 9; i++)
	{
		if (ok1)
		{
			if ((x + i >= 0) && (x + i <= 9) && (v[x + i][y] == -1))
				cout << x + i << " " << y << endl;
			if ((x + i >= 0) && (x + i <= 9) && (v[x + i][y] != -1))
			{
				for (int j = 1; x + i + j <= 9; j++)
					if (k < 16)
					{
						if (v[x + i + j][y] >= 16)
						{
							cout << x + i + j << " " << y << endl;
							break;
						}
					}
					else
					{
						if ((v[x + i + j][y] < 16) && (v[x + i + j][y] != -1))
						{
							cout << x + i + j << " " << y << endl;
							break;
						}
					}
				ok1 = false;
			}
		}
		if (ok2)
		{
			if ((x - i >= 0) && (x - i <= 9) && (v[x - i][y] == -1))
				cout << x - i << " " << y << endl;
			if ((x - i >= 0) && (x - i <= 9) && (v[x - i][y] != -1))
			{
				for (int j = 1; x - i - j >= 0; j++)
					if (k < 16)
					{
						if (v[x - i - j][y] >= 16)
						{
							cout << x - i - j << " " << y << endl;
							break;
						}
					}
					else
					{
						if ((v[x - i - j][y] < 16) && (v[x - i - j][y] != -1))
						{
							cout << x - i - j << " " << y << endl;
							break;
						}
					}
				ok2 = false;
			}
		}
		if (!ok1 && !ok2) break;
	}
	ok1 = true; ok2 = true;
	for (int i = 1; i < 8; i++)
	{
		if (ok1)
		{
			if ((y + i >= 0) && (y + i <= 8) && (v[x][y + i] == -1))
				cout << x << " " << y + i << endl;
			if ((y + i >= 0) && (y + i <= 8) && (v[x][y + i] != -1))
			{
				for (int j = 1; y + i + j <= 8; j++)
					if (k < 16)
					{
						if (v[x][y + i + j] >= 16)
						{
							cout << x << " " << y + i + j << endl;
							break;
						}
					}
					else
					{
						if ((v[x][y + i + j] < 16) && (v[x][y + i + j] != -1))
						{
							cout << x << " " << y + i + j << endl;
							break;
						}
					}
				ok1 = false;
			}
		}
		if (ok2)
		{
			if ((y - i >= 0) && (y - i <= 8) && (v[x][y - i] == -1))
				cout << x << " " << y - i << endl;
			if ((y - i >= 0) && (y - i <= 8) && (v[x][y - i] != -1))
			{
				for (int j = 1; y - i - j >= 0; j++)
					if (k < 16)
					{
						if (v[x][y - i - j] >= 16)
						{
							cout << x << " " << y - i - j << endl;
							break;
						}
					}
					else
					{
						if ((v[x][y - i - j] < 16) && (v[x][y - i - j] != -1))
						{
							cout << x << " " << y - i - j << endl;
							break;
						}
					}
				ok2 = false;
			}
		}
		if (!ok1 && !ok2) break;
	}
}
	~Cannon()
	{}
};