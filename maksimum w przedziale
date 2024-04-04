#include <bits/stdc++.h>
using namespace std;

int M = 1 << 18;
int w[1 << 19] = {};
void update(int a, int b, int* w)
{
	int v = M + a;
	w[v] = b;
	while (v != 1)
	{
		v /= 2;
		w[v] = max(w[2 * v], w[2 * v + 1]);
	}
}

int query(int a, int b, int* w)
{
	int l = M + a;
	int r = M + b;
	int ans = max(w[l], w[r]);

	while (l / 2 != r / 2)
	{
		if (l % 2 == 0)
			ans = max(ans, w[l + 1]);
		if (r % 2 == 1)
			ans = max(ans, w[r - 1]);

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
	int N, R, q, a, b;
	cin >> N >> R;
	while (R--)
	{
		cin >> q >> a >> b;
		if (q == 1)
			update(a, b, w);
		if (q == 0)
			cout << query(a, b, w) << '\n';
	}

	return 0;
}
