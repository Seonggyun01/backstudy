#include<iostream>
#include<cmath>
#include<queue>

using namespace std;
int main()
{
	int N = 0;
	cin >> N;
	int count = 0;
	for (int a = 1; a <= N; a++)
	{
		int num = a;
		while (num % 5 == 0)
		{
			count++;
			num /= 5;
		}
		//5의 개수 구하기
	}
	cout << count;
	return 0;
}