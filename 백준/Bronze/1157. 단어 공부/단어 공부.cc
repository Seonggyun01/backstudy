#include <iostream>
using namespace std;

int main(void)
{
	string str;
	cin >> str;
	int len = str.length();
	string n = "abcdefghijklmnopqrstuvwxyz";
	int c[26] = { 0 };
	int max = 0;
	int index=0;
	int on = 0;
	for (int i = 0; i < 26; i++)
	{
		n[i] = 65 + i;
	}
	for (int j = 0; j < 26; j++)
	{
		for (int k = 0; k < len; k++)
		{
			if (str[k] == n[j] || str[k] == (n[j] + 32))
			{
				c[j]++;
			}
		}
	}
	
	for (int i = 0; i < 26; i++)
	{
		if (c[i] >=max)
		{
			max = c[i];
			index = i;
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (index != i)
		{
			if (c[index] == c[i])
			{
				on++;
			}
			
				
		}

	}
	if (on >= 1)
	{
		cout << "?";
	}
	else
	{
		if (n[index] < 97)
		{
			cout << n[index] << endl;
		}
		else
		{
			cout << n[index] - 32 << endl;
		}
	}
	
	return 0;
}
