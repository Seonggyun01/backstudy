#include<iostream>
using namespace std;

int main()
{
	int P = 0;
	int score = 0;
	int N = 0;
	int rank[50] = { 0 };
	int k = 0;
	int result = 1;
	int index = 0;
	cin >> N >> score >> P;
	
	while(N>0&&k<N)
	{
		cin >> rank[k];
		k++;
	}
	for (int i = 0; i < N; i++)
	{
		if (score >=rank[i])
		{
			index = i;
			break;
		}
		else
		{
			index = i + 1;
		}
	}
	int same = 0;
	for (int j = 0; j < N; j++)
	{
		
		if (score == rank[j])
		{
			same++;
		}

	}
	result = index+1;
	index = index + same;
	
	if (index > P - 1)
	{
		result = -1;
	}
	
	cout << result;
	return 0;
}