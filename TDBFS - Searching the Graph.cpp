#include <bits/stdc++.h>
using namespace std;

struct graf
{
	bool czyOdw;
	bool kolejka;
	vector < long long int > pol;

}*w;

void dfs(int n)
{
	cout << n << ' ';
	w[n].czyOdw = 1;
	for (int i = 0; i < w[n].pol.size(); i++)
	{
		if (!w[w[n].pol[i]].czyOdw)
		{
			dfs(w[n].pol[i]);
		}
	}

}

void bfs(int k)
{
	queue < long long int > kolejka;
	kolejka.push(k);
	w[k].kolejka = 1;
	while (kolejka.empty() == false)
	{
		k = kolejka.front();

		kolejka.pop();
		cout << k << ' ';
		for (int i = 0; i < w[k].pol.size(); i++)
		{
			if (!w[w[k].pol[i]].kolejka)
			{
				kolejka.push(w[k].pol[i]);
				w[w[k].pol[i]].kolejka = 1;
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio;
	cin.tie(NULL);
	int liczbaGrafow;
	int liczbaWierzch;
	cin >> liczbaGrafow;
	int doKtorego;
	int x;
	int v, q, a, r;
	r = 1;
	int z = liczbaGrafow;

	while (liczbaGrafow--)
	{
		cin >> liczbaWierzch;
		w = new graf[liczbaWierzch + 1];
		for (int i = 0; i <= liczbaWierzch; i++)
		{
			w[i].pol.clear();
			w[i].czyOdw = 0;
			w[i].kolejka = 0;
		}
		for (int i = 0; i < liczbaWierzch; i++)
		{
			cin >> doKtorego >> x;
			for (int i = 0; i < x; i++)
			{
				cin >> a;
				w[doKtorego].pol.push_back(a);
				w[a].pol.push_back(doKtorego);
			}

		}
		cout << "graph " << z - liczbaGrafow << endl;

		while (1)
		{

			cin >> v >> q;
			if (v == 0 && q == 0)
				break;
			if (q == 0)
			{
				dfs(v);
			}
			if (q == 1)
			{
				bfs(v);
			}
			for (int i = 0; i <= liczbaWierzch; i++)
			{
				w[i].czyOdw = 0;
				w[i].kolejka = 0;
			}
			cout << endl;
		}
	}



	return 0;

}
