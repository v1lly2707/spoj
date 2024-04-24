#include <bits/stdc++.h>
using namespace std;
int a[2005] = {};
int main()
{
	int s = 0;
	int n, p;
	cin >> n >> p;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		s += a[i];
	}
	int w = s / p;
	for (int i = 1; i <= (n - w - 1); i++)
	{
		a[i] = 0;
	}
	a[n - w] = s % p;
	for (int i = n - w + 1; i <= n; i++)
		a[i] = p;

	int q, d;
	cin >> q;
	for (int i = 1; i <= q; i++)
	{
		cin >> d;
		cout << a[d] << '\n';
	}
	return 0;
}
