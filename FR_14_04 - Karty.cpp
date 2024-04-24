#include <bits/stdc++.h>
using namespace std;

int main()
{
	string jasio, stasio;
	int jcnt, scnt;
	jcnt = scnt = 0;
	cin >> jasio >> stasio;
	for (int i = 0; i < jasio.size(); i++)
	{
		if (jasio[i] == 'T')
			jcnt += 10;
		else if (jasio[i] == 'J')
			jcnt += 11;
		else if (jasio[i] == 'Q')
			jcnt += 12;
		else if (jasio[i] == 'K')
			jcnt += 13;
		else if (jasio[i] == 'A')
			jcnt += 14;
		else jcnt += jasio[i] - 48;

	}
	for (int i = 0; i < stasio.size(); i++)
	{
		if (stasio[i] == 'T')
			scnt += 10;
		else if (stasio[i] == 'J')
			scnt += 11;
		else if (stasio[i] == 'Q')
			scnt += 12;
		else if (stasio[i] == 'K')
			scnt += 13;
		else if (stasio[i] == 'A')
			scnt += 14;
		else scnt += stasio[i] - 48;

	}
	if (jcnt > scnt) cout << "JASIO";
	else if (jcnt < scnt) cout << "STASIO";
	else cout << "REMIS";

	return 0;
}
