#include<bits/stdc++.h>
using namespace std;
deque < pair < int,int > > dq;
int main()
{
   	ios::sync_with_stdio(0);
	cin.tie();
	cout.tie();
	int n,k;
	cin >> n;
	int a;
	int i=1;
	while(cin >> a)
	{
		
		a=(-a);
		if(!dq.empty())
		{
			while(!dq.empty() && a<=dq.back().first)
				dq.pop_back();
				
			dq.push_back({a,i});
		}
		else
			dq.push_back({a,i});
		
		if(i>=n)
		{
			if(!dq.empty() && dq.front().second<=i-n)
				dq.pop_front();
			
			cout << abs(dq.front().first) << ' ';
		}
		i++;
		
	}


	
	return 0;
}
