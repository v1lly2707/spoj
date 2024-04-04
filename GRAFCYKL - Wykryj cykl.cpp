#include <bits/stdc++.h>
using namespace std;


int n, m;
vector < int > G[100005];
vector < int > GT[100005];
vector < int > ans;
bool ifVisited[100005];

vector < int > order;

void dfsOrder(int v)
{
	ifVisited[v] = true;

	for (auto u : G[v])
		if (!ifVisited[u])
			dfsOrder(u);


	order.push_back(v); // post order

}

void dfsSSS(int v)
{
	ans.push_back(v);
	ifVisited[v] = true;
	for (auto u : GT[v])
		if (!ifVisited[u])
			dfsSSS(u);
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	int cnt = 0;
	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		G[a + 1].push_back(b + 1);
		GT[b + 1].push_back(a + 1);

	}

	for (int i = 1; i <= n; i++)
	{
		if (!ifVisited[i])
			dfsOrder(i);
	}

	for (int i = 1; i <= n; i++)
		ifVisited[i] = 0;

	for (int i = n - 1; i >= 0; i--)
	{
		if (!ifVisited[order[i]])
		{
			dfsSSS(order[i]);
			if (ans.size() > 1)
				cnt++;
			ans.clear();
		}
	}
	if (cnt > 0) cout << "jest co najmniej jeden cykl";
	else cout << "brak cykli";
	return 0;
}
