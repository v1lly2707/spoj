#include <bits/stdc++.h>
using namespace std;

bool spr=true;
struct graf 
{
	bool czyOdw;
	vector < int > pol;
	int kolor;
	
}*w;

void DFS(int k)
{
	
	w[k].czyOdw=true;
	
	for(int i=0;i<w[k].pol.size();i++)
	{
		if(!w[w[k].pol[i]].czyOdw) 
		{
		    w[w[k].pol[i]].kolor=w[k].kolor%2+1;
			DFS(w[k].pol[i]);
			
			
			
		}
		else
		{
			if(w[w[k].pol[i]].kolor==w[k].kolor)
			{
				spr=false;
				break;
			}
			
			
		}
	}


			 
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int n,m,a,b;
	cin >> n >> m;
	
	w=new graf[n+5];
	w[1].kolor=1;
	for(int i=0;i<=n;i++)
	{
		w[i].pol.clear();
		w[i].czyOdw=false;
	}
	while(m--)
	{
		cin >> a >> b;

		w[a].pol.push_back(b);
		w[b].pol.push_back(a);
	}
	DFS(1);
	
	if(spr==true)
	{
		puts("TAK");
	}
	else
	{
		puts("NIE");
	}
	
	
	
	delete [] w;
	return 0;
}
