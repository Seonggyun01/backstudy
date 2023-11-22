#include<iostream>
#include<queue>
using namespace std;

int main()
{
	int N = 0;
	cin >> N;
	queue<int> q1;
	queue<int> q2;
	for (int a = 1; a <= N; a++)
	{
		q1.push(a);
	}
	while (N > 1)
	{
		int n = q1.front();
		q1.pop();
		q2.push(n);
		int b = q1.front();
		q1.pop();
		q1.push(b);
		N--;
	}
	while (!q2.empty())
	{
		cout << q2.front() << ' ';
		q2.pop();
	}
	cout << q1.front();
	return 0;

}