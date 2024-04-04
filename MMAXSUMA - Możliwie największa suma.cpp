#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x;
	cin >> x;
	int a;
	int o = 0;
	long long suma = 0;
	long long max = (-1000000000);
	for (int i = 1; i <= x; i++)
	{
		cin >> a;
		if (a > 0)
			o++;
		
		if (a > 0)
			suma += a;
		
		if (a > max)
			max = a;

	}

	if (o == 0)
		cout << max;
	else
		cout << suma;

	return 0;
}
