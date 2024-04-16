#include <bits/stdc++.h>

using namespace std;


int main()
{

	int a;
	cin >> a;

	string napis;

	int dlug = napis.length();

	for (int i = 1; i <= (a + 1); i++)
	{
		getline(cin, napis);


		for (int i = 0; i <= napis.length(); i++)
		{

			if (napis[i] == 32)
			{
				napis[i] = napis[i] + 0;
			}
			else if (napis[i] != 32 && napis[i] < 84)
			{
				napis[i] = napis[i] + 7;
			}
			else if (napis[i] >= 84 || napis[i] <= 90)
			{
				napis[i] = napis[i] - 19;
			}


		}
		cout << napis << endl;


	}


	return 0;
}
