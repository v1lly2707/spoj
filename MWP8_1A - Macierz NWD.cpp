#include <bits/stdc++.h>
using namespace std;
long long polska(long long a, long long b)
{
	long long pom;
	while (b != 0)
	{
		pom = b;
		b = a % b;
		a = pom;
	}
	return a;
}
int main()
{
	ios_base::sync_with_stdio;
	cin.tie(NULL);
	long long  int x;
	cin >> x;
	long long int tab[1000000000];
	long long int tab2[x + 1][x + 1] = {};
	for (long long int i = 1; i <= x; i++)
	{
		cin >> tab[i];


	}
	for (long long int i = 1; i <= x; i++)
	{
		for (long long int j = 1; j <= x; j++)
		{
			tab2[i][j] = polska(tab[i], tab[j]);
		}
	}
	for (long long int i = 1; i <= x; i++)
	{
		for (long long int j = 1; j <= x; j++)

			cout << tab2[i][j] << ' ';


		cout << endl;
	}

	return 0;
}
