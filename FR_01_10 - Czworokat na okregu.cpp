#include <bits/stdc++.h>

using namespace std;


int main()
{

	long long x;
	cin >> x;

	long long a;
	long long b;
	long long c;
	long long d;


	for (int i = 1; i <= x; i++)
	{
		cin >> a;
		cin >> b;
		cin >> c;
		cin >> d;

		if ((a + b) == (c + d) || (a + c) == (b + d) || (a + d) == (c + b))
		{
			cout << "Tak" << endl;
		}
		else
		{
			cout << "Nie" << endl;
		}

	}

	return 0;
}
