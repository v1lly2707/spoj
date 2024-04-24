#include <bits/stdc++.h>
using namespace std;

int main()
{
	string dzien[8];
	dzien[1] = "poniedzialek";
	dzien[2] = "wtorek";
	dzien[3] = "sroda";
	dzien[4] = "czwartek";
	dzien[5] = "piatek";
	dzien[6] = "sobota";
	dzien[7] = "niedziela";

	string napis;
	long long g, m, s, czas, pom, i, x, n, gg, mm, ss;
	char dw;
	cin >> g >> dw >> m >> dw >> s >> napis;
	cin >> czas >> dw;
	if (czas > 604800)
		cout << "NIE" << endl;
	else
		cout << "TAK" << endl;

	if (napis == dzien[1])
		pom = 1;
	if (napis == dzien[2])
		pom = 2;
	if (napis == dzien[3])
		pom = 3;
	if (napis == dzien[4])
		pom = 4;
	if (napis == dzien[5])
		pom = 5;
	if (napis == dzien[6])
		pom = 6;
	if (napis == dzien[7])
		pom = 7;

	n = czas % 86400;
	x = (czas / 86400) % 7;
	if (pom + x > 7)
		pom = (pom + x) - 7;
	else
		pom = pom + x;


	gg = n / 3600;
	mm = (n % 3600) / 60;
	ss = (n % 3600) - (mm * 60);
	s += ss;
	m += mm;
	g += gg;


	if (s >= 60)
	{
		m++;
		s = s - 60;
	}
	if (m >= 60)
	{
		g++;
		m = m - 60;
	}
	if (g >= 24)
		pom++;
	if (pom == 8)
		pom = 1;

	g = g % 24;

	if (s <= 9 && m <= 9 && g <= 9)
		cout << "0" << g << ":0" << m << ":0" << s << " " << dzien[pom];
	else
	{
		if (m <= 9 && g <= 9)
			cout << "0" << g << ":0" << m << ":" << s << " " << dzien[pom];
		else
		{
			if (s <= 9 && g <= 9)
				cout << "0" << g << ":" << m << ":0" << s << " " << dzien[pom];
			else
			{
				if (s <= 9 && m <= 9)
					cout << g << ":0" << m << ":0" << s << " " << dzien[pom];
				else
				{
					if (s <= 9)
						cout << g << ":" << m << ":0" << s << " " << dzien[pom];
					else
					{
						if (m <= 9)
							cout << g << ":0" << m << ":" << s << " " << dzien[pom];
						else
						{
							if (g <= 9)
								cout << "0" << g << ":" << m << ":" << s << " " << dzien[pom];
							else
								cout << g << ":" << m << ":" << s << " " << dzien[pom];
						}
					}
				}
			}
		}
	}
	return 0;
}
