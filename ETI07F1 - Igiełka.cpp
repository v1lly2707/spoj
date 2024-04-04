#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	int x, y, z, a, b;
	int tab[201][201] = {}, pom[201][201] = {};
	scanf("%d %d %d", &x, &y, &z);
	int o = 0;

	while (x--)
	{
		scanf("%d %d", &a, &b);

		pom[a][b] = max(pom[a][b], 1);
		for (int i = 1; i <= y + 1; i++)
		{
			for (int j = 1; j <= z + 1; j++)
			{
				if (tab[i][j] > 0)
				{
					if (i + a <= y && j + b <= z)
					{
						pom[i + a][j + b] = max(pom[i + a][j + b], tab[i][j] + 1);

					}
				}
			}
		}
		for (int i = 1; i <= y; i++)
		{
			for (int j = 1; j <= z; j++)
			{
				tab[i][j] = max(tab[i][j], pom[i][j]);
				pom[i][j] = 0;
			}
		}

	}
	for (int i = 1; i <= y; i++)
	{
		for (int j = 1; j <= z; j++)
		{
			o = max(o, tab[i][j]);
		}
	}
	printf("%d", o);
	return 0;
}
