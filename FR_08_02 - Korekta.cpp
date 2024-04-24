#include <bits/stdc++.h>
using namespace std;

int main()
{

	int x;
	cin >> x;
	int w, p;
	int pom;
	int a, b, c, d, e, f;
	while (x--)
	{
		cin >> a >> b >> c >> d >> e >> f;
		w = a + c + e;
		p = b + d + f;
		pom = (a + b) * 4;

		cout << ((pom / 2) - w) << ' ' << ((pom / 2) - p) << endl;
		pom = 0;
		w = 0;
		p = 0;
	}

	return 0;
}
