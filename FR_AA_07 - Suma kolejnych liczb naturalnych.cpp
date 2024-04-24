#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b;
	int o;

	cin >> a >> b;
	int p = a / 2;
	int k = a / 2;
	if (a % 2 != 0)
	{
		int pom = b / a;
		o = pom - (a / 2);
		for (int i = o; i <= pom; i++)
			cout << i << ' ';

		while (p--)
		{
			cout << pom + 1 << ' ';
			pom++;
		}
	}
	else
	{
		int pom1 = b / a;
		int op = pom1 - (a / 2) + 1;
		for (int i = op; i <= pom1; i++)
			cout << i << ' ';

		op = pom1 - (a / 2);
		while (k--)
		{
			cout << pom1 + 1 << ' ';
			pom1++;
		}
	}



	return 0;
}
