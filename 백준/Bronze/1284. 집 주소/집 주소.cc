#include <iostream>
using namespace std;

int main()
{
	string n = "1";
	int count = 1;
	while (true)
	{
		cin >> n;
		if (n == "0")
		{
			break;
		}
		for (int i = 0; i < n.length(); i++)
		{
			if (n[i] == '1')
			{
				count += 2;
			}
			else if (n[i] == '0')
			{
				count += 4;
			}
			else
			{
				count += 3;
			}
			count++;
		}
		
		cout << count << endl;
		count = 1;
	}
	return 0;
}