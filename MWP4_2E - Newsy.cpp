#include <bits/stdc++.h>
using namespace std;
vector < int > vec;
bool ifKnows[50005] = {};
void _clear()
{
	for (int i = 0; i <= 50005; i++)
		ifKnows[i] = false;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t, i, j, k, a, b;
	cin >> t;
	while (t--)
	{
		cin >> i >> j >> k;
		ifKnows[k] = true;
		cout << k << ' ';
		while (j--)
		{
			cin >> a >> b;
			if (ifKnows[a] == true)
			{
				if (ifKnows[b] == false)
					cout << b << ' ';
				ifKnows[b] = true;
			}

		}

		cout << '\n';
		//vec.clear();
		_clear();
	}
	return 0;
}
