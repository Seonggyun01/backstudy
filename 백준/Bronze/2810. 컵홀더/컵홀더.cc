#include<iostream>
#include<string>

using namespace std;

int main()
{
	int N = 0;
	cin >> N;
	string str;
	cin >> str;
	int cup = 1;
	int pos = 0;
	pos = str.find('S');
	while (pos != string::npos)
	{
		cup++;
		pos = str.find('S',pos+1);
	}
	
	pos = str.find("LL");
	while (pos != string::npos)
	{
		int pre_pos = pos;
		cup++;
		pos = str.find("LL",pos+2);
	}
	if (cup <= N)
	{
		cout << cup;
	}
	else
	{
		cout << N;
	}
	
	return 0;
}