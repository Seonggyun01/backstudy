#include<iostream>
using namespace std;

int main()
{
	int n = 64;
	int x = 0;
	int count = 0;
	cin >> x;
	while (x > 0)
	{
		if (n > x)
		{
			n = n / 2;
		}
		else
		{
			x -= n;
			count++;
		}
		
	}
	cout << count;
	return 0;
}