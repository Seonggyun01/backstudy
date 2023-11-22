#include<iostream>
#include<queue>
using namespace std;

int main()
{
	int N;
	int K;
	cin >> N >> K;
	queue<int> q;
	queue<int> result;
	for (int a = 0; a < N; a++)
	{
		q.push(a + 1);
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < K; j++)
		{
			int n = 0;
			if (j < K - 1)
			{
				n = q.front();
				q.pop();
				q.push(n);
			}
			else
			{
				n = q.front();
				q.pop();
				result.push(n);
			}
		}
	}
	cout << "<";
	while (!result.empty())
	{
		
		cout << result.front();
		result.pop();
		if (!result.empty())
		{
			cout << ", ";
		}
		else
		{
			cout << ">";
		}
		

	}
	return 0;
}