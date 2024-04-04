#include <bits/stdc++.h>
using namespace std;
struct graf
{
	int warstwa;
	bool czyOdw;
	vector < int > pol;

}*w;

void BFS(int k)
{
	queue < long long int > kolejka;
	kolejka.push(k);
	w[k].czyOdw = true;
	while (kolejka.empty() == false)
	{
		k = kolejka.front();

		kolejka.pop();
		for (int i = 0; i < w[k].pol.size(); i++)
		{
			if (!w[w[k].pol[i]].czyOdw)
			{
				w[w[k].pol[i]].warstwa = w[k].warstwa + 1;

				kolejka.push(w[k].pol[i]);
				w[w[k].pol[i]].czyOdw = true;
			}
		}
	}

}
int main()
{
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio;
	int v, e, a, b, n, d;

	cin >> v >> e;
	w = new graf[v + 5];
	while (e--)
	{
		cin >> a >> b;
		w[a].pol.push_back(b);
		w[b].pol.push_back(a);


	}
	cin >> n >> d;
	BFS(n);
	for (int i = 1; i <= v; i++)
	{
		if (w[i].warstwa == d)
			cout << i << ' ';
	}

	return 0;
}
