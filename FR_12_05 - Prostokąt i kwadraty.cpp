#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int x, y, p;
	cin >> x >> y;
	int g = (x * x) + (pow((y - x), 2));
	int q = pow(x, 2) * 2;
	if (y / x >= 2)
		cout << q;
	
	else
		cout << g;

	


	return 0;
}
