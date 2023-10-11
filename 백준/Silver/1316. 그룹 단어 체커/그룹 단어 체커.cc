#include <iostream>
using namespace std;
//실패
int Check(string a)
{
	int check = 0;
	int len = a.length();
	for (int i = 0; i < len; i++)
	{
		char s1 = a[i];
		for (int j = i+1; j < len; j++)
		{
			char s2 = a[j];
			if (s1 == s2)
			{
				if (j - i == 1)
				{
					break;
				}
				else
				{
					check = 1;
				}
			}
			
		}
	}
	return check;
	
}
int main()
{
	int n = 0;
	cin >> n;
	int count = 0;
	string str[100];
	for (int i = 0; i < n; i++)
	{
		cin >> str[i];
	}
	for (int j = 0; j < n; j++)
	{
		if (Check(str[j]) == 0)
		{
			count++;
		}
	}
	cout << count;
	return 0;
}
