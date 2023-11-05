#include <iostream>
using namespace std;

int main()
{
	long long N;
	cin >> N;
	long long n = 1;
	long long result = 0;
	long long x = 0;
	if (N < 5)
	{
		result = 4;
	}
	else
	{
		for (long long a = 1; a <= N; a++)
		{
			if (n * n >= N)
			{
				x = n * n;
				break;
			}
			else
			{
				n++;
			}
		}


		if (x - n >= N)
		{
			result = 2 * ((n - 1) + (n - 2));
		}
		else
		{
			result = 2 * ((n - 1) + (n - 1));
		}
	}
	cout << result;
	return 0;

}