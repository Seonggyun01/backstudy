#include<iostream>
#include <string>
#include<cmath>>
using namespace std;

int main()
{
	string N;
	cin >> N;
	long long rst = 0;
	long long a = 0;
	int count = 0;
	while (N.length()>1)
	{
		a = 0;
		rst = 0;
		while (true)
		{
			if (a > N.length() - 1)
			{
				break;
			}
			rst += (long long)(N[a] - '0');
			a++;

		}
		count++;
		N = to_string(rst);
		if (N.length() == 1)
		{
			break;
		}
		
	}
	cout << count << endl;
	if (((long long)N[0] - '0') % 3 == 0)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return 0;
}