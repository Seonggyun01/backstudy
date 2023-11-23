#include<iostream>
#include<algorithm>
#include<cstdlib>
using namespace std;
int main()
{
	int T = 0;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int K = 0;
		cin >> K;
		int arr[100];
		for (int a = 0; a < K; a++)
		{
			cin >> arr[a];
		}
		sort(arr, arr+K);
		int submax = 0;
		for (int a = 0; a < K - 1; a++)
		{
			int x = (arr[a] > arr[a + 1]) ? arr[a] : arr[a + 1];
			int y = (arr[a] < arr[a + 1]) ? arr[a] : arr[a + 1];
			if (x-y>submax)
			{
				submax = x - y;
			}
		}
		cout << "Class " << i + 1 << endl;
		cout << "Max " << arr[K - 1] << ", Min " << arr[0] << ", Largest gap " << submax << endl;
	}
	return 0;
}