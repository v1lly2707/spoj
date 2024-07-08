#include <bits/stdc++.h>
using namespace std;
int arr[1005] = {};
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, a;
	string b;
	cin >> n;
	while (n--)
	{
		cin >> a >> b;
		arr[a]++;
	}

	int cnt = 0;
	for (int i = 1; i <= 1000; i++)
	{
		if (arr[i] > 0)
			cnt++;
	}
	cout << cnt;
	return 0;
}
