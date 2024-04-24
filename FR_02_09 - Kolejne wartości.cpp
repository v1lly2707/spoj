#include <bits/stdc++.h>
using namespace std;


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	map < long long, long long  > mapa;
	long long x;
	cin >> x;
	long long a, b, y;
	while (x--)
	{
		cin >> a;
		mapa[a]++;

	}
	cin >> y;
	while (y--)
	{
		cin >> b;
		if (mapa[b] >= 3)
		{
			puts("Tak");
		}
		else if (mapa[b] < 3 && mapa[b] != 0)
		{
			puts("Nie");
		}
		else
		{
			puts("brak");
		}
	}

	return 0;
}
