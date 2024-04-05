#include <bits/stdc++.h>
using namespace std;

const long long M = 1000000007;
vector < long long > vec;

void silnia(long long n)
{
	long long s = 1;
	vec.push_back(1);

	for (int i = 1; i <= n; i++)
	{
		if (i != 4)
			s = (s * i) % M;
		vec.push_back(s);
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


	long long x, a, m = 0;
	vector < long long > pom;

	cin >> x;

	for (int i = 0; i < x; i++)
	{
		cin >> a;
		pom.push_back(a);
		if (a > m)
			m = a;
	}

	silnia(m);

	for (int i = 0; i < x; i++)
	{
		if (pom[i] >= 4)
			cout << (((vec[pom[i]] * pom[i]) % M) * (pom[i] - 1)) % M << "\n";
		else
			cout << vec[pom[i]] * pom[i] * (pom[i] - 1) / 4 << "\n";
	}

	return 0;
}
