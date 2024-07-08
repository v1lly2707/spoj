#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a;
	cin >> a;
	int pom;
	if (a == 3)
		cout << "2 0 3 1";
	else if (a == 0)
		cout << 0;
	else if (a < 3 && a != 0)
	{
		cout << "NIE";
	}
	else
	{
		pom = a / 2;
		if (a % 2 == 0)
		{
			for (int i = 0; i < pom; i++)
			{
				cout << i << ' ' << pom + 1 + i << ' ';
			}
			cout << pom;
		}
		else
		{
			for (int i = 0; i <= pom; i++)
			{
				cout << i << ' ' << pom + i + 1 << ' ';
			}
		}

	}

	return 0;
}
