#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x;
	cin >> x;
	int o = 0;

	long long int tab[100000000];
	for (int i = 0; i < x; i++)
	{
		cin >> tab[i];
		if (tab[i - 1] + tab[i - 2] == tab[i])
		{
			o++;
		}
	}
	cout << o;



	return 0;
}
