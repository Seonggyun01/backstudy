#include<iostream>
using namespace std;

int main()
{
	int N = 0;
	cin >> N;
	long long arr[10000] = { 0, };
	long long sum = 0;
	for (int a = 0; a < N; a++)
	{
		cin >> arr[a];
	}
	for (int a = 0; a < N; a++)
	{
		for (int b = 0; b < N; b++)
		{
			sum += (arr[a] > arr[b]) ? (arr[a] - arr[b]) : (arr[b] - arr[a]);
		}
	}
	cout << sum;
	return 0;
}