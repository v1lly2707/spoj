#include <bits/stdc++.h>
using namespace std;
int m = 1;
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
	int x;
	cin >> x;
	int a, b;
	w = new graf[x + 5];
	for (int i = 1; i <= x; i++)
	{
		w[i].pol.clear();
		w[i].czyOdw = false;
	}
	for (int i = 1; i <= x; i++)
	{
		cin >> a;
		while (a--)
		{
			cin >> b;

			w[i].pol.push_back(b);
		}
	}
	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= x; j++)

			w[j].czyOdw = false;


		w[i].warstwa = 1;

		BFS(i);
	}
	cout << m;

	delete[] w;

	return 0;
}
