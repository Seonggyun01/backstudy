#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	getline(cin, str);
	
	string s;
	getline(cin, s);	
	int len= s.length();
	int pos = str.find(s);
	int count = 0;
	while (pos != string::npos)
	{
		count++;
		pos = str.find(s, pos+len);
	}
	cout << count;
	return 0;
}