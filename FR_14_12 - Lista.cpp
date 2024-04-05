#include <bits/stdc++.h>
using namespace std;
long long polska(long long a, long long b)
{
	long long pom;
	while (b != 0)
	{
		pom = b;
		b = a % b;
		a = pom;
	}
	return a;
}
int main()
{
	int n, m;
	vector < pair < pair < int, int >, int > > vec;
	cin >> n >> m;
	int a = 0, b = 0, c = 0, o = 0;
	int pom = 2;
	int cnt = 0;
	while (c <= m)
	{
		for (int i = 1; i < pom; i++)
		{
			a = (pom * pom) - (i * i);
			b = 2 * pom * i;
			if (polska(a, b) == 1)
			{
				c = (pom * pom) + (i * i);
				if (c > m) break;
				vec.push_back({ {a,b},c });
				cnt++;
			}



		}
		pom++;

		if (cnt == n) break;
	}//cout << cnt;
	sort(vec.begin(), vec.end());
	for (int i = 0; i < n; i++)
		cout << vec[i].first.first << ' ' << vec[i].first.second << ' ' << vec[i].second << '\n';
	return 0;
}
