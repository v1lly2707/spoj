#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x;
	long long a;
	long long y;
	long long n;

	cin >> a;
	for (int i = 1; i <= a; i++)
	{
		cin >> n >> x >> y;
		for (int j = 1; j < n; j++)
		{
			if (j % x == 0 && j % y != 0)
			{
				cout << j << ' ';
			}
		}
		x = 0;
		y = 0;
		cout << endl;
	}
	return 0;
}
