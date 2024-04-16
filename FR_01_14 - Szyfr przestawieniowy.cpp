#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	string napis;
	cin >> napis;
	int o = 0;
	char tab[1000005];
	char pom[1000005];

	for (int i = 0; i < napis.size(); i++)
	{
		if (napis[i] == 'a' || napis[i] == 'e' || napis[i] == 'o' || napis[i] == 'u' || napis[i] == 'i' || napis[i] == 'y')
			pom[i] = napis[i];

		else
		{
			pom[i] = '0';
			tab[o] = napis[i];
			o++;
		}
	}
	o--;
	for (int i = 0; i < napis.size(); i++)
	{
		if (pom[i] == '0')
		{
			cout << tab[o];
			o--;
		}
		else
			cout << pom[i];

	}
	return 0;
}
