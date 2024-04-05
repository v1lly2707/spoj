#include <bits/stdc++.h>
using namespace std;

long long nwd(long long a, long long b)
{
	if (b == 0)
		return a;

	return nwd(b, a % b);
}

long long nww(long long a, long long b)
{
	return (a * b) / nwd(a, b);
}
int main()
{
	int x, a, b;
	cin >> x >> a;
	for (int i = 1; i < x; i++)
	{
		cin >> b;
		a = nww(a, b);
	}
	cout << a;
	return 0;
}
