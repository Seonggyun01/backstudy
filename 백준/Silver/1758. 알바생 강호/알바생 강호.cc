#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int N;
	cin >> N;
	long long result = 0;
	int arr[100000] = { 0, };
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + N, greater<int>());
	for (int i = 0; i < N; i++)
	{
		
		int c = arr[i] - i;
		if (c <= 0)
		{
			c = 0;
		}
		result += c;
	}
	cout << result;
	return 0;
}