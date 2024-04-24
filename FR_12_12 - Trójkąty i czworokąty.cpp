#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	cin >> x;
	int a;
	int o;
	int p;
	while (x--)
	{
		cin >> a;
		if (a % 12 == 0)
		{
			cout << a / 12 + 1 << endl;
		}
		else
		{
			o = a / 12;
			p = a - (o * 12);

			if (p == 1)
			{
				cout << 0 + o << endl;
				o = 0;
			}
			else if (p == 2)
			{
				cout << 0 + o << endl;
				o = 0;
			}
			else if (p == 3)
			{
				cout << 1 + o << endl;
				o = 0;
			}
			else if (p == 4)
			{
				cout << 1 + o << endl;
				o = 0;
			}
			else if (p == 5)
			{
				cout << 0 + o << endl;
				o = 0;
			}
			else if (p == 6)
			{
				cout << 1 + o << endl;
				o = 0;
			}
			else if (p == 7)
			{
				cout << 1 + o << endl;
				o = 0;
			}
			else if (p == 8)
			{
				cout << 1 + o << endl;
				o = 0;
			}
			else if (p == 9)
			{
				cout << 1 + o << endl;
				o = 0;
			}
			else if (p == 10)
			{
				cout << 1 + o << endl;
				o = 0;
			}
			else if (p == 11)
			{
				cout << 1 + o << endl;
				o = 0;
			}
		}


	}
	return 0;
}
