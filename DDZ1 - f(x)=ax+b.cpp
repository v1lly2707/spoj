#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a;
	int b;
	cin >> a;
	cin >> b;
	cout << "f" << "(x)" << "=";
	if (a != 0 && a != 1 && a != -1 && b != 0)
	{
		if (b > 0)
		{
			cout << a << "x+" << b;
		}
		else
		{
			cout << a << "x" << b;
		}
	}
	else
	{
		if (a == 0)
		{
			cout << b;
		}
		else if (a == 1)
		{
			if (b > 0)
			{
				cout << "x+" << b;

			}
			else if (b < 0)
			{
				cout << "x" << b;
			}
			else if (b == 0)
			{
				cout << "x";
			}
		}
		else if (a == -1)
		{
			if (b < 0)
			{
				cout << "-x" << b;
			}
			else if (b > 0)
			{
				cout << "-x+" << b;
			}
			else if (b == 0)
			{
				cout << "-x";
			}
		}
		else if (b == 0 && a != 0 && a != 1 && a != -1)
		{
			cout << a << "x";
		}
	}


	return 0;
}
