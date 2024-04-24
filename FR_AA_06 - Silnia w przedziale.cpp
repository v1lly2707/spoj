#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int tab[14];
	long long int o = 0;
	tab[0] = 1;
	tab[1] = 1;
	tab[2] = 2;
	tab[3] = 6;
	tab[4] = 24;
	tab[5] = 120;
	tab[6] = 720;
	tab[7] = 5040;
	tab[8] = 40320;
	tab[9] = 362880;
	tab[10] = 3628800;
	tab[11] = 39916800;
	tab[12] = 479001600;
	tab[13] = 6227020800;
	long long int a, b;
	cin >> a >> b;
	for (int i = 0; i < 14; i++)
	{
		if (tab[i] >= a && tab[i] <= b)
			o++;
	}
	cout << o;

	return 0;
}
