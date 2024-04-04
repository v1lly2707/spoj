#include <bits/stdc++.h>
using namespace std;

int M = 1 << 18;
int w[1 << 19] = {};

void insert(int x, int val, int* w)
{
	int v = M + x;
	w[v] = val;
	while (v != 1)
	{
		v /= 2;
		w[v] = w[2 * v] + w[2 * v + 1];
	}
}

int query(int a, int b, int* w)
{
	int l = M + a;
	int r = M + b;
	long long ans = w[l];

	if (l != r)
		ans += w[r];

	while (l / 2 != r / 2)
	{
		if (l % 2 == 0)
			ans += w[l + 1];
		if (r % 2 == 1)
			ans += w[r - 1];

		l /= 2;
		r /= 2;
	}

	return ans;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, q, a, b, option;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		insert(i, a, w);
	}
	cin >> q;
	while (q--)
	{
		cin >> option >> a >> b;
		if (option == 0)
			cout << query(a, b, w) << '\n';
		if (option == 1)
			insert(a, b, w);
	}

	return 0;
}
