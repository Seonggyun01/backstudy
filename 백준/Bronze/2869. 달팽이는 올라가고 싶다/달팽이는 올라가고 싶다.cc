#include<iostream>
using namespace std;


int main()
{
	/*cin.tie(NULL);
	ios_base::sync_with_stdio(false);*/
	int A, B, V;
	cin >> A >> B >> V;
	int day = 1;
	day = day +( (V - A) / (A - B));
	if ((V - A )% (A - B) != 0)
	{
		day++;
	}
	cout << day;
	return 0;
}