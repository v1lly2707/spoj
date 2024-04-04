#include <bits/stdc++.h>
using namespace std;

int lcs(string a, string b) {
	vector < vector < int > > dp(a.size() + 1, vector < int >(b.size() + 1));

	for (int i = 1; i <= a.size(); i++) {
		for (int j = 1; j <= b.size(); j++) {
			dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);

			if (a[i - 1] == b[j - 1])
				dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 1);
		}
	}
	return dp[a.size()][b.size()];
}

int t, a, b;
string word1, word2;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> t;
	while (t--)
	{
		cin >> a >> word1 >> b >> word2;
		cout << lcs(word1, word2) << '\n';
	}
	return 0;
}
