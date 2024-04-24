#include <bits/stdc++.h>

using namespace std;
int main()
{
	int x;
	long int a, b, c, d;
	cin >> x;
	while (x--)
	{
		cin >> a >> b >> c >> d;
		double cos = a + b;
		double cos2 = (c - d);
		double delta = (cos * cos) - 4 * cos2 / (100 - d) * a * b;
		double y = (-(cos)+sqrt(delta)) / 2;
		cout << fixed << setprecision(4) << y << endl;
	}

	return 0;
}
