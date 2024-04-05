#include <bits/stdc++.h>
using namespace std;
vector < int > vec[105];
int main()
{
	bool ok = false;
	int n, moc;
	int dod_moc = 0;
	int ile = 0;
	int poz = 0;
	int a;
	cin >> n >> moc;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> a;
			vec[i].push_back(a);
		}

	}
	for (int i = 1; i <= n; i++)
	{
		sort(vec[i].begin(), vec[i].end());
		for (int j = vec[i].size() - 1; j >= 0; j--)
		{
			if (moc > vec[i][j])
			{
				ile++;
				dod_moc += vec[i][j];
				if (ile == i)
				{
					moc += dod_moc;
					poz++;
					break;
				}

			}

		}
		if (ile < i)
		{
			cout << poz;
			ok = true;
			break;
		}
		ile = 0;
		dod_moc = 0;

	}
	if (ok == false)
		cout << poz;
	return 0;
}
