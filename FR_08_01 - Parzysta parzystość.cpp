#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long x;
	cin >> x;
	while (x % 2 != 0 && x / 10 != 0)
		x /= 10;
	
	if (x % 2 == 0)
		cout << "Tak" << endl;
	
	if (x % 2 != 0)
		cout << "Nie" << endl;
	

	return 0;
}
