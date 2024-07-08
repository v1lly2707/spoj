#include <bits/stdc++.h>

using namespace std;
int main()
{
	int x;
	cin >> x;
	double DlugoscBoku;
	int IloscOsob;
	const double pi = acos(-1.0);

	for (int i = 1; i <= x; i++)
	{
		cin >> DlugoscBoku >> IloscOsob;
		long double Obwod = pi * DlugoscBoku;
		if (IloscOsob % 2 == 0)
		{
			cout << fixed << setprecision(3) << Obwod / IloscOsob << ' ';
			cout << IloscOsob / 2 << endl;
		}
		else
		{
			cout << fixed << setprecision(3) << Obwod / (2 * IloscOsob) << ' ';
			cout << IloscOsob << endl;
		}
	}

	return 0;
}
