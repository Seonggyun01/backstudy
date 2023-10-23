#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N;
	cin >> N;
	string arr[100];
	
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		for (int j = 0; j < arr[i].length(); j++)
		{
			arr[i][j] = tolower(arr[i][j]);
		}
	}
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}