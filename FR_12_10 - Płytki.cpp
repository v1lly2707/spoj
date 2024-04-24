#include <bits/stdc++.h>
using namespace std;


int main()
{
	int x;
	cin >> x;
	int a, b;
	while (x--)
	{
		cin >> a >> b;
		cout << 'W';
		for (int k = 1; k < a; k++)
		{
			cout << 'B';
		}
		cout << endl;

		for (int i = 1; i < b; i++)
		{
			for (int i = 1; i <= a; i++)
			{
				cout << 'B';
			}
			cout << endl;
		}
		cout << endl;
	}


	return 0;

}
