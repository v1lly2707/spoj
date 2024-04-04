#include <bits/stdc++.h>
using namespace std;

#define inf 10000005;
int main()
{
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio;
	int v, e, a, b, c, q, w;
	cin >> v >> e;
	int tab[505][505];
	for (int i = 1; i <= v; i++)
		for (int j = 1; j <= v; j++)
			tab[i][j] = inf;
	int pom[1000005];
	for (int i = 1; i <= e; i++)
	{
		cin >> a >> b >> c;
		tab[a][b] = tab[b][a] = c;
	}
	int o = 0;
	for (int i = 1; i <= v; i++)
		tab[i][i] = 0;

	for (int i = 1; i <= v; i++)
	{
		for (int j = 1; j <= v; j++)
		{
			for (int k = 1; k <= v; k++)
			{
				tab[j][k] = min(tab[j][k], tab[i][k] + tab[j][i]);
			}
		}
	}
	cin >> q;
	for (int i = 1; i <= q; i++)
	{
		cin >> pom[i];
	}
	for (int i = 1; i < q; i++)
	{
		o += tab[pom[i]][pom[i + 1]];
	}
	cout << o;






	return 0;

}
