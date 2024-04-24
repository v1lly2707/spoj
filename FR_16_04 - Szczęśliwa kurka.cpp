#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cin >> a;
	double out = 0;
	if (a >= 1000)
		cout << (1000 * 0.5) + (a - 1000);
	else
	{


		if (a >= 900 && a <= 999)
			out = a * 0.45;
		else if (a >= 800 && a <= 899)
			out = a * 0.40;
		else if (a >= 700 && a <= 799)
			out = a * 0.35;
		else if (a >= 600 && a <= 699)
			out = a * 0.30;
		else if (a >= 500 && a <= 599)
			out = a * 0.25;
		else if (a >= 400 && a <= 499)
			out = a * 0.20;
		else if (a >= 300 && a <= 399)
			out = a * 0.15;
		else if (a >= 200 && a <= 299)
			out = a * 0.10;
		else if (a >= 100 && a <= 199)
			out = a * 0.05;
		else out = 0;

		if (out - (int)out == 0)
			cout << (int)out;
		else cout << fixed << setprecision(2) << out;
	}


	return 0;
}
