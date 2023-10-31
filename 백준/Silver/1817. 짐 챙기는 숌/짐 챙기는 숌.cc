#include<iostream>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	int book[50];
	int box = 0;
	int sum = 0;
	for (int a = 0; a < N; a++)
	{
		cin >> book[a];
	}
	for (int a = 0; a < N; a++)
	{
		sum += book[a];
		if (sum > M)
		{
			box++;
			sum = book[a];
		}
		else if (sum == M)
		{
			box++;
			sum = 0;
		}
		if (a == N - 1)
		{
			if(sum!=0)
			{
				box++;
			}
		}
	}
	cout << box;
	return 0;
}