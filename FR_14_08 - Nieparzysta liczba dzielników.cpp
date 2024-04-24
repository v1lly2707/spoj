#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x;

	long long a;
	long long o = 0;


	cin >> a;
	for (int i = 1; i <= sqrt(a); i++)
	{
		if (a % i == 0)
			o += 2;
		if (i * i == a)
			o--;
	}
	if (o % 2 != 0) cout << "TAK";
	else cout << "NIE";


	return 0;
}
