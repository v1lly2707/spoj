#include <bits/stdc++.h>

using namespace std;

int main()
{
	queue < int > oceny;
	int x, y;
	string  a;
	int p = 0, m = 0, q, w;
	getline(cin, a);
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] == '+')
			p++;
		else if (a[i] == '-')
			m++;


	}

	if (p > m)
	{
		q = p - m;
		x = (p - m) / 3;
		if (q < 3)
			cout << "BRAK";
		else
			while (x--)
			{
				oceny.push(5);
			}
	}
	else if (p < m)
	{
		w = m - p;
		y = (m - p) / 3;
		if (w < 3)
			cout << "BRAK";
		else
		{
			while (y--)
			{
				oceny.push(1);
			}
		}


	}
	else if (p == m)
	{
		cout << "BRAK";
	}

	while (oceny.empty() == false)
	{
		cout << oceny.front() << ' ';
		oceny.pop();
	}





	return 0;
}
