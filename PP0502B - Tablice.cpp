#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	cin >> x;
	int a, b;
	int tab[10000];
	while (x--)
	{
		cin >> a;
		for (int i = 1; i <= a; i++)
		{
			cin >> tab[i];
		}
		for (int i = a; i >= 1; i--)
		{
			cout << tab[i] << ' ';
		}
		cout << endl;
	}

	return 0;
}
