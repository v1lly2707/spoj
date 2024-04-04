#include <bits/stdc++.h>
using namespace std;

struct graph
{
	bool visited;
	vector < int > con;

}*w;

int o = 0;
void dfs(int n)
{

	w[n].visited = 1;
	o++;
	for (int i = 0; i < w[n].con.size(); i++)
	{
		if (!w[w[n].con[i]].visited)
		{
			dfs(w[n].con[i]);
		}
	}

}
int main()
{
	int v, e;
	cin >> v >> e;
	w = new graph[v + 5];
	int a, b;
	int m = 10000005;

	if (v == e + 1)
		while (e--)
		{
			cin >> a >> b;
			w[a].con.push_back(b);
			w[b].con.push_back(a);
			m = min(m, min(a, b));

		}
	else
	{
		cout << "NIE";
		return 0;
	}
	dfs(m);
	if (o == v)
		cout << "TAK";
	else cout << "NIE";
	return 0;
}
