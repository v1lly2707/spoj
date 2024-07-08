#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t, n, arr[105] = {};
	cin >> t;
	while (t--)
	{
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> arr[i];

		//cout << arr[n-1] << ' ';
		for (int i = 1; i <= n - 1; i++)
			cout << arr[i] << ' ';

		cout << arr[0] << '\n';
	}
	return 0;
}
