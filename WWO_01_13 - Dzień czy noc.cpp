#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x, y, x1, y1, x2, y2;
	char o, o1, o2;
	cin >> x >> o >> y;
	cin >> x1 >> o1 >> y1;
	cin >> x2 >> o2 >> y2;
	if (x2 == x && y2 == y)
	{
		cout << "dzien";
	}
	else if (x2 == x1 && y2 == y1)
	{
		cout << "noc";
	}
	else if (x2 > x && y2 >= y && x2 <= x1 && y2 < y1)

	{
		cout << "dzien";
	}
	else if (x2 > x && y2 <= y && x2 <= x1 && y2 < y1)
	{
		cout << "dzien";
	}
	else if (x2 < x && y2 < y)

	{
		cout << "noc";
	}
	else if (x2 < x && y2 >= y)

	{
		cout << "noc";
	}
	else if (x2 > x && x2 > x)
	{
		cout << "noc";
	}







	return 0;
}
