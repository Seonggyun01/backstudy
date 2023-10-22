#include<iostream>
#include<string>
using namespace std;

int main()
{
	int M;
	int N;
	cin >> M >> N;
	int count = 1;
	if (M > N)
	{
		while (N > 1)
		{
			M--;
			count++;
			N--;
			count++;
		}
	}
	else if (N > M)
	{
		if (M != 2)
		{
			count--;
			while (M > 1)
			{
				M--;
				count++;
				N--;
				count++;
			}
		}
		else
		{
			count--;
			while (M > 1)
			{
				M--;
				count++;
				N--;
				count++;
			}
		}
	}
	else
	{
		count--;
		while (N>1)
		{
			N--;
			count++;
			M--;
			count++;
		}
	}
	cout << count;
	return 0;
}