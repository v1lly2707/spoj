#include <bits/stdc++.h>
using namespace std;

int search(int tab[], int n)
{
	int lider = tab[0];
	int pom = 1;


	for (int i = 1; i < n; i++)
	{
		if (pom > 0)
		{
			if (tab[i] == lider)
				pom++;
			else
				pom--;
		}
		else
		{
			pom++;
			lider = tab[i];
		}
	}



	if (pom == 0)
		return -1;

	int o = 0;

	for (int i = 0; i < n; i++)
	{
		if (tab[i] == lider)
			o++;
	}


	if (o > n / 2)
		return lider;

	return -1;
}

int main()
{
	int x, a, b;
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> x;
	while (x--)
	{
		cin >> a;
		int tab[1000005] = {};

		for (int i = 0; i < a; i++)
		{
			cin >> tab[i];
		}
		if (search(tab, a) == -1)
			cout << "-1\n";
		else
			cout << search(tab, a) << "\n";
	}





	return 0;
}
