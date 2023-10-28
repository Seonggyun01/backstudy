#include <iostream>
using namespace std;

int main()
{
	
	string a, b, c;
	cin >> a >> b >> c;
	long long result = 0;
	if (a == "black") { result = 0; }
	else if (a == "brown") { result = 10; }
	else if (a == "red") { result = 20; }
	else if (a == "orange") { result = 30; }
	else if (a == "yellow") { result = 40; }
	else if (a == "green") { result = 50; }
	else if (a == "blue") { result = 60; }
	else if (a == "violet") { result = 70; }
	else if (a == "grey") { result = 80; }
	else if (a == "white") { result = 90; }

	if (b == "black") { result += 0; }
	else if (b == "brown") { result += 1; }
	else if (b == "red") { result += 2; }
	else if (b == "orange") { result += 3; }
	else if (b == "yellow") { result += 4; }
	else if (b == "green") { result += 5; }
	else if (b == "blue") { result += 6; }
	else if (b == "violet") { result += 7; }
	else if (b == "grey") { result += 8; }
	else if (b == "white") { result += 9; }

	if (c == "black") { result *= 1; }
	else if (c == "brown") { result *= 10; }
	else if (c == "red") { result *= 100; }
	else if (c == "orange") { result *= 1000; }
	else if (c == "yellow") { result *= 10000; }
	else if (c == "green") { result *= 100000; }
	else if (c == "blue") { result *= 1000000; }
	else if (c == "violet") { result *= 10000000; }
	else if (c == "grey") { result *= 100000000; }
	else if (c == "white") { result *= 1000000000; }

	cout << result;
	return 0;

}