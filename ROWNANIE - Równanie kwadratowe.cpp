#include <bits/stdc++.h>
using namespace std;

int main()
{
	double a, b, c;

	while (cin >> a >> b >> c)
	{
		if (pow(b, 2) - 4 * (a * c) < 0)
		{
			cout << '0' << endl;
		}
		else if (pow(b, 2) - 4 * (a * c) == 0)
		{
			cout << '1' << endl;

		}
		else if (pow(b, 2) - 4 * (a * c) > 0)
		{
			cout << '2' << endl;
		}

	}





	return 0;
}
