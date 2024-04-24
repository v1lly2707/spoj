#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x;
	cin >> x;
	long long a, b;
	for (int i = 1; i <= x; i++)
	{
		cin >> a >> b;
		double ab = sqrt(a * b);

		cout << fixed << setprecision(2) << 0.5 * (a + b) * ab << endl;
	}
	return 0;
}
