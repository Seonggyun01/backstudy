#include <iostream>
using namespace std;

int main()
{
	int N = 0;
	cin >> N;
	int arr[100];
	int count = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		int check = 0;
		if (arr[i] != 1)
		{
			for (int j = 2; j < arr[i]; j++)
			{
				if (arr[i] % j != 0)
				{
					check = 0;
				}
				else
				{
					check = 1;
					break;
				}

			}
			if (check == 0)
				count++;
		}
	}
	cout << count;
	return 0;
	
}