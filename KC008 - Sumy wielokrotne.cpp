#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long x;
	long long suma = 0;
	long long suma2 = 0;
	while (cin >> x)
	{
		suma += x;

		if (x == 0)
		{
			cout << suma << endl;
			suma2 += suma;
			suma = 0;
		}

	}
	cout << suma2 << endl;
	return 0;
}
