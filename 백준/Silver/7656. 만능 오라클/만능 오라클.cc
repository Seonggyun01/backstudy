#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	getline(cin, str);
	int pos = str.find("What is");
	while (pos != string::npos)
	{
		int qpos = str.find('?', pos);
		int dpos = str.find('.', pos);
		
		if (dpos != string::npos && dpos > qpos)
		{
			cout << "Forty-two" << str.substr(pos + 4, qpos - (pos + 4)) << '.' << endl;
		}
		else if (dpos == string::npos)
		{
			cout << "Forty-two" << str.substr(pos + 4, qpos - (pos + 4)) << '.' << endl;
		}
		
		pos = str.find("What", pos + 4);
	}
	return 0;
}