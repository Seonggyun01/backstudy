#include<iostream>
using namespace std;
int main()
{
	int N, M;
	cin >> N >> M;
	
	int arr[100] = { 0, };
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	int max = 0;
	for (int i = 0; i < N; i++)
	{
		int sum = 0;
		for (int j = i + 1; j < N; j++)
		{
			for (int k = j + 1; k < N; k++)
			{
				sum = arr[i] + arr[j] + arr[k];
				if (sum <= M)
				{
					if (max < sum)
					{
						max = sum;
					}
				}
			}
		}
	}
	cout << max;
	return 0;
}