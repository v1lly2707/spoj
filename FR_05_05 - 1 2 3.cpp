#include <bits/stdc++.h>
using namespace std;
const int p = 101010101;
long long int tab[1000005] = {};
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	long long int x, a;

	tab[2] = 4;
	tab[3] = 6;
	tab[4] = 8;
	tab[5] = 12;
	tab[6] = 16;
	for (int i = 7; i <= 1000005; i++)
	{
		tab[i] = (tab[i - 2] + tab[i - 2]) % p;
	}
	cin >> x;
	while (x--)
	{
		cin >> a;
		cout << tab[a] % p << "\n";

	}
	return 0;
}
