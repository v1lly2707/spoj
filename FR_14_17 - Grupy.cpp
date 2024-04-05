#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	cin >> n >> m;
	m--;

	int arr[10005] = {};
	vector < int > vec;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int cnt = 0;
	int o = 0;
	sort(arr, arr + n);
	for (int i = 1; i < n; i++)
	{
		if ((arr[i] - arr[i - 1]) != 0)
		{
			vec.push_back(arr[i] - arr[i - 1]);
			cnt += (arr[i] - arr[i - 1]);
		}

	}
	int pom = cnt;
	//cout << cnt << "ihwef\n";
	vec.push_back(0);


	sort(vec.begin(), vec.end());


	for (int i = vec.size() - 1; i >= 0; i--)
	{

		cnt -= vec[i];
		o++;
		if (o == m) break;

	}
	if (m == 0) cout << pom;
	else cout << cnt;



	//cout << cnt;


	return 0;
}
