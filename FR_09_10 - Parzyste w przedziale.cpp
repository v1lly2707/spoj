#include <bits/stdc++.h>

using namespace std;


int main()
{
	int x;

	cin >> x;
	bool xd;
	int a;
	int b;
	int o = 0;
	for (int j = 1; j <= x; j++)
	{
		cin >> a >> b;
		if (a % 2 == 0)
		{
			a++;
		}
		bool xd = false;
		for (int i = a; i < b; i++)
		{

			if (i % 2 == 0)
			{

				cout << i << " " << endl;
				xd = true;
			}

		}
		if (xd == false)
		{
			cout << "BRAK" << endl;
		}
	}
	return 0;
}
