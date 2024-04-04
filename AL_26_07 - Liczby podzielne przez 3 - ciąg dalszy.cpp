#include <bits/stdc++.h>
using namespace std;
int M = 1010101011;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int arr[15] = {};
	int arr_2[10005][3] = {};
	arr_2[0][0] = 1;
	int c, t, cnt = 0, sum = 0;;
	string w;
	cin >> c;
	for (int i = 0; i < c; i++)
		cin >> arr[i];

	for (int i = 1; i <= 1000; i++)
	{
		for (int j = 0; j < c; j++)
		{
			arr_2[i][(0 + arr[j]) % 3] = (arr_2[i][(0 + arr[j]) % 3] + arr_2[i - 1][0]) % M;
			arr_2[i][(1 + arr[j]) % 3] = (arr_2[i][(1 + arr[j]) % 3] + arr_2[i - 1][1]) % M;
			arr_2[i][(2 + arr[j]) % 3] = (arr_2[i][(2 + arr[j]) % 3] + arr_2[i - 1][2]) % M;
		}
	}

	cin >> t;
	for (int i = 0; i < t; i++)
	{
		sum = cnt = 0;
		cin >> w;
		for (int i = 0; i < w.size(); i++)
		{
			if (w[i] == '*')
				cnt++;
			else
				sum += w[i] - 48;
		}
		if (sum % 3 == 0)
			cout << arr_2[cnt][0] << '\n';
		else if (sum % 3 == 1)
			cout << arr_2[cnt][2] << '\n';
		else if (sum % 3 == 2)
			cout << arr_2[cnt][1] << '\n';
	}

	return 0;
}
