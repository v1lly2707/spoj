#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio;
	cin.tie(NULL);
	map<pair <int, int>, int> mapa;
	int x;
	cin >> x;
	int y, q, w, a, b;
	while (x--)
	{
		cin >> a >> b;
		mapa[{a, b}] = 1;

	}
	cin >> y;
	while (y--)
	{
		cin >> q >> w;
		if (mapa[{q, w}] == 1)
			cout << "TAK" << endl;
		else
			cout << "NIE" << endl;
	}

	return 0;
}
