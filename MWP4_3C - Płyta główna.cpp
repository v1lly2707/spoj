#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	string word;
	char a = 'A';
	int ans = 0;
	while (t--)
	{
		cin >> word;
		for (int i = 0; i < word.size(); i++)
		{
			ans += min(abs(word[i] - a), 26 - abs(word[i] - a));
			a = word[i];
		}
		cout << ans << '\n';
		ans = 0;
		a = 'A';


	}
	return 0;
}
