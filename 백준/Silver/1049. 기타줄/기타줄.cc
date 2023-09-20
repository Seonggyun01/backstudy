#include <iostream>
using namespace std;

int main()
{
	int N = 0, M = 0;
	int price[100][2] = { 0 };
	int k = 0;
	int cost = 0;
	int pmin = 10000;
	int emin = 10000;
	cin >> N >> M;
	for (int i = 0; i < M; i++)
	{
		cin >> price[i][0] >> price[i][1];
		if (price[i][0] < pmin)
		{
			pmin = price[i][0];
		}
		if (price[i][1] < emin)
		{
			emin = price[i][1];
		}
		
	}
	

	while (k < N)
	{
		if (emin >= pmin)
		{
			cost += pmin;
			k += 6;
		}
		else if (emin * 2 >= pmin)
		{
			if (N - k < 2)
			{
				cost += emin;
				k += 1;
			}
			else
			{
				cost += pmin;
				k += 6;
			}
		}
		else if (emin * 3 >= pmin)
		{
			if (N - k < 3)
			{
				cost += (N - k) * emin;
				k += (N - k);
			}
			else
			{
				cost += pmin;
				k += 6;
			}
		}
		else if (emin * 4 >= pmin)
		{
			if (N - k < 4)
			{
				cost += (N - k) * emin;
				k += (N - k);
			}
			else
			{
				cost += pmin;
				k += 6;
			}
		}
		else if (emin * 5 >= pmin)
		{
			if (N - k < 5)
			{
				cost += (N - k) * emin;
				k += (N - k);
			}
			else
			{
				cost += pmin;
				k += 6;
			}
		}
		else if (emin * 6 >= pmin)
		{
			if (N - k < 6)
			{
				cost += (N - k) * emin;
				k += (N - k);
			}
			else
			{
				cost += pmin;
				k += 6;
			}
		}
			
		else if (emin * 6 < pmin)
		{
			cost += emin * (N-k);
			k += (N-k);
		}
	}
	cout << cost;
	return 0;
}