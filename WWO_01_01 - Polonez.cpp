#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a, b, c;
	string d, e, f;
	cin >> a >> b >> c;
	int dz = 0;
	int ch = 0;
	for (int i = 1; i <= a; i++)
	{
		cin >> d;
		if (d[d.size() - 1] == 'a')
		{
			dz++;
		}
		else
		{
			ch++;
		}


	}
	for (int i = 1; i <= b; i++)
	{
		cin >> e;
		if (e[e.size() - 1] == 'a')
		{
			dz++;
		}
		else
		{
			ch++;

		}

	}
	for (int i = 1; i <= c; i++)
	{
		cin >> f;
		if (f[f.size() - 1] == 'a')
		{
			dz++;
		}
		else
		{
			ch++;
		}

	}
	if (ch == dz)
	{
		cout << ch;
	}
	else if (ch < dz)
	{
		cout << ch;
	}
	else if (dz < ch)
	{
		cout << dz;
	}

	return 0;
}
