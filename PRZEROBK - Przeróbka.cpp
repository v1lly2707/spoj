#include <bits/stdc++.h>
using namespace std;

int n, m;
int o = 0;
int d[1001][1001];
int odleglosc(string a, string b)
{

	for (int i = 0; i <= m; i++)
	{
		d[i][0] = i;
	}
	for (int j = 1; j <= n; j++)
	{
		d[0][j] = j;
	}
	for (int i = 1; i <= m; i++)
	{

		for (int j = 1; j <= n; j++)
		{
			if (a[i - 1] == b[j - 1])
			{
				o += 0;
			}
			else
				o++;


			d[i][j] = min(d[i - 1][j] + 1, min(d[i][j - 1] + 1, d[i - 1][j - 1] + o));
			o = 0;
		}


	}

	return d[m][n];

}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	string a, b;

	int w;
	while (cin >> a >> b >> w)
	{
		m = a.size();
		n = b.size();

		if (w > odleglosc(a, b) || w < odleglosc(a, b))
		{
			cout << "YES\n";
			o = 0;
		}

		else
		{
			cout << "NO\n";
			o = 0;
		}

	}



	return 0;
}
