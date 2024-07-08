#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x, y;
	int n;
	cin >> x >> y;

	cin >> n;
	int cnt = 0;
	double x1, y1;
	long double odl = sqrt((x * x) + (y * y));
	while (n--)
	{
		cin >> x1 >> y1;
		long double odl1 = sqrt((x1 * x1) + (y1 * y1));
		//cout << odl1 << '\n';
		long double yx = y / x;
		long double yx2 = y1 / x1;
		//	cout << yx2 << '\n';
		if (yx == yx2 && odl1 < odl)
			cnt++;

	}
	cout << cnt;
	//	cout << 5/2.;
	return 0;
}
