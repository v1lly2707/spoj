#include <bits/stdc++.h>

using namespace std;


int main()
{

	long long x;
	cin >> x;

	long long n;

	for (int i = 1; i <= x; i++)
	{
		cin >> n;
		cout << (n * (n + 1) * (2 * n + 1)) / 6 << endl;
	}

	return 0;
}
