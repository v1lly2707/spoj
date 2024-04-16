#include <bits/stdc++.h>

using namespace std;


bool pier(long long b)
{
	if (b < 2)
		return false;

	for (int i = 2; i * i <= b; i++)
		if (b % i == 0)
			return false;
	return true;
}
bool pierw(long long l)
{
	if (l < 2)
		return false;

	for (int i = 2; i * i <= l; i++)
		if (l % i == 0)
			return false;
	return true;
}




int main()
{
	int x;
	cin >> x;

	long long int b;
	long long int l;


	for (int i = 1; i <= x; i++)
	{
		cin >> b >> l;

		if (pier(b) == true && pier(l) == true)
		{
			if (b > l)
			{
				cout << "Bolek" << endl;
			}
			else if (b < l)
			{
				cout << "Lolek" << endl;
			}
			else if (b == l)
			{
				cout << "Bolek" << endl;
			}

		}
		else if (pier(b) == true && pier(l) == false)
		{
			cout << "Bolek" << endl;
		}
		else if (pierw(l) == true && pier(b) == false)
		{
			cout << "Lolek" << endl;
		}

		else if (pier(b) == false && pierw(l) == false)
		{
			if (b < l)
			{
				cout << "Bolek" << endl;
			}
			else if (b > l)
			{
				cout << "Lolek" << endl;
			}
			else if (b == l)
			{
				cout << "Bolek" << endl;
			}

		}
		else
		{
			cout << "Bolek" << endl;
		}



	}


	return 0;
}
