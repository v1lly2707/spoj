#include <bits/stdc++.h>

using namespace std;


int main()
{
	int x;
	cin >> x;
	long long a;
	long long o;
	long long p;
	while (x--)
	{
		o = 0;
		p = 5;
		cin >> a;
		while (p <= a)
		{
			o = o + a / p;
			p *= 5;
		}

		cout << o << endl;
	}




	return 0;
}
