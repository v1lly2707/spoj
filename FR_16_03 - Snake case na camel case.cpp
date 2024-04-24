#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a, out = "";
	cin >> a;

	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] == '_')
		{
			a.erase(i, 1);
			a[i] -= 32;
		}
	}
	cout << a;
	return 0;
}
