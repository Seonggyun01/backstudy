#include <iostream>
using namespace std;

int main()
{
	int N = 0;
	cin >> N;
	string step;
	cin >> step;
	int str = 3;
	int s[50];
	int k = 80;
	int x = 50, y = 50;
	int xindex = 0;
	int yindex = 0;
	for (int i = 0; i < N; i++)
	{
		if (step[i] == 'L')
		{
			s[i] = 1;
		}
		else if (step[i] == 'R')
		{
			s[i] = 2;
		}
		else if (step[i] == 'F')
		{
			s[i] = 3;
		}
	}
	char maze[100][100] = { 0, };
	for (int i = 0; i < N; i++)
	{
		maze[y][x] = '.';
		str = s[i];
		switch (str)
		{
		case 1:
			k--;
			break;
		case 2:
			k++;
			break;
		case 3:
			if (k % 4 == 0)
			{
				y++;
			}
			else if (k % 4 == 3)
			{
				x++;
			}
			else if (k % 4 == 2)
			{
				y--;
			}
			else if (k % 4 == 1)
			{
				x--;
			}
		default:
			break;
		}
		maze[y][x] = '.';

	}
	int xmin = 100, xmax = 0, ymin = 100, ymax = 0;

	for (int a = 0; a < 100; a++)
	{
		for (int b = 0; b < 100; b++)
		{
			if (maze[a][b] == '.')
			{
				xindex = b;
				yindex = a;


				if (xindex <= xmin)
				{
					xmin = xindex;
				}
				if (xindex >= xmax)
				{
					xmax = xindex;
				}
				if (yindex <= ymin)
				{
					ymin = yindex;
				}
				if (yindex >= ymax)
				{
					ymax = yindex;
				}
			}
		}
	}
	//cout << xmin << "     " << xmax << endl;
	//cout << ymin << "     " << ymax << endl;

	for (int a = ymin; a <= ymax; a++)
	{
		for (int b = xmin; b <= xmax; b++)
		{
			if (maze[a][b] != '.')
			{
				maze[a][b] = '#';
				
			}
			cout << maze[a][b];
		}
		cout << endl;
	}

	return 0;
}