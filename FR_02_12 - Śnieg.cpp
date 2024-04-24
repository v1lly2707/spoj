#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long firstNumber;
	cin >> firstNumber;
	long long secondNumber;
	cin >> secondNumber;
	long long thirdNumber;
	cin >> thirdNumber;
	long long fourthNumber;
	cin >> fourthNumber;
	long long a;
	a = firstNumber;
	long long b;
	int c;
	b = secondNumber;
	c = thirdNumber;
	long long change;
	long long nww12;
	long long nww2;
	long long nww123;
	long long change2;
	while (secondNumber != 0)
	{
		change = firstNumber % secondNumber;
		firstNumber = secondNumber;
		secondNumber = change;
	}
	nww12 = a * b / firstNumber;
	nww2 = nww12;
	while (thirdNumber != 0)
	{
		change2 = nww12 % thirdNumber;
		nww12 = thirdNumber;
		thirdNumber = change2;
	}
	nww123 = nww2 * c / nww12;

	cout << (fourthNumber * 100) / nww123;
	return 0;
}


