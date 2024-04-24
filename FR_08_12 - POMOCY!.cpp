#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x, a, b, o = 0;
	cin >> x;
	while (x--)
	{
		cin >> a >> b;
		do
		{
			if (a < b && b != 2)
			{
				o++;
				break;
			}
			else
			{
				a /= b;
				o++;
			}

		} while (a > 0);
		cout << o << endl;
		o = 0;

	}
	return 0;

}
