#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (c == 33)
		cout << "WRACAJ";
	else
	{
		if (a >= b)
			cout << "W PRAWO";
		else
			cout << "W LEWO";
	}
	return 0;
}
