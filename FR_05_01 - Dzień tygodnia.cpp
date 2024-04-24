#include <bits/stdc++.h>
using namespace std;

string cos(int a)
{
	if (a == 0)
		return "Pn";
	if (a == 1)
		return "Wt";
	if (a == 2)
		return "Sr";
	if (a == 3)
		return "Cz";
	if (a == 4)
		return "Pt";
	if (a == 5)
		return "So";
	if (a == 6)
		return "Nd";
}
int cos2(string b)
{
	if (b == "Pn")
		return 0;
	if (b == "Wt")
		return 1;
	if (b == "Sr")
		return 2;
	if (b == "Cz")
		return 3;
	if (b == "Pt")
		return 4;
	if (b == "So")
		return 5;
	if (b == "Nd")
		return 6;
}
int main()
{
	ios_base::sync_with_stdio;
	cin.tie(NULL);
	int x, a;
	string dz;
	cin >> x;
	while (x--)
	{
		cin >> dz >> a;

		cout << cos((cos2(dz) + a) % 7) << endl;

	}
	return 0;
}
