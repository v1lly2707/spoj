#include <bits/stdc++.h>

using namespace std;
queue < string > kolejka;
int main()
{
	int x;
	int y;
	cin >> x >> y;
	for (int i = x; i <= y; i++)
	{
		if (i % 6 == 0)
		{
			kolejka.push("ab");

		}
		else if (i % 2 == 0 && i % 3 != 0)
		{
			kolejka.push("a");
		}
		else if (i % 2 != 0 && i % 3 == 0)
		{
			kolejka.push("b");
		}
	}
	while (kolejka.empty() == false)
	{
		cout << kolejka.front();
		kolejka.pop();
	}
	return 0;
}
