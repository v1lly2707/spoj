#include <bits/stdc++.h>
using namespace std;

int t,n,m,u,v,w;
vector < int > G[1000005];
vector < int > W[1000005];

int prim()
{
	int ans=0;
	int start=1;
	priority_queue < pair < int,int > ,vector < pair < int,int > > ,greater < pair < int,int > > > PQ;
	PQ.push({0,start});
	vector < bool > IfVisited(n+5,0);
	vector < int > to(n+5,1e9);
	
	to[start]=0;
	
	while(!PQ.empty())
	{
		int v=PQ.top().second;
		int e=PQ.top().first;
		PQ.pop();
		
		if(IfVisited[v])
			continue;
		IfVisited[v]=true;
		
		ans+=e;
		
		for(int i=0;i<G[v].size();i++)
		{
			int u=G[v][i];
			int w=W[v][i];
			
			if(IfVisited[u]==false && to[u]>w)
			{
				to[u]=w;
				PQ.push({w,u});
			}
		}
	}
	
	return ans;
}

void f()
{
	for(int i=0;i<=n;i++)
	{
		G[i].clear();
		W[i].clear();

		
	}
}
int main()
{
	
	
	char z;
	cin >> t;
	while(t--)
	{
		cin >> z >> z >> n >> z >> z >> z >> m;
		while(m--)
		{
			
			cin >> z >> u >> z >> v >> z >> w;
			G[u].push_back(v);
			W[u].push_back(w);
			G[v].push_back(u);
			W[v].push_back(w);
		}
		cout << prim() << '\n';
		f();
	}
	return 0;
}
