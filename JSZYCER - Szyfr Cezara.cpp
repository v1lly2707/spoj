#include <bits/stdc++.h>

using namespace std;


int main()
{

	int a;

	string napis;

	int dlug = napis.length();

	while (getline(cin, napis))
	{


		for (int i = 0; i <= napis.length(); i++)
		{
			if (napis[i] >= 65 && napis[i] <= 90 - 3) napis[i] = int(napis[i]) + 3;
			else if (napis[i] >= 91 - 3 && napis[i] <= 90) napis[i] = int(napis[i]) - 26 + 3;
		}


		cout << napis << endl;

	}


	return 0;
}
