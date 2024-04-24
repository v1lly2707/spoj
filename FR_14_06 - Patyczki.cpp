#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x;
	cin >> x;
	int arr[1200] = {};
	int cnt[280] = {};
	int ans = 0;
	for (int i = 0; i < x; i++)
	{
		cin >> arr[i];
		cnt[arr[i]]++;
	}


	for (int i = 0; i < 270; i++)
	{
		ans += (cnt[i] / 3);

	}
	cout << ans;


	return 0;
}
