#include<bits/stdc++.h>
using namespace std;
deque < pair < int, int > > dq;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie();
	cout.tie();
	int n, m, k;
	cin >> n >> m >> k;
	for (int i = 1; i <= k; i++)
	{
		if (n >= m)
			n--;

		else m--;
	}

	cout << min(n, m) * 2;



	return 0;
}
