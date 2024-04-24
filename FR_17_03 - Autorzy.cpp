#include <bits/stdc++.h>
using namespace std;


int main()
{
	int a, b;
	cin >> a >> b;
	if (a == b)
	{
		cout << 2;
		for (int i = 1; i <= a; i++)
			cout << 0;
	}

	else
	{
		int k = max(a, b);
		int m = min(a, b);
		cout << 1;
		for (int i = 1; i <= (k - m - 1); i++)
			cout << 0;
		cout << 1;
		for (int i = 1; i <= m; i++)
			cout << 0;
	}

	return 0;
}
