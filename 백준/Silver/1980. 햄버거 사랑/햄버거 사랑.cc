#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n = 0;
	int m = 0;
	int t = 0;
	int Eat[10000]{};
	int time = 0;

	cin >> n >> m >> t;

	int cokeTime = 0;
	int bigbuger = (n < m) ? m : n;
	int smallbuger = (n < m) ? n : m;

	for (int i = 0; i<=t/smallbuger ; i++)
	{
		for (int j = 0; j<=t/bigbuger; j++)
		{
			time = i * smallbuger + j * bigbuger;
			if (time > t)
			{
				continue;
			}
			cokeTime = t - time;
			
			if (Eat[cokeTime] < i + j)
			{
				Eat[cokeTime] = i + j;
			}
		}
	}
	
	/*for (int i = 0; i < t / smallbuger; i++)
	{
		cout << Eat[i] << " ";
	}
	cout << endl;*/


	int index = 0;
	for (int i = 0; i<10000; i++)
	{
		
		if (Eat[i] > 0)
		{
			index = i;
			break;
		}
		if (t<smallbuger)
		{
			index = t;
			Eat[index] = 0;
		}
	}
	cout << Eat[index] << " " << index;
	return 0;
}