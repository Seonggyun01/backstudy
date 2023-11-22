#include<iostream>
using namespace std;

int main()
{
	int N = 0;
	cin >> N;
	int arr[50] = { 0, };
	int max = 0;
	int index = -1;
	int count = 0;
	for (int a = 0; a < N; a++)
	{
		cin >> arr[a];
		if (max <= arr[a])
		{
			max = arr[a];
			index = a;
		}
	
	}
	while (index!=0)
	{
		arr[0]++;
		count++;
		arr[index]--;
		max = 0;
		for (int a = 0; a < N; a++)
		{
			if (max <= arr[a])
			{
				max = arr[a];
				index = a;
			}
		}
	}
	cout << count;
	return 0;
}