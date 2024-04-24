#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	cin >> a;
	string pom = "DDDD";
	int k = 3;
	if (a[0] == '1' || a[0] == '0')
	{
		for (int i = 0; i < a.size(); i++)
		{
			if (a[i] == '1')
			{
				if (pom[k] == 'D')
					pom += 'G';
				else pom += 'D';
			}
			else
			{
				if (pom[k] == 'D')
					pom += 'D';
				else pom += 'G';
			}
			k++;
		}

		cout << pom;
	}
	else
	{
		for (int i = 4; i < a.size(); i++)
		{
			if (a[i] == a[i - 1])
				cout << 0;
			else cout << 1;
		}
	}

	return 0;
}
