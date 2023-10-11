#include <iostream>
using namespace std;

int main()
{
	int N = 0;
	int M = 0;
	cin >> N >> M;
	int Basket[100];
	for (int index = 0; index < N; index++)
	{
		Basket[index] = index+1;
	}
	for (int k = 0; k < M; k++)
	{
		int left = 0;
		int right = 0;
		cin >> left >> right;
		
		for (left-1; left-1 <= right-1;)
		{
			int tmp = Basket[left-1];
			Basket[left-1] = Basket[right-1];
			Basket[right-1] = tmp;
			left++;
			right--;
		}
	}
	for (int index = 0; index < N; index++)
	{
		cout << Basket[index] << " ";
	}
	return 0;
}