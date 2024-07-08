#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	string godz;
	int a, b;
	cin >> x;
	while (x--)
	{
		cin >> godz;
		a = ((int)godz[0] - 48) * 10 + (int)godz[1] - 48;
		b = ((int)godz[3] - 48) * 10 + (int)godz[4] - 48;

		if (a != 0)
		{
			if (b - b % a + a < 60)
			{
				if (a < 10)
					cout << 0;

				cout << a << ':';

				if (b - b % a + a < 10)
					cout << 0;

				cout << b - b % a + a << endl;

			}
			else
			{
				if (a == 23)
					cout << "01:00" << endl;

				else
				{
					if (a + 1 < 10)
						cout << 0;
					cout << a + 1 << ":00" << endl;
				}
			}



		}
		else
			cout << "01:00" << endl;
	}
	return 0;
}
