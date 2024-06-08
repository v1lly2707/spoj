#include <bits/stdc++.h>

using namespace std;

int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	cout << ceil((a * b) / 3) + ceil(((a * c * 2) + (b * c * 2)) / 5);


	return 0;
}
