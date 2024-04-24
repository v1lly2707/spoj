#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	cin >> x;
	int tab[1000005];
	int o = 1;
	for (int i = 0; i < x; i++)
	{
		cin >> tab[i];
	}
	sort(tab, tab + x);
	for (int i = 0; i < x - 1; i++)
	{
		if (tab[i] != tab[i + 1])
			o++;
	}
	cout << o;



	return 0;
}
