#include <bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	int x;
	double a, b;
	cin >> x;
	char znak;
	double st;
	while (x--)
	{
		cin >> a >> znak >> b;
		st = 30 * a + 30 * (b / 60) - 6 * b;

		while (st >= 360)
			st -= 360;

		while (st < 0)
			st += 360;

		if (st > 180)
			st = 360 - st;
		cout << fixed << setprecision(1) << st << endl;
	}

	return 0;
}
