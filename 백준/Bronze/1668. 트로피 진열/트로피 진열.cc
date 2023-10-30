#include<iostream>
using namespace std;

int main()
{
	int N;
	int trophy[50] = { 0, };
	cin >> N;
	for (int a = 0; a < N; a++)
	{
		cin >> trophy[a];
	}

	int lcnt = 0;
	int rcnt = 0;
	int max = 0;

	for (int a = 0; a < N; a++)
	{
		if (trophy[a] > max)
		{
			max = trophy[a];
			lcnt++;
		}
	}
	max = 0;
	for (int a = N - 1; a >= 0; a--)
	{
		if (trophy[a] > max)
		{
			max = trophy[a];
			rcnt++;
		}
	}
	cout << lcnt << endl;
	cout << rcnt;
	return 0;
}