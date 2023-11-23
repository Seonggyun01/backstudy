#include<iostream>
using namespace std;
int main()
{
	int T;
	int N;
	cin >> T;
	
	for (int i = 0; i < T; i++)
	{
		int L[100];
		string school[100];
		int max = 0;
		int index = 0;
		cin >> N;
		for (int n = 0; n < N; n++)
		{
			cin >> school[n] >> L[n];
			if (L[n] > max)
			{
				max = L[n];
				index = n;
			}
		}
		cout << school[index] << endl;
	}
	return 0;
}