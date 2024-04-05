#include <bits/stdc++.h>
using namespace std;

int arr[1005][1005] = {};
int main()
{
	int n, m;
	cin >> n >> m;
	int ok1 = 0, ok2 = 0;
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	//	cout << arr[2][1] << "hfdiewf\n";
	for (int i = 1; i < n; i++)
	{
		for (int j = 1; j < m; j++)
		{
			if (arr[i][j] != 0)
			{
				for (int k = i + 1; k < n; k++)
					if (arr[k][j] >= arr[i][j])
					{
						//cout << arr[k][j] << ' ' << arr[i][j] << endl;
						ok1++;
						break;
					}

				for (int k = i - 1; k >= 0; k--)
					if (arr[k][j] >= arr[i][j])
					{
						ok1++;
						break;
					}

				for (int p = j + 1; p < m; p++)
					if (arr[i][p] >= arr[i][j])
					{
						ok2++;
						break;
					}

				for (int p = j - 1; p >= 0; p--)
					if (arr[i][p] >= arr[i][j])
					{
						ok2++;
						break;
					}
			}


			if (ok2 == 2 && ok1 == 2)
				cnt++;

			ok1 = ok2 = 0;

		}
	}
	cout << cnt;
	return 0;
}
