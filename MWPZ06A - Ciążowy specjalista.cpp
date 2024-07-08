#include <bits/stdc++.h>

using namespace std;




int main()
{
	int a;
	cin >> a;
	double x, y, z;
	for (int i = 1; i <= a; i++)
	{
		cin >> x >> y >> z;
		cout << fixed << setprecision(0) << ((z * y - x - y) / (1 - z)) * (-12) << endl;

	}




	return 0;
}
