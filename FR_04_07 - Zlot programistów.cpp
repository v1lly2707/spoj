#include <bits/stdc++.h>
using namespace std;
int t, x, y;
long long nwd(long long a, long long b)
{
	long long aux;
	while (b != 0)
	{
		aux = b;
		b = a % b;
		a = aux;
	}
	return a;
}
map < pair < int, int >, bool > _map;
pair < int, int > _pair;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> t;
	while (t--)
	{
		cin >> x >> y;
		int aux = nwd(abs(x), abs(y));
		_pair = make_pair(x, y);
		if (aux != 1 || _map[_pair])
			cout << "NIE\n";
		else
		{
			cout << "TAK\n";
			_map[_pair] = true;
		}
	}

	return 0;
}
