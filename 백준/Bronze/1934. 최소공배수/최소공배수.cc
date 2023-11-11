#include<iostream>
using namespace std;

int gcd(int a, int b)
{
	int r;
	while (b != 0)
	{
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}
int main()
{
	int T = 0;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int A, B; 
		cin >> A >> B;
		int max = (A > B) ? A : B;
		int min = (A < B) ? A : B;
		cout << (A * B) / gcd(max, min) << '\n';
	}
	return 0;
}