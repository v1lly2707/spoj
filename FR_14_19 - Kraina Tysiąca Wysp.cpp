#include <bits/stdc++.h>
using namespace std;

vector < pair < int, int > > bridges;
int no = 1;
struct graph
{
	vector < int > con;
	int no, low, father;
	bool visited;

}w[600005];
void DFS1(int n, int father)
{
	w[n].visited = true;
	w[n].father = father;
	w[n].no = w[n].low = no++;

	for (int i = 0; i < w[n].con.size(); i++)
		if (!w[w[n].con[i]].visited)
			DFS1(w[n].con[i], n);

}

void DFS2(int n)
{
	w[n].visited = true;
	for (int i = 0; i < w[n].con.size(); i++)
		if (!w[w[n].con[i]].visited)
			DFS2(w[n].con[i]);

	for (int i = 0; i < w[n].con.size(); i++)
		if (w[n].con[i] != w[n].father)
			w[n].low = min(w[n].low, w[w[n].con[i]].low);

	if (w[n].no == w[n].low && w[n].father > 0)
	{
		if (n < w[n].father)
			bridges.push_back({ n,w[n].father });
		else
			bridges.push_back({ w[n].father,n });
	}

}
void _Clear(int n)
{
	for (int i = 0; i <= n; i++)
		w[i].visited = false;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, m, a, b;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		w[a].con.push_back(b);
		w[b].con.push_back(a);
	}
	_Clear(n);
	DFS1(1, 0);
	_Clear(n);
	DFS2(1);

	sort(bridges.begin(), bridges.end());
	for (int i = 0; i < bridges.size(); i++)
	{
		cout << bridges[i].first << ' ' << bridges[i].second << '\n';
		//	bridges.pop();
	}




	return 0;
}
