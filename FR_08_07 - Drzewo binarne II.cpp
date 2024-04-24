#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int x;
	cin >> x;
	long long int a, b, y;
	long long int o = 0;
	long long int tab[1000005];
	while (x--)
	{
		cin >> a;
		while (a != 1)
		{
			a /= 2;
			o++;
		}
		tab[o]++;
		o = 0;
	}
	cin >> y;
	while (y--)
	{
		cin >> b;
		cout << tab[b - 1] << endl;
	}
	return 0;
}
