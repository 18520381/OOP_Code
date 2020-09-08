#include <iostream>
using namespace std;

int n, m;
int Allo[10][10];
int Max[10][10];
int Avai[10];
int Need[10][10];
int Done[10];

void Readf()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> Allo[i][j];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			cin >> Max[i][j];
			Need[i][j] = Max[i][j] - Allo[i][j];
			Done[i] = 0;
		}	
	for (int i = 0; i < m; i++)
		cin >> Avai[i];
}
void Cal()
{
	int t = 1;
	int i = 0;
	bool ok;
	do
	{
		if (Done[i] == 0)
		{
			ok = true;
			for (int j = 0; j < m; j++)
				if (Need[i][j] > Avai[j])
				{
					ok = false;
					break;
				}
			if (ok)
			{
				for (int j = 0; j < m; j++)
					Avai[j] += Allo[i][j];
					Done[i] = t;
				t++;
			}
		}
		i++;
		if (i == n) i = 0;
	} while (t <= n);
	cout << endl;
	for (int i = 0; i < n; i++) cout << "P" << i << "=" << Done[i] << endl;
}

int main()
{
	Readf();
	Cal();

	system("pause");
	return 0;
}