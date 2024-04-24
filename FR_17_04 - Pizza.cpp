#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, a, b, c, d;
	cin >> n;
	double pi = 3.14;
	for (int i = 1; i <= n; i++)
	{
		cin >> a >> b >> c >> d;
		double r1 = b / 2.;
		double r2 = d / 2.;
		//cout << r2 << '\n';
		double m = a * pow(r1, 2);
		double g = c * pow(r2, 2);

		if (m == g)
			cout << "porcje sa takie same\n";
		else if (m > g)
			cout << "Maciek\n";
		else cout << "Grzesiek\n";
	}
	return 0;
}
