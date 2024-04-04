#include <bits/stdc++.h>
using namespace std;
int main()
{
	string napis;
	while (getline(cin, napis))
	{
		for (int i = 0; i < napis.size(); i++)
		{
			if (napis[i] == ' ')
				cout << ' ';
			else if (napis[i] == 'Q')
				cout << 'A';
			else if (napis[i] == 'W')
				cout << 'B';
			else if (napis[i] == 'E')
				cout << 'C';
			else if (napis[i] == 'R')
				cout << 'D';
			else if (napis[i] == 'T')
				cout << 'E';
			else if (napis[i] == 'Y')
				cout << 'F';
			else if (napis[i] == 'U')
				cout << 'G';
			else if (napis[i] == 'I')
				cout << 'H';
			else if (napis[i] == 'O')
				cout << 'I';
			else if (napis[i] == 'P')
				cout << 'J';
			else if (napis[i] == 'A')
				cout << 'K';
			else if (napis[i] == 'S')
				cout << 'L';
			else if (napis[i] == 'D')
				cout << 'M';
			else if (napis[i] == 'F')
				cout << 'N';
			else if (napis[i] == 'G')
				cout << 'O';
			else if (napis[i] == 'H')
				cout << 'P';
			else if (napis[i] == 'J')
				cout << 'Q';
			else if (napis[i] == 'K')
				cout << 'R';
			else if (napis[i] == 'L')
				cout << 'S';
			else if (napis[i] == 'Z')
				cout << 'T';
			else if (napis[i] == 'X')
				cout << 'U';
			else if (napis[i] == 'C')
				cout << 'V';
			else if (napis[i] == 'V')
				cout << 'W';
			else if (napis[i] == 'B')
				cout << 'X';
			else if (napis[i] == 'N')
				cout << 'Y';
			else if (napis[i] == 'M')
				cout << 'Z';
		}
		cout << endl;
	}
	return 0;
}
