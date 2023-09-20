#include<iostream>
using namespace std;

int main()
{
	int  N, M;
	int index = 1;
	int min = 0;
	cin >> N >> M;
	
	string a[50];
	if (N <= M)
	{
		min = N;
	}
	else
	{
		min = M;
	}
	for (int n = 0; n < N; n++)
	{
		cin >> a[n];
	}
	for (int l = 1; l < min; l++)
	{
		for (int y = 0; y + l < N; y++)
		{
			for (int x = 0; x + l < M; x++)
			{
				if ((a[y][x] == a[y + l][x]) && (a[y][x] == a[y][x + l]) && (a[y][x] == a[y + l][x + l]))
				{
					index = l+1;

				}
			}
		}
	}
	cout << index * index;
	return 0;
}