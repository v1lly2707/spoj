#include <bits/stdc++.h>
using namespace std;

long long int f(long long int a, long long int b)
{
	if (b == 0)
		return 1;
	if (b % 2 != 0)
		return (a * f(a, b - 1)) % 10;
	int pom = f(a, b / 2);

	return (pom * pom) % 10;
}


int main()
{
	long long int x, a, b;
	cin >> x;
	while (x--)
	{
		cin >> a >> b;
		cout << f(a, b) << "\n";
	}


	return 0;
}
