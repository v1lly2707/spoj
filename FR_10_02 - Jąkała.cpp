#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a = 0;

	cin >> a;
	string napis;
	string x;
	int j;
	int i;
	char tab[10000];
	for (i = 0; i < a; i++)
	{
		cin >> tab[i];
	}
	cin >> napis;
	for (int i = 0; i < a; i++)
	{
		for (j = 0; j < napis.size(); j++)
		{
			if (napis[j] == tab[i])
			{
				x = tab[i];
				napis.insert(j, x);
				j++;
			}
		}
	}
	cout << napis;

	return 0;
}
