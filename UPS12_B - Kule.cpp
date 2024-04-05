#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, w[10005] = {}, h[10005] = {};
	int ans = 0;
	int ma = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> w[i];

	for (int i = 0; i < n; i++)
		cin >> h[i];

	for (int j = 0; j < n; j++)
	{
		int l = 0, p = 0;
		for (int i = 0; i <= j - 1; i++)
		{
			if (w[i]<w[j] && h[i]>h[j])
			{
				if (w[i] > l)
					l = w[i];
			}
		}
		for (int k = j + 1; k < n; k++)
		{
			if (w[k] > w[j] && h[k] < h[j])
			{
				if (w[k] > p)
					p = w[k];
			}
		}
		if (p > 0 && l > 0)
		{
			ans = p + l + w[j];
			if (ans > ma)
				ma = ans;
		}


	}
	cout << ma;

	return 0;
}
