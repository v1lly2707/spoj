#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int a, b, c, d, e, f, g, x, y;
	long long int o = 0, p = 0;
	cin >> a >> b >> f >> g;
	d = b;
	if (b == 0)
	{
		e = a * 10;
	}
	else
	{
		while (b != 0)
		{
			o++;
			b /= 10;
		}
		b = d;
		a *= (pow(10, o));
		e = a + b;
	}
	x = g;
	if (g == 0)
	{
		y = f * 10;
	}
	else
	{
		while (g != 0)
		{
			p++;
			g /= 10;
		}
		g = x;
		f *= (pow(10, p));
		y = f + g;
	}
	cout << y + e;


	return 0;
}
