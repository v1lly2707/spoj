#include <bits/stdc++.h>
using namespace std;
#define pkt pair < int,int >
int n;

pair < int, int > start;


bool comp(pair < int, int > A, pair < int, int > B)
{
	if (A == start)
		return 1;
	if (B == start)
		return 0;

	if ((A.second - start.second) * (B.first - start.first) == (A.first - start.first) * (B.second - start.second))
	{
		if (A.first == 0 && B.first == 0)
			return A.second < B.second;
		return A.first < B.first;
	}




	return (A.second - start.second) * (B.first - start.first) < (A.first - start.first) * (B.second - start.second);
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	start.first = 0;
	start.second = 0;
	cin >> n;
	vector < pair < int, int > > P(n);
	for (int i = 0; i < n; i++)
		cin >> P[i].first >> P[i].second;

	sort(P.begin(), P.end(), comp);

	for (int i = 0; i < P.size(); i++)
		cout << P[i].first << ' ' << P[i].second << '\n';


	return 0;
}
