#include <bits/stdc++.h>
using namespace std;
int a, b;
int n, m;
vector < int > graph[1000005];
int arr[1000005] = {};
priority_queue < int, vector < int >, greater < int > > q;
vector < int > ans;

void algorytm(int n)
{

	while (q.empty() == false)
	{
		n = q.top();
		ans.push_back(n);
		q.pop();

		for (int i = 0; i < graph[n].size(); i++)
		{
			arr[graph[n][i]]--;

			if (arr[graph[n][i]] == 0)
				q.push(graph[n][i]);
		}

		graph[n].clear();
	}

}
int main()
{


	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	bool ok = false;
	for (int i = 0; i < m; i++)
	{

		cin >> a >> b;
		arr[b]++;
		graph[a].push_back(b);
	}

	for (int i = 0; i < n; i++)
		if (arr[i] == 0)
			q.push(i);
	algorytm(q.top());
	
	for (int i = 0; i < n; i++)
		if (arr[i] != 0)
			ok = true;


	if (ok == true)
		cout << -1;
	else
	{
		for (int i = 0; i < ans.size(); i++)
			cout << ans[i] << ' ';
	}


	return 0;
}
