#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	int pom1 = 0, pom2 = 0;
	int a;
	string x;
	bool error = false;
	while (t--)
	{
		cin >> a;
		for (int i = 0; i < a; i++)
		{
			cin >> x;
			if (x == "AI")
				pom1++;
			if (x == "BI")
				pom2++;
			if (x == "AO")
			{
				if (pom2 != 0)
					pom2--;
				else error = true;
			}
			if (x == "BO")
			{
				if (pom1 != 0)
					pom1--;
				else error = true;
			}
		}
		if (error == true) cout << "ERROR\n";
		else cout << pom1 + pom2 << "\n";
		pom1 = pom2 = 0;
		error = false;
	}
	return 0;
}
