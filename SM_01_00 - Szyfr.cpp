#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, a1, a2, a3, a4, a5, aux;
	char out;
	string a;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		for (int j = 0; j < a.size(); j += 5)
		{
			if (a[j] == '0')
				a1 = 0;
			else a1 = 1;

			if (a[j + 1] == '0')
				a2 = 0;
			else a2 = 1;

			if (a[j + 2] == '0')
				a3 = 0;
			else a3 = 1;

			if (a[j + 3] == '0')
				a4 = 0;
			else a4 = 1;

			if (a[j + 4] == '0')
				a5 = 0;
			else a5 = 1;

			aux = a5 + 2 * a4 + 4 * a3 + 8 * a2 + 16 * a1;

			aux += 65;

			out = aux;
			cout << out;

		}
		cout << '\n';
	}
}
