#include <bits/stdc++.h>
using namespace std;
const long long int p = 1010101010101;
int main()
{
	int x;
	cin >> x;
	long long* tab = new long long[1000005];
	tab[0] = 1;
	tab[1] = 1;
	for (int i = 2; i < 1000005; i++)
	{
		tab[i] = (tab[i - 1] + tab[i - 2]) % p;
	}
	int a;
	while (x--)
	{
		cin >> a;
		int pom = a + 1;
		cout << (tab[pom - 1] - 1) % p << "\n";
	}
	return 0;
}
