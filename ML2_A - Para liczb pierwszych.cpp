#include <bits/stdc++.h>
using namespace std;
bool pier(int n)
{
	if (n < 2)
		return false;

	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}

int main()
{
	int a, n, j = 0;
	int tab[401];
	cin >> n;
	for (int i = 2; i < 402; i++)
	{
		if (pier(i))
		{
			tab[j] = i;
			j++;
		}

	}
	while (n--)
	{

		cin >> a;
		bool ok = false;
		for (int i = 0; i <= j; i++)
		{
			if (pier(a - tab[i]))
			{
				cout << "TAK" << ' ' << tab[i] << ' ' << a - tab[i] << endl;
				ok = true;
				break;
			}

		}
		if (!ok)

			cout << "NIE" << endl;

	}
	return 0;
}
