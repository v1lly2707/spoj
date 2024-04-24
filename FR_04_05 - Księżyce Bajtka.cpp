#include <bits/stdc++.h>

using namespace std;


int main()
{
	int x;
	cin >> x;
	long double a;
	long double b;


	for (int i = 1; i <= x; i++)
	{
		cin >> a;
		cin >> b;

		cout << fixed << setprecision(2) << (a * b) * 2 << endl;
	}
	return 0;
}
