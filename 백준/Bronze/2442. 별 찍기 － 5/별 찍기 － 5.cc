#include<iostream>
using namespace std;

int main()
{
	int N = 0;
	cin >> N;
	int s = N;

	for (int i = 1; i <= N; i++)
	{
		s--;
		for (int j = 0; j < s; j++)
		{
			cout << ' ';
		}
		for (int k = 1; k <= 2 * i - 1; k++)
		{
			cout << "*";
		}
		cout << '\n';
	}
	return 0;
}