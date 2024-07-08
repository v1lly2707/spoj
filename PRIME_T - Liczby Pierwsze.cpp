#include<bits/stdc++.h>

using namespace std;

bool pier(int n)
{
	if (n < 2)
		return false;

	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}

int main()
{
	int n;
	int x;

	cin >> x;

	for (int i = 1; i <= x; i++)
	{
		cin >> n;

		if (pier(n))
			cout << "TAK" << endl;
		else
			cout << "NIE" << endl;
	}




	return 0;
}
