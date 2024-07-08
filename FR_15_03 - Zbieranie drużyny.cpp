#include <bits/stdc++.h>
using namespace std;
bool arr[1005] = {};
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, a;
	string b;
	cin >> n;
	while (n--)
	{
		cin >> a >> b;
		if (b == "bede" || b == "ja" || b == "gram")
			arr[a] = true;
		else if (b == "odpadam" || b == "rezygnuje")
			arr[a] = false;
	}
	int cnt = 0;
	for (int i = 0; i <= 100; i++)
	{
		if (arr[i] == true)
			cnt++;
	}

	if (cnt >= 10)
		cout << "Gramy! Bedzie nas " << cnt;
	else
		cout << "Nie gramy :( Jest nas tylko " << cnt;
	return 0;
}
