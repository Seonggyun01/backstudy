#include<iostream>
using namespace std;

int main()
{
	string N;
	cin >> N;
	int result[10] = { 0 };
	int max = 0;
	for (int i = 0; i < N.length(); i++)
	{
		int s = N[i] - 48;
		result[s]++;
	}
	result[6] += result[9];
	result[9] = 0;
	result[6] = (result[6] / 2) + (result[6] % 2);
	for (int j = 0; j < 10; j++)
	{
		max = (max > result[j]) ? max : result[j];
	}
	
	cout << max;
	return 0;

}