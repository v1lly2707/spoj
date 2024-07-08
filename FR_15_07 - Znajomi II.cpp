#include <bits/stdc++.h>

using namespace std;
string arr[1005];
string aux[1005];
map < string,pair < int,vector < int > > > mapa;
int main() {
	int n,m,a,b,t;
	cin >> t;
	int pocz=1;
	int max=0;

	for(int i=1;i<=t;i++)
	{
		cin >> arr[i];
		aux[i]=arr[i];
		sort(arr[i].begin(),arr[i].end());
		mapa[arr[i]].first++;
		mapa[arr[i]].second.push_back(i);

	}
	int ma=0;
	string s;
	for(int i=1;i<=t;i++)
	{
		if(mapa[arr[i]].first>ma)
		{
			ma=mapa[arr[i]].first;
			s=arr[i];
		}
		
	}
	for(int i=0;i<mapa[s].first;i++)
	{
		cout << aux[mapa[s].second[i]] << '\n';
	}


	return 0;
}
