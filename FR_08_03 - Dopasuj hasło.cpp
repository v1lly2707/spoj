#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x;
	cin >> x;
	int o = 0;
	string napis;
	string sprawdz;
	int ok = 0;
	int ok2 = 0;
	int p = 0;
	while (x--)
	{
		cin >> napis;
		cin >> sprawdz;
		if (napis.length() != sprawdz.length())
			cout << "error" << endl;
		else
		{
			for (int i = 0; i < sprawdz.length(); i++)
			{
				if (sprawdz[i] == '*')
					o++;
				else
				{
					if (sprawdz[i] == napis[i])
						p++;
				}
			}
			if (sprawdz.length() - o == p)
				cout << "ok" << endl;
			else
				cout << "error" << endl;
			o = p = 0;
		}
	}



	return 0;
}
