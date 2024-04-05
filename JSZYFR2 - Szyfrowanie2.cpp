#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int pom[5];
	pom[0] = 127;
	pom[1] = 131;
	pom[2] = 137;
	pom[3] = 139;
	pom[4] = 149;
	int x, a;
	int tab[30];
	cin >> x;
	while (x--)
	{
		int p = 0;
		int o = 0;
		int y;
		cin >> a;

		for (int i = 0; i < a; i++)
		{
			cin >> tab[i];
		}
		y = 0;
		for (int i = 0; i < 5; i++)
		{
			bool o = false;
			for (int j = 0; j < a; j++)
			{
				if (tab[j] % pom[i] < 65 || tab[j] % pom[i]>90)
					o = true;
			}
			if (o == false)
			{
				p++;
				y = pom[i];
			}
		}
		if (p == 1)
		{
			cout << y << ' ';
			for (int i = 0; i < a; i++)
			{
				char znak;
				znak = tab[i] % y;
				cout << znak;
			}
			cout << "\n";
		}
		else
		{
			cout << "NIECZYTELNE\n";
		}
	}
	return 0;
}
