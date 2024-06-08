#include <bits/stdc++.h>

using namespace std;

int main()
{
	long double tab[10000005] = {};
	long double a[10000005] = {};
	long double b[100000005] = {};
	int x;
	cin >> x;
	int o = 0;
	int d = 0;
	long long p;

	for (int i = 1; i <= x; i++)
	{
		cin >> a[i] >> b[i];
		tab[i] += a[i] / b[i];
	}
	cin >> p;
	for (int i = 1; i <= x; i++)
	{
		if (a[i] > a[p] && tab[i] < tab[p])
		{
			o++;
		}
		else if (a[i]<a[p] && tab[i]>tab[p])
		{
			d++;
		}
	}
	cout << d << ' ' << o;
	return 0;
}
