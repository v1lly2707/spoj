#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, c, d, e, f, g, h;
	cin >> a >> b;
	cin >> c >> d;
	cin >> e >> f;
	cin >> g >> h;
	int suma = 0;
	suma += e - f;
	suma += c - d;
	suma += a - b;
	suma += g - h;
	cout << suma;

	return 0;
}
