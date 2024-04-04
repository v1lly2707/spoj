#include <bits/stdc++.h>
using namespace std;
int main()
{
	string napis1;
	string napis2;
	int tab[1005][1005] = {};
	cin >> napis1 >> napis2;
	for (int i = 0; i < napis1.size(); i++)
	{
		for (int j = 0; j < napis2.size(); j++)
		{
			if (napis1[i] == napis2[j]) tab[i + 1][j + 1] += max(tab[i][j + 1], max(tab[i + 1][j], (tab[i][j] + 1)));
			else tab[i + 1][j + 1] += max(tab[i][j + 1], tab[i + 1][j]);
		}
	}
	cout << tab[napis1.size()][napis2.size()];
	return 0;
}
