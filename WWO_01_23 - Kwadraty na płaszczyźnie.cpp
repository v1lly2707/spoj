#include <bits/stdc++.h>
using namespace std;
const long long int mod = 1000007;
int main()
{
	long long x;
	cin >> x;
	long long k;
	long long n;
	while (x--)
	{
		k = 0;
		cin >> n;



		cout << (n * (n + 1) * (2 * n + 1)) / 6 % mod << endl;

	}



	return 0;
}
