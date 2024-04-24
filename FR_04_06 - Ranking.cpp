#include <bits/stdc++.h>

using namespace std;
struct uczestnik
{
	string nazwa;
	int nr;
	int sila;
	double a;
	int b;

	bool operator < (const uczestnik& x)const
	{
		if (a == x.a)
		{
			if (b == x.b)
			{
				if (sila == x.sila)
					return nazwa < x.nazwa;

				return sila > x.sila;
			}
			return b > x.b;
		}
		return a > x.a;
	}
};
uczestnik zaw[10000];
int main()
{

	int x;
	int n;
	int r;
	char wynik;
	cin >> x;
	int p;
	int o;
	int numer;

	for (int i = 1; i <= x; i++)
	{
		cin >> n >> r;
		for (int i = 1; i <= n; i++)
		{
			zaw[i].a = 0;
			zaw[i].b = 0;
		}
		for (int i = 1; i <= n; i++)
		{
			cin >> numer;
			zaw[numer].nr = numer;
			cin >> zaw[numer].nazwa >> zaw[numer].sila;
		}


		for (int i = 1; i <= ((n + 1) >> 1) * r; i++)
		{
			cin >> p >> o >> wynik;
			if (wynik == 'W')
			{
				zaw[p].a++;
				zaw[p].b++;
			}
			else if (wynik == 'R')
			{
				zaw[p].a += 0.5;
				zaw[o].a += 0.5;

			}
			else if (wynik == 'P')
			{
				zaw[o].a++;
				zaw[o].b++;
			}
		}

		sort(zaw + 1, zaw + n + 1);
		for (int i = 1; i <= n; i++)
		{
			cout << i << ' ' << zaw[i].nazwa << ' ' << fixed << setprecision(1) << zaw[i].a;
			cout << endl;
		}
	}


	return 0;
}
