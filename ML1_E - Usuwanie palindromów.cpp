#include <bits/stdc++.h>
using namespace std;

int tab[401][401];
int const inf = 2000;
int x;




int szuk(string& napis, int l, int p)
{
	if (l >= p)
	{
		return 1;
	}
	if (tab[l][p] < inf)
	{
		return tab[l][p];
	}
	for (int i = 0; i < p - l; i++)
	{
		tab[l][p] = min(tab[l][p], szuk(napis, l, l + i) + szuk(napis, l + i + 1, p));
	}
	if (napis[l] == napis[p])
	{
		tab[l][p] = min(tab[l][p], szuk(napis, l + 1, p - 1));
	}


	return tab[l][p];
}
void cz()
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)
		{
			tab[i][j] = inf;
		}
	}
}



int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	string napis;

	cin >> napis;
	x = napis.size();

	int i, j;
	cz();

	for (i = 0, j = napis.length() - 1; i < j; i++, j--)
	{
		if (napis[i] != napis[j])
			break;
	}
	if (i >= j)
		cout << 1;
	else
		cout << szuk(napis, 0, x - 1);

	return 0;
}
