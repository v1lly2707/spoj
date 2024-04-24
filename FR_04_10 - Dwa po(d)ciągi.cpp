#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long t, a, x, o = 0;
	cin >> t;
	long long cnt1 = 0, cnt2 = 0;
	vector < long long > vec;
	while (t--)
	{
		cin >> x;
		for (int i = 0; i < x; i++)
		{
			cin >> a;
			cnt1 += a;
			vec.push_back(a);
		}

		for (int i = 0; i < vec.size() - 1; i++)
		{
			cnt1 -= vec[i];
			cnt2 += vec[i];

			if (cnt1 == cnt2)
				o++;
		}
		cout << o << '\n';
		o = cnt1 = cnt2 = 0;
		vec.clear();
	}
	return 0;
}
