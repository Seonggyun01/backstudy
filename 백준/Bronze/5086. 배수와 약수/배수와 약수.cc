#include<iostream>
using namespace std;
int main()
{
	int A = 1, B = 1;
	cin >> A >> B;
	while (A != 0 && B != 0)
	{
		if (B % A == 0)
		{
			cout << "factor" << '\n';
		}
		else if (A % B == 0)
		{
			cout << "multiple" << '\n';
		}
		else
		{
			cout << "neither" << '\n';
		}
		cin >> A >> B;
	}
	return 0;
}