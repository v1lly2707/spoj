#include <bits/stdc++.h>
using namespace std;
int m = 1;
struct graf
{
	int odl;
	int y;
	vector < pair < int, int > > pol;

}*w;


int main()
{
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio;
	int v, e, a, b, c, d, x;
	cin >> v >> e;
	w = new graf[v + 5];
	int o = 0;
	int tab[1005] = {};
	for (int i = 1; i <= e; i++)
	{
		cin >> a >> b >> c;
		w[a].pol.push_back({ b,c });
		w[b].pol.push_back({ a,c });
	}
	cin >> d >> x;
	d--;
	while (d--)
	{
		cin >> b;
		for (int i = 0; i < w[x].pol.size(); i++)
		{
			if (w[x].pol[i].first == b)
			{
				o += w[x].pol[i].second;
				break;
			}

		}
		x = b;
	}

	cout << o;


	return 0;

}
