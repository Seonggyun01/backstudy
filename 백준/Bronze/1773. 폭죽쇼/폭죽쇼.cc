#include<iostream>
using namespace std;

int main()
{
	int N = 0;
	int C = 0;
	cin >> N >> C;
	int time[100];
	int count = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> time[i];
	}
	for (int t = 1; t <= C; t++)
	{
		for (int n = 0; n < N; n++)
		{
			if (t % time[n] == 0)
			{
				count++;
				break;
			}
		}
	}
	cout << count;
	return 0;
}