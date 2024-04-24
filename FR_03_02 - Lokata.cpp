#include <bits/stdc++.h>

using namespace std;


int main()
{
	int d;
	cin >> d;

	long double a;
	long double b;
	long double p;

	for (int i = 1; i <= d; i++)
	{
		cin >> a >> b >> p;

		cout << fixed << setprecision(3) << (log(b) - log(a)) / log(1 + (p / 100)) << endl;
	}
	return 0;
}
