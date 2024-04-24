#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x;
	cin >> x;
	int arr[15];
	int cnt[15] = {};
	int ans = 0;
	int o = 0;
	for (int i = 0; i < x; i++)
	{
		cin >> arr[i];
		cnt[arr[i]]++;
	}
	for (int i = 1; i < 11; i++)
	{
		if (cnt[i] != 0)
		{
			o += cnt[i];
			for (int j = i; j >= 1; j--)
			{
				if (o != 1)
					ans += cnt[j];
			}
		}



	}
	cout << ans;



	return 0;
}
