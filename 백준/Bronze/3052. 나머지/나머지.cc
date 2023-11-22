#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> v;
	for (int a = 0; a < 10; a++)
	{
		int n = 0;
		cin >> n;
		v.push_back(n % 42);
	}
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	int count = v.size();
	cout << count;
	return 0;
}