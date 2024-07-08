#include <bits/stdc++.h>
using namespace std;
struct gracz
{
	string imie;
	int o = 0;
	int x, y;
};
gracz tab[1005] = {};
int main()
{
	int x, x1, y1, y, q, r, a;
	cin >> x >> y >> r >> a;
	cin >> q;
	int max = 0;
	for (int i = 0; i < q; i++)
	{
		cin >> tab[i].imie;
		for (int j = 0; j < a; j++)
		{
			cin >> x1 >> y1;
			if (sqrt(pow(x1 - x, 2) + pow(y1 - y, 2)) <= r)
			{
				tab[i].o++;
			}
		}
	}
	for (int i = 0; i < q; i++)
	{
		if (tab[i].o > max)
			max = tab[i].o;


	}
	for (int i = 0; i < q; i++)
	{
		if (tab[i].o == max)
		{
			cout << tab[i].imie << " " << tab[i].o;
			break;
		}

	}
	return 0;
}
