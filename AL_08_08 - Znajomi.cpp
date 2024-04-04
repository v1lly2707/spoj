#include <bits/stdc++.h>

using namespace std;

struct G {
	bool odw;
	vector<int >pol;

}*w;
int o = 0;
void DFS(int n)
{
	o++;
	if (!w[n].odw)
	{
		w[n].odw = 1;
		for (int i = 0; i < w[n].pol.size(); i++)
		{

			if (!w[w[n].pol[i]].odw)
			{
				DFS(w[n].pol[i]);
			}
		}
	}


}

int main() {
	int n, m, a, b, t;
	cin >> t;
	int pocz = 1;
	int max = 0;
	ios_base::sync_with_stdio(0);
	while (t--)
	{
		cin >> n >> m;

		w = new G[n + 1];

		for (int i = 0; i <= n; i++)
		{
			w[i].odw = 0;
			w[i].pol.clear();
		}
		for (int i = 0; i < m; i++)
		{
			cin >> a >> b;
			w[a].pol.push_back(b);
			w[b].pol.push_back(a);

		}
		while (n--)
		{
			DFS(n);
			if (o > max)
			{
				max = o;
			}
			o = 0;

		}
		cout << max << endl;
		max = 0;



	}


	return 0;
}
