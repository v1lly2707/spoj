#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	double x, y, a;
	double o, p;
	cin >> x >> y >> a;
	double wynik = 0;
	double max = 0;
	int pom1, pom2;
	while (a--)
	{
		cin >> o >> p;
		wynik = sqrt(pow((o - x), 2) + pow((p - y), 2));
		if (wynik > max)
		{
			max = wynik;
			pom1 = o;
			pom2 = p;
		}

	}
	cout << pom1 << ' ' << pom2 << "\n";
	cout << fixed << setprecision(2) << max;

	return 0;
}
