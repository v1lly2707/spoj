#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int a, b;
	long long int o = 0;
	long long int p = 0;
	cin >> a >> b;
	int pom1 = a;
	int pom2 = b;

	while (a != b)
	{
		if (a > b)
		{
			a /= 2;
			o++;
		}
		else
		{
			b /= 2;
			o++;
		}
	}

	cout << o;
	return 0;
}
