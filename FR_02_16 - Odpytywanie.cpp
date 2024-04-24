#include <bits/stdc++.h>
using namespace std;
struct odpytywanie
{
	int nr;
	int rok;
	int miesiac;
	int dzien;

	bool operator < (const odpytywanie& x)const
	{
		if (rok == x.rok)
		{
			if (miesiac == x.miesiac)
			{
				if (dzien == x.dzien)
				{
					return nr < x.nr;
				}
				return dzien < x.dzien;
			}
			return miesiac < x.miesiac;
		}
		return rok < x.rok;
	}


};

odpytywanie odp[100005];
int main()
{
	int x;
	cin >> x;
	int a;
	char znak;
	while (x--)
	{
		cin >> a;
		for (int i = 0; i < a; i++)
		{
			cin >> odp[i].nr >> odp[i].rok >> znak >> odp[i].miesiac >> znak >> odp[i].dzien;
		}
		sort(odp, odp + a);
		for (int i = 0; i < a; i++)
		{
			cout << odp[i].nr << ' ';
		}

	}

	return 0;
}
