#include <bits/stdc++.h>
using namespace std;

int arr[1000005] = {};
int main()
{
	for (int i = 0; i <= 1000005; i++)
		arr[i] = -10005;
	int t, cnt = 0;
	cin >> t;
	for (int i = 1; i <= t; i++)
		cin >> arr[i];

	for (int i = 1; i <= t; i++)
	{
		if (arr[i]<arr[i + 1] && arr[i + 1]>arr[i + 2] && (arr[i + 1] <= 1000 && arr[i + 1] >= -1000) && (arr[i + 2] >= -1000 && arr[i + 2] <= 1000))
		{
			cnt++;
			//cout << i << "idied\n";
		}
	}
	cout << cnt;
	return 0;
}
