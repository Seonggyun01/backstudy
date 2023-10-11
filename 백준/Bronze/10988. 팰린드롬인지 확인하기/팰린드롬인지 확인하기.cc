#include <iostream>
using namespace std;

int main()
{
	string palindrome;
	cin >> palindrome;
	int check = 1;
	int bindex = palindrome.length()-1;
	
	for (int i = 0; i < palindrome.length(); i++)
	{
		
		if (palindrome[i] != palindrome[bindex])
		{
			check = 0;
		}
		bindex--;
	}

	cout << check;
	return 0;
}