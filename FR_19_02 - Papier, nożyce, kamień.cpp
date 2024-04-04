#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a;
	cin >> a;
	if (a == "nozyce")
		cout << "kamien";
	else if (a == "kamien")
		cout << "papier";
	else if (a == "papier")
		cout << "nozyce";
	else
		cout << "przegrales";
	return 0;
}
