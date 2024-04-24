#include <bits/stdc++.h>

using namespace std;

int main()
{
	string napis;
	cin >> napis;
	int dlug = napis.length();
	int x, a, i;
	cin >> x;
	string p;
	string t;
	while (x--)
	{
		cin >> a;

		if (a == 0)
		{
			cout << napis[dlug - 1];
			if (x != 0)
				cout << endl;
		}

		else if (a > 0)
		{
			for (i = 0; i < napis.size(); i++)
			{
				cout << napis[i];
				if (i < napis.length() - 1)
					for (int k = 0; k < a - 1; k++)
						cout << ' ';

			}
			if (x != 0)
				cout << endl;
		}
		else if (a < 0)
		{
			for (int j = napis.length() - 1; j >= 0; j--) {
				cout << napis[j];
				if (j <= napis.length() - 1 && j > 0)
				{
					for (int k = a + 1; k < 0; k++)
					{
						cout << ' ';


					}

				}

			}

			if (x != 0)
				cout << endl;

		}
	}
	return 0;
}
