#include<iostream>
#include<string>
using namespace std;

int main()
{
	string arr[50];
	int N;
	
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	string result = arr[0];
	for (int i = 0; i < arr[0].length(); i++)
	{
		
		for (int j = 0; j < N; j++)
		{
			if (arr[j][i] != result[i])
			{
				result[i] = '?';
			}
		}
	}
	cout << result;
	return 0;
}