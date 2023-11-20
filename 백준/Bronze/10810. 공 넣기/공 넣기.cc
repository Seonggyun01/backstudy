#include<iostream>
using namespace std;
int main()
{
	int N, M;
	cin >> N >> M;
	int arr[101] = { 0, };
	for (int a = 0; a < M; a++)
	{
		int i, j, k;
		cin >> i >> j >> k;
		for (int x = i; x <= j; x++)
		{
			arr[x] = k;
		}
	}
	for (int i = 1; i <= N; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}