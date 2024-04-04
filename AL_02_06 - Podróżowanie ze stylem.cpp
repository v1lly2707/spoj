#include <bits/stdc++.h>

using namespace std;

struct graf
{
	int warstwa;
	bool czyOdw;
	vector < int > pol;
}*w;
int m = 0;
int n, a, b;
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
				if (w[w[k].pol[i]].warstwa > m)
				{
					m = w[w[k].pol[i]].warstwa;
				}
				kolejka.push(w[k].pol[i]);
				w[w[k].pol[i]].czyOdw = true;
			}
		}
	}

}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int x;

	while (cin >> n >> a >> b)
	{
		w = new graf[(n * 2) + 5];

		for (int i = 1; i <= n * 2 + 1; i++)
		{
			w[i].czyOdw = 0;
			w[i].pol.clear();
		}
		for (int i = 1; i <= n; i++)
		{
			cin >> x;
			if (i + x <= n)
				w[i].pol.push_back(i + x);
			if (i - x >= 1)
				w[i].pol.push_back(i - x);
		}
		w[a].warstwa = 0;
		BFS(a);
		if (w[b].czyOdw == true)
			cout << w[b].warstwa << endl;
		else
			cout << -1 << endl;
		m = 0;
		delete[] w;
	}
	return 0;
}
