#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	double n, a = 1.609344;
	cin >> n;
	if (n / a < 300)
		cout << "NIE";
	else if (n / a >= 300 && n / a < 500)
		cout << "SPRAWDZIMY TWOJE OBECNE BUTY";
	else if (n / a >= 500) cout << "TAK";
	return 0;
}
