#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long a, b, c, d;
	int o = 0;
	cin >> a >> b;
	long long int x;
	cin >> x;
	long long int pom = x;
	long double odl = 0;
	while (x--)
	{
		cin >> c >> d;
		odl = sqrt(pow((c - a), 2) + pow((d - 0), 2));

		if (odl <= b)
		{
			o++;

		}

	}
	cout << pom - o;



	return 0;
}
