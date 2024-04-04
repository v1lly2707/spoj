#include <bits/stdc++.h>
using namespace std;




int main()
{
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio;

	int v, e, a, b;
	cin >> v >> e;
	int o = 0;
	int tab[1000005] = {};
	while (e--)
	{
		cin >> a >> b;
		tab[a]++;
		tab[b]++;

	}
	for (int i = 1; i <= v; i++)
	{
		if (tab[i] % 2 != 0 && tab[i] != 0)
			o++;
	}
	if (o > 2)
		cout << "NIE";
	else cout << "TAK";



	return 0;

}
