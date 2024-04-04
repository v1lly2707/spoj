#include <bits/stdc++.h>
using namespace std;
long long int tab[1000005] = {};

const long long int p = 1000000007;
void f(long long pom)
{
	for (long long int i = 2; i < 1000005; i++)
	{
		tab[i] = tab[i - 1];
		if (i % pom == 0)
		{
			tab[i] = (tab[i] + tab[i / pom]) % p;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	long long int k;
	long long int x;
	long long int a;
	cin >> k;

	tab[1] = 1;
	f(k);


	cin >> x;
	while (x--)
	{
		cin >> a;
		if (k == 1)
			cout << 1 << endl;
		else
			cout << tab[a] << endl;
	}
	return 0;
}
