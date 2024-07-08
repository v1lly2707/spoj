#include <bits/stdc++.h>
using namespace std;
int main()
{
	string napis;
	cin >> napis;
	int p0, p1;
	int o = 0;
	for (int i = 0; i < napis.size(); i++)
	{
		if (napis[i] == '0')
		{
			p0 = i;
			break;
		}
	}
	for (int i = 0; i < napis.size(); i++)
	{
		if (napis[i] == '1')
		{
			p1 = i;
		}
	}
	for (int i = p0 + 1; i < p1; i++)
	{
		o++;
	}
	if (o == 0)
		cout << "PUSTY";
	else
	{
		for (int i = p0 + 1; i < p1; i++)
		{
			cout << napis[i];
		}
	}


	return 0;
}
