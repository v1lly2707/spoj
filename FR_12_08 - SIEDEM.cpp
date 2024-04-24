#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x;
	long long int o = 0;
	string napis;
	cin >> x;
	int p;
	while (x--)
	{
		cin >> napis;
		for (int i = napis.size() - 1; i >= 0; i--)
		{
			if (napis[i] == '0')
			{
				o++;

			}
			else
				break;


		}
		cout << o << endl;
		o = 0;
	}


	return 0;
}
