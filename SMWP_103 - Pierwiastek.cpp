#include <bits/stdc++.h>

using namespace std;


int main()
{
	int x;
	cin >> x;
	int a;

	for (int i = 1; i <= x; i++)
	{
		cin >> a;
		if ((int)(sqrt(a)) == sqrt(a) && a > 0)
		{
			cout << "TAK" << endl;
		}
		else
		{
			cout << "NIE" << endl;
		}

	}

	return 0;
}
