#include <bits/stdc++.h>
using namespace std;

int main()
{
	double a, b, c;

	cin >> a >> b >> c;
	if (a != 0)
	{
		cout << fixed << setprecision(2) << (c - b) / a << endl;
	}
	else if (a == 0)
	{
		if (b == c)
		{
			cout << "NWR" << endl;
		}
		else
		{
			cout << "BR" << endl;
		}
	}




	return 0;
}
