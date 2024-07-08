#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x;
	cin >> x;
	int a;
	int tab[10005];
	while (x--)
	{
		cin >> a;
		for (int i = 1; i <= a; i++)
		{
			cin >> tab[i];
		}
		for (int i = 2; i <= a; i += 2)
		{
			cout << tab[i] << ' ';
		}
		for (int i = 1; i <= a; i += 2)
		{
			cout << tab[i] << ' ';
		}
		cout << endl;
	}
	return 0;
}
