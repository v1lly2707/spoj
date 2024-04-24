#include <bits/stdc++.h>
using namespace std;

void sito(bool spr[20000001])
{
	spr[0] = spr[1] = 1;
	for (long long int i = 2; i * i <= 20000000; i++)
	{
		if (spr[i] == 0)
			for (long long int j = i * i; j <= 20000000; j += i)
				spr[j] = 1;
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	bool* spr = new bool[2000000005];
	long long int x, a;
	long long int p;
	long long int o = 1;
	long long int y;
	long long int u = 1;
	sito(spr);



	cin >> x;
	while (x--)
	{
		cin >> a;
		if (a == 1)
			cout << '2' << endl;

		else if (spr[a] == 0 && a != 1)
			cout << a << endl;
		else
		{
			while (spr[a + o] == 1)
				o++;

			while (spr[a - u] == 1)
				u++;


			if (u > o)
				cout << a + o << endl;
			else
				cout << a - u << endl;

			o = 1;
			u = 1;

		}




	}

	return 0;
}
