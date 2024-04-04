#include <bits/stdc++.h>
using namespace std;
#define pkt pair < int,int >
int n;



int f(pair < int,int > p)
{
	int x=p.first;
	int y=p.second;
	
	if(x>0 && y==0)
		return 1;
	if(x>0 && y>0)
		return 2;
	if(x==0 && y>0)
		return 3;
	if(x<0 && y>0)
		return 4;
	if(x<0 && y==0)
		return 5;
	if(x<0 && y<0)
		return 6;
	if(x==0 && y<0)
		return 7;
	if(x>0 && y<0)
		return 8;
}

bool comp(pair < int,int > A, pair < int,int > B)
{
	
	
	if(f(A)<f(B))
		return true;
	else if(f(A)>f(B))
		return false;
	else 
	if((A.second)*(B.first)==(A.first)*(B.second))
	{
		if(A.first==0 && B.first==0)
			return A.second<B.second;
		
		return A.first<B.first;
	}
		
	
	
	
	return (A.second)*(B.first)<(A.first)*(B.second);
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	vector < pair < int,int > > P(n);
	for(int i=0;i<n;i++)
		cin >> P[i].first >> P[i].second;
	
	sort(P.begin(),P.end(),comp);
	
	for(int i=0;i<P.size();i++)
		cout << P[i].first << ' ' << P[i].second << '\n';
		
	
	return 0;
}
