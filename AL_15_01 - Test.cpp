#include <bits/stdc++.h>
using namespace std;

int main()
{
	int cnt = 0;
	string darek, marek, jarek;
	cin >> darek >> jarek >> marek;
	for (int i = 0; i < darek.size(); i++)
	{
		if (jarek[i] != darek[i] && marek[i] != darek[i] && marek[i] == jarek[i])
			cnt += 2;
		if ((jarek[i] != darek[i] || marek[i] != darek[i]) && marek[i] != jarek[i])
			cnt++;
	}
	cout << cnt;

	return 0;
}
