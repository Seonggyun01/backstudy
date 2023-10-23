#include<iostream>
using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	int day = 0;
	for (int i = 1; i < x; i++)
	{
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
		{
			day += 31;
		}
		else if (i == 2)
		{
			day += 28;
		}
		else
		{
			day += 30;
		}
	}
	day += y;
	day = day % 7;
	if (day == 1)
	{
		cout << "MON";
	}
	else if(day == 2)
	{
		cout << "TUE";
	}
	else if (day == 3)
	{
		cout << "WED";
	}
	else if (day == 4)
	{
		cout << "THU";
	}
	else if (day == 5)
	{
		cout << "FRI";
	}
	else if (day == 6)
	{
		cout << "SAT";
	}
	else if (day == 0)
	{
		cout << "SUN";
	}
	return 0;
}