#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x, a;
	cin >> x;
	while (x--)
	{
		cin >> a;
		double pom = 1 - (4 * (-(a * 2)));
		double pom2 = sqrt(pom);
		if (pom2 - (int)pom2 == 0) puts("TAK");
		else puts("NIE");
	}
	return 0;
}
