#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int tab[50];
	tab[1] = 1;
	tab[2] = 1;
	int x, a, b;
	int o = 0;
	for (int i = 3; i <= 47; i++)
	{
		tab[i] = tab[i - 1] + tab[i - 2];

	}
	cin >> x;
	while (x--)
	{
		cin >> a >> b;
		for (int i = 2; i <= 47; i++)
		{
			if (tab[i] >= a && tab[i] <= b)
				o++;
		}
		cout << o << "\n";
		o = 0;
	}
	return 0;
}
