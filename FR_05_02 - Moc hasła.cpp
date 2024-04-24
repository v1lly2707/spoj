#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x;
	cin >> x;
	int duze = 0;
	int male = 0;
	int inne = 0;
	int cyfry = 0;
	string haslo;
	int dlug = 0;
	for (int j = 0; j < x + 1; j++)
	{
		getline(cin, haslo);

		for (int i = 0; i < haslo.length(); i++)
		{
			if (haslo[i] >= 65 && haslo[i] <= 90)
			{
				duze = 1;
			}
			else if (haslo[i] >= 97 && haslo[i] <= 122)
			{
				male = 1;
			}
			else if (haslo[i] >= 48 && haslo[i] <= 57)
			{
				cyfry = 1;
			}
			else
			{
				inne = 1;
			}
			dlug = haslo.length();

		}
		if (duze == 1 && male == 1 && cyfry == 1 && inne == 1 && dlug >= 8)
		{
			cout << haslo << endl;
			dlug = 0;
			inne = 0;
			duze = 0;
			male = 0;
			cyfry = 0;
		}
		else
		{
			dlug = 0;
			inne = 0;
			duze = 0;
			male = 0;
			cyfry = 0;
		}
	}


	return 0;
}
