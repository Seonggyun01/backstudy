#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	vector<int> v;
	int sum = 0;
	for (int i = 0; i < 9; i++)
	{
		int n = 0;
		cin >> n;
		v.push_back(n);
		sum += n;
	}
	sort(v.begin(), v.end());
	bool o = false;
	for (int a = 0; a < 9; a++)
	{
		for (int b = a + 1; b < 9; b++)
		{
			if (sum - v[a] - v[b] == 100)
			{
				v.erase(v.begin() + a);
				v.erase(v.begin() + b - 1);
				o = true;
				break;
			}
		}
		if (o)
		{
			break;
		}
	}
	for (int i = 0; i < 7; i++)
	{
		cout << v[i] << endl;
	}
	return 0;
}