#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x;
	cin >> x;
	long long tab[1000000];
	int cnt = 1;
	int Max = 0;
	int p = 1;
	for (int i = 0; i < x; i++)
	{
		cin >> tab[i];
	}
	for (int i = 0; i < x; i++)
	{
		for (int j = 1; j <= x - i - 1; j++)
		{
			if (j % 2 == 0)
			{
				if (tab[i + j - 1] - tab[i + j] == j)
				{
					cnt++;
					p++;
				}
				else
				{
					break;

				}

			}
			else
			{
				if (tab[i + j] - tab[i + j - 1] == j)
				{
					cnt++;


				}
				else
				{
					break;

				}
			}
			if (cnt > Max)
			{
				Max = cnt;

			}
		}
		cnt = 1;

	}
	cout << Max;

	return 0;
}
