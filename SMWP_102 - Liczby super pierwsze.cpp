#include<bits/stdc++.h>
using namespace std;

bool pier(int a)
{
	if (a < 2)
		return false;

	for (int i = 2; i * i <= a; i++)
		if (a % i == 0)
			return false;
	return true;
}

int main()
{

	int x;
	cin >> x;
	int a;

	for (int i = 1; i <= x; i++)
	{
		cin >> a;
		while (a / 10 != 0 && pier(a) == true)
		{

			a /= 10;
		}
		if (pier(a) == true)
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
