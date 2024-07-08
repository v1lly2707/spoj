#include <bits/stdc++.h>

using namespace std;


int main()
{
	int a;
	while (cin >> a)
	{
		int k;
		cin >> k;
		int b;
		int x;

		for (int i = 1; i <= k; i++)
		{
			cin >> b;

			if (a == b)
			{

				x = x + 1;

			}
		}
		cout << x << endl;
		x = 0;
	}

	return 0;
}
