#include<iostream>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	int arr[300][300] = { 0, };
	for (int y = 0; y < N; y++)
	{
		for (int x = 0; x < M; x++)
		{
			cin >> arr[y][x];
		}
	}
	int k;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		int count = 0;
		for (a; a <= c; a++)
		{

			for (int j=b; j <= d; j++)
			{
				count += arr[a-1][j-1];
			}
		}
		cout << count << endl;
		count = 0;
	}
	return 0;
}