#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	cin >> x;
	double a;
	while (x--)
	{
		cin >> a;
		cout << fixed << setprecision(2) << (sqrt(pow(a, 3) * pow(a, 3) * 2)) / 12 << endl;
	}
}
