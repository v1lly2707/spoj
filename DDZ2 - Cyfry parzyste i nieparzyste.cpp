#include <bits/stdc++.h>

using namespace std;
const long long c = 1000000007;
int main()
{

	int x;
	cin >> x;
	string a;

	for (int i = 1; i <= x; i++)
	{
		cin >> a;
		long long p = 5;
		int dlug = a.size();
		if (a.length() > 1 && a[0] == 'p')
		{
			p--;
		}
		for (int j = 1; j < dlug; j++)
		{
			p = (p * 5) % c;
		}
		cout << p << endl;
	}
	return 0;
}
