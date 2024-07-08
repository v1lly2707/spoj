#include <bits/stdc++.h>

using namespace std;



int main()
{
	int x = 0;
	int a;
	int a1;
	cin >> a;
	a1 = a;
	if (a1 != 42 && a == 42)

		x++;


	cout << a << endl;


	while (x < 3)
	{
		cin >> a;

		if (a1 != 42 && a == 42)
		{
			x++;
		}
		a1 = a;
		cout << a << endl;

	}

	return 0;


}
