#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long x;
	long long suma = 0;
	int a;
	cin >> a;

	int licz;
	for (int i = 1; i <= a; i++)
	{
		cin >> x;
		for (int h = 1; h <= x; h++)
		{
			cin >> licz;
			suma += licz;


		}

		cout << suma << endl;
		suma = 0;
	}




	return 0;
}
