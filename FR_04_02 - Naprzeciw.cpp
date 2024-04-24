#include <bits/stdc++.h>

using namespace std;


int main()
{
	int x;
	cin >> x;
	long long a;
	long long b;


	for (int i = 1; i <= x; i++)
	{
		cin >> a;
		cin >> b;


		if (a % 2 != 0)
		{
			cout << "BRAK" << endl;
		}
		else if (a % 2 == 0 && b > (a / 2))
		{
			cout << b - (a / 2) << endl;
		}
		else if (a % 2 == 0 && b <= (a / 2))
		{
			cout << b + (a / 2) << endl;
		}
	}
	return 0;
}
