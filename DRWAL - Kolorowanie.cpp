#include <bits/stdc++.h>
using namespace std;

bool pom[10005][10005] = {};
char tab[10005][10005] = {};
char o;
int q, w;
char e;

void search(int i, int j)
{
	o = tab[q][w];

	pom[i][j] = 1;
	if (tab[i - 1][j] == o && pom[i - 1][j] == 0)
	{
		search(i - 1, j);
		tab[i - 1][j] = e;
	}
	if (tab[i + 1][j] == o && pom[i + 1][j] == 0)
	{
		search(i + 1, j);
		tab[i + 1][j] = e;
	}
	if (tab[i][j - 1] == o && pom[i][j - 1] == 0)
	{
		search(i, j - 1);
		tab[i][j - 1] = e;
	}
	if (tab[i][j + 1] == o && pom[i][j + 1] == 0)
	{
		search(i, j + 1);
		tab[i][j + 1] = e;
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	int x;
	cin >> x;
	int a;
	int b;
	while (x--)
	{
		cin >> a >> b;

		for (int i = 1; i <= a; i++)
		{
			for (int j = 1; j <= b; j++)
			{
				cin >> tab[i][j];
			}
		}

		cin >> q >> w >> e;



		search(q, w);


		tab[q][w] = e;
		for (int i = 1; i <= a; i++)
		{
			for (int j = 1; j <= b; j++)
			{
				cout << tab[i][j];
			}
			cout << endl;

		}
		for (int i = 1; i <= a; i++)
		{
			for (int j = 1; j <= b; j++)
			{
				pom[i][j] = 0;
			}
		}
		for (int i = 1; i <= a; i++)
		{
			for (int j = 1; j <= b; j++)
			{
				tab[i][j] = 0;
			}
		}


	}
	return 0;
}
