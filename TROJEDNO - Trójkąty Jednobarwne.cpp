#include <bits/stdc++.h>
using namespace std;
const long long p = 10000007;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();
	long long x, a, b;

	long long pom[90005];
	long long n, w, o = 0, q = 0;
	cin >> x;

	while (x--)
	{
		cin >> n;
		cin >> w;
		while (w--)
		{
			cin >> a >> b;
			pom[a]++;
			pom[b]++;

		}
		for (int i = 1; i <= n; i++)
		{
			o += (pom[i] * (n - pom[i] - 1));
		}
		for (int i = 1; i <= n; i++)
			pom[i] = 0;
		q = (n * (n - 1) * (n - 2)) / 6;
		o /= 2;
		cout << q - o << "\n";

		o = q = 0;

	}


	return 0;
}
