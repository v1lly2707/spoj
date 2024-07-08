#include <bits/stdc++.h>
using namespace std;
int main()
{
	string napis;
	while (cin >> napis)
	{
		for (int i = napis.size() - 1; i >= 0; i--)
		{
			cout << napis[i];
		}
		cout << endl;
	}
	return 0;
}
