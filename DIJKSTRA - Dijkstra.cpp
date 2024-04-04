#include <bits/stdc++.h>
using namespace std;

struct wierzcholek
{
	bool cos;
	int d;
	vector < pair <int, int> > pol;
};

wierzcholek tab[10005];

int x;
void dijkstra(int n)
{
	queue<int>kolejka;
	bool koniec = true;
	int k;

	tab[n].d = 0;
	kolejka.push(n);

	while (!kolejka.empty())
	{

		long long int m = 100000000005;

		tab[n].cos = true;

		kolejka.pop();

		for (int i = 0; i < tab[n].pol.size(); i++)
			if (!tab[tab[n].pol[i].first].cos)
			{
				if (tab[n].d + tab[n].pol[i].second < tab[tab[n].pol[i].first].d)
					tab[tab[n].pol[i].first].d = tab[n].pol[i].second + tab[n].d;

				kolejka.push(tab[n].pol[i].first);
			}

		for (int i = 0; i <= x; i++)
			if (tab[i].d < m && tab[i].cos == false)
			{
				m = tab[i].d;
				n = i;
			}
	}
}


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int t, e, a, b, c;
	pair<int, int>para;
	cin >> t;
	while (t--)
	{
		for (int i = 0; i <= 10001; i++)
		{
			tab[i].d = 1000000005;
			tab[i].cos = false;
			tab[i].pol.clear();
		}

		cin >> x >> e;

		for (int i = 0; i < e; i++)
		{
			cin >> a >> b >> c;
			para.first = b;
			para.second = c;
			tab[a].pol.push_back(para);
		}

		cin >> a >> b;

		dijkstra(a);

		if (tab[b].cos == true)
			cout << tab[b].d << endl;

		else
			cout << "NIE" << endl;
	}

	return 0;
}
