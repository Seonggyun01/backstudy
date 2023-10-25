#include<iostream>
using namespace std;

int main()
{
	int H, M;
	cin >> H >> M;
	int time;
	cin >> time;
	M += time;
	if (M > 59)
	{
		H = H + (M / 60);
		M = M % 60;
	}
	if (H > 23)
	{
		H = H % 24;
	}
	cout << H << " " << M;
	return 0;
}