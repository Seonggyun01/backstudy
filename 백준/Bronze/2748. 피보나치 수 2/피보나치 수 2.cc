#include<iostream>
using namespace std;

int main()
{
	long long n = 0;
	cin >> n;
	long long p[90] = { 0, };
	for (int i = 0; i <= n; i++)
	{
		if (i == 0)
		{
			p[i] = 0;
		}
		else if (i == 1)
		{
			p[i] = 1;
		}
		else
		{
			p[i] = p[i - 2] + p[i - 1];
		}
	}
	cout << p[n];
	return 0;
}