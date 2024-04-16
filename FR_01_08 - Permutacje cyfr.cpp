#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	cin >> x;
	string a, b;
	char tab[100005];
	char tab2[100005];
	int o = 0;

	while (x--)
	{
		cin >> a >> b;
		if (a.size() != b.size())
		{
			cout << "Nie" << endl;

		}
		else
		{
			for (int i = 0; i < a.size(); i++)
			{
				tab[i] = a[i];
			}
			for (int i = 0; i < b.size(); i++)
			{
				tab2[i] = b[i];
			}
			sort(tab, tab + a.size());
			sort(tab2, tab2 + b.size());
			for (int i = 0; i < a.size(); i++)
			{
				if (tab[i] == tab2[i])
				{
					o++;
				}

			}
			if (o == a.size())
				cout << "Tak" << endl;
			else
				cout << "Nie" << endl;


			o = 0;
		}

	}
	return 0;
}
