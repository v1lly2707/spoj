#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t, x;
	string sek;
	cin >> t;
	int k;
	int p;
	int cnt = 0;
	int max = 0;
	int min = 0;
	while (t--)
	{
		cin >> x;
		cin >> sek;
		for (int i = 0; i < sek.size(); i++)
		{
			if (sek[i] == 'U')
				cnt++;
			else cnt--;
			if (cnt > max)
				max = cnt;
			if (cnt < min)
				min = cnt;
		}
		if (max - min >= x)
			cout << "NIE\n";
		else cout << "TAK\n";

		cnt = 0;
		max = min = 0;

	}
	return 0;
}
