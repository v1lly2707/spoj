#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	int arr[105][105] = {};
	int pom[105][105] = {};
	int a, b;
	while (t--)
	{
		cin >> a >> b;
		for (int i = 1; i <= a; i++)
			for (int j = 1; j <= b; j++)
				cin >> arr[i][j];

		for (int i = 1; i <= a; i++)
		{
			for (int j = 1; j <= b; j++)
			{
				if (i == 1 && j == 1)
					pom[2][1] = arr[i][j];
				else if (i == a && j == b)
					pom[a - 1][b] = arr[i][j];
				else if (i == 1 && j == b)
					pom[1][b - 1] = arr[i][j];
				else if (i == a && j == 1)
					pom[a][2] = arr[i][j];
				else if (i == 1 && (j != 1 && j != b))
					pom[1][j - 1] = arr[i][j];
				else if (i == a && (j != 1 && j != b))
					pom[a][j + 1] = arr[i][j];
				else if (j == 1 && (i != 1 && i != a))
					pom[i + 1][1] = arr[i][j];
				else if (j == b && (i != 1 && i != a))
					pom[i - 1][b] = arr[i][j];
				else pom[i][j] = arr[i][j];

			}
		}
		for (int i = 1; i <= a; i++)
		{
			for (int j = 1; j <= b; j++)
			{
				cout << pom[i][j] << ' ';
			}
			cout << '\n';
		}
	}
	return 0;
}
