#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	cin >> x;
	long long int tab[100000];
	long long int tab1[100000];
	long long int o = 0;
	for (int i = 0; i < x; i++)
	{
		cin >> tab[i];

	}
	sort(tab, tab + x);
	for (int i = 0; i < x; i++)
	{
		cin >> tab1[i];
	}
	sort(tab1, tab1 + x);
	for (int i = 0; i < x; i++)
	{
		if (tab[i] == tab1[i])
		{
			o++;
		}
	}
	if (o == x)
		cout << "TAK" << endl;
	else
		cout << "NIE" << endl;
	o = 0;
	return 0;
}
