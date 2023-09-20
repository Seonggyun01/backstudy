#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	int m = 0;
	int min = 100;
	int num[100][100] = { 0 };
	string bo[100];
	cin >> n >> m;
	int white[8][8] = { 0 };
	int black[8][8] = { 0 };
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if ((i + j) % 2 == 0)
			{
				white[i][j] = 0;
				black[i][j] = 1;
			}
			else
			{
				white[i][j] = 1;
				black[i][j] = 0;
			}
		}
	}
	for (int y = 0; y < n; y++)
	{
		cin >> bo[y];
		for (int x = 0; x < bo[y].length(); x++)
		{
			if (bo[y][x] == 'W')
			{
				num[y][x] = 0;
			}
			else if(bo[y][x] == 'B')
			{
				num[y][x] = 1;
			}
		}
	}
	for (int k = 0; k < n - 7; k++)
	{
		for (int j = 0; j < m - 7; j++)
		{
			int change = 0;
			int wc = 0;
			int bc = 0;
			
			for (int a = 0; a < 8; a++)
			{
				for (int s = 0; s < 8; s++)
				{
					if (white[a][s] != num[k + a][j + s])
					{
						wc += 1;
					}
					else if (black[a][s] != num[k + a][j + s])
					{
						bc += 1;
					}
				}
			}
			if (wc < bc)
			{
				change = wc;
			}
			else
			{
				change = bc;
			}
			
			if (min > change)
			{
				min = change;
			}
		}

	}
	cout << min;
	return 0;
}