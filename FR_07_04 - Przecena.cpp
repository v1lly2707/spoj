#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x;

	cin >> x;

	double a;
	double b;

	int precyzja = 2;

	for (int i = 1; i <= x; i++)
	{
		cin >> a >> b;
		double stoa = 100 - a;
		double bstoa = b / 100;
		cout << fixed << setprecision(precyzja) << a + (stoa * bstoa) << endl;
	}



	return 0;
}
