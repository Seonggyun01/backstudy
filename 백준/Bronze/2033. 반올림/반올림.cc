#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	long long N;
	cin >> N;
	long long i = 1;
	while (true)
	{
		
		if (N > pow(10, i))
		{
			long long r = (N % (long long)pow((long long)10, i));
			N -= r;
			if(r/pow(10,i-1)>4)
			{
				N += pow(10, i);
			}
			
		}
		else
		{
			break;
		}
		i++;
	}
	cout << N;

}
