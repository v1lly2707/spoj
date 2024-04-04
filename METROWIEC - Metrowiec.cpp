#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	int x;
	int Max1;
	cin >> x;


	int tab[x + 1];
	tab[0] = 0;
	for (int i = 1; i <= x; i++)
	{
		Max1 = 0;

		cin >> tab[i];
		for (int j = 0; j <= i / 2; j++)
			Max1 = max(Max1, tab[j] + tab[i - j]);


		tab[i] = Max1;
	}
	cout << tab[x];

	return 0;
}
