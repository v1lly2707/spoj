#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	cin >> x;
	long long a;
	long long silnia;
	for (int i = 1; i <= x; i++)
	{
		silnia = 1;
		cin >> a;

		if (a < 10)
		{
			for (int j = a; j > 1; j--)
				silnia *= j;
			cout << ((silnia - silnia % 10) / 10) % 10 << ' ' << silnia % 10 << endl;
		}

		else
		{
			cout << 0 << ' ' << 0 << endl;
		}

	}

	return 0;
}
