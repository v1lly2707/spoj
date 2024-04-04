#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int pA = 1;
	long long int pB = 1;
	long double x;
	double pom = 18;
	while (cin >> x)
	{
		while (x > 9)
			x /= pom;

		if (x < 1)
			cout << "B\n";
		else
			cout << "A\n";
	}
	return 0;
}
