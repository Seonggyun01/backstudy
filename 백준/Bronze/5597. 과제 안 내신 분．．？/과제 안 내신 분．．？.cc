#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int arr[30] = { 0, };
	for (int i = 1; i < 31; i++)
	{
		arr[i - 1] = i;
	}
	for (int i = 0; i < 28; i++)
	{
		int n = 0;
		cin >> n;
		for (int a = 0; a < 30; a++)
		{
			if (arr[a] == n)
			{
				arr[a] = 0;
			}
		}
	}
	for (int i = 0; i < 30; i++)
	{
		if (arr[i] != 0)
		{
			cout << arr[i] << endl;
		}
	}
	return 0;
}