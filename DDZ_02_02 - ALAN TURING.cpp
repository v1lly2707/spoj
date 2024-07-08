#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	string m = "";
	cin >> x;
	string a;
	char b;
	int q;
	while (x--)
	{
		cin >> a;
		if (a == "DODAJ")
		{
			cin >> b;
			m += b;
		}
		if (a == "ZAMIEN")
		{
			cin >> b;
			if (m.size() != 0)
				m[m.size() - 1] = b;
		}
		if (a == "USUN")
		{
			cin >> q;
			if (m.size() >= q)
				m.erase(m.size() - q, m.size() - 1);
			else
				m.clear();
		}
	}
	cout << m;

	return 0;
}
