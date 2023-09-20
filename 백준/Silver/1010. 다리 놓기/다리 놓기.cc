#include <iostream>
using namespace std;

int main()
{
	int cas;
	int n[1000] = { 0 };
	int m[1000] = { 0 };
	cin >> cas;
	for (int i=0; i < cas; i++)
	{
		cin >> n[i] >> m[i];
	}
	for (int k = 0; k < cas; k++)
	{
		int sumn = 1;
		long summ = 1;
		for (int j = 1; j <= n[k]; j++)
		{
			summ = (summ*((m[k] - j + 1))/ (j));
		}
		cout << summ<< endl;
	}

	return 0;
}