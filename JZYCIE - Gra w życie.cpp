#include <bits/stdc++.h>
using namespace std;
int n, t = 100, arr[10][10], pom[10][10], cnt = 0;
bool sim(int arr[10][10])
{
	while (t--)
	{
		int x, y;
		x = y = 4;
		for (int i = 0; i < 5; i++, y++)
		{
			y %= 5;
			for (int j = 0; j < 5; j++, x++)
			{
				x %= 5;
				int o = 0;

				for (int k = 0; k < 3; k++)
				{
					for (int l = 0; l < 3; l++)
					{
						int pom1 = (x + l) % 5;
						int pom2 = (y + k) % 5;

						if (pom1 == j && pom2 == i)
							continue;

						o += arr[pom2][pom1];
					}
				}
				if (o == 2)
					pom[i][j] = arr[i][j];
				if (o == 3)
					pom[i][j] = 1;
				if (o < 2 || o>3)
					pom[i][j] = 0;

			}
		}

		for (int i = 0; i < 5; i++)
			for (int j = 0; j < 5; j++)
				arr[i][j] = pom[i][j];
	}

	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			cnt += arr[i][j];

	return cnt > 0;

}

void f()
{
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			pom[i][j] = 0;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	while (n--)
	{
		for (int i = 0; i < 5; i++)
		{
			int q = cin.get();
			for (int j = 0; j < 5; j++)
				arr[i][j] = cin.get() - 48;
		}

		if (sim(arr))
			cout << "yes\n";
		else cout << "no\n";
		cnt = 0;
		t = 100;
		f();

	}
	return 0;
}
