#include <bits/stdc++.h>

using namespace std;


int main()
{
	string napis;
	int x = 0;
	while (getline(cin, napis))
	{
		int dlug = napis.length();
		for (int i = 0; i < napis.length(); i++)
			if (napis[i] == '.' && napis[i + 1] != '.' && napis[i + 2] != '.' || napis[i] == '?' || napis[i] == '!')
			{
				x++;
			}
			else if (napis[i] == '.' && napis[i + 1] == '.' && napis[i + 2] == '.')
			{
				x = x;
			}

	}
	cout << x << endl;
	return 0;
}
