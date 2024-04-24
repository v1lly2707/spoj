#include <bits/stdc++.h>
using namespace std;

int main()
{
	string napis;
	cin >> napis;
	int o = 0;
	for (int i = 0; i < napis.size(); i++)
	{
		if (napis[i] == 'k')
		{
			for (; i < napis.size(); i++)
			{
				if (napis[i] == 'o')
				{
					for (; i < napis.size(); i++)
					{
						if (napis[i] == 't')
						{
							o++;
							break;
						}



					}
					break;
				}
			}
		}
	}
	if (o > 0)
		cout << o;
	else
		cout << "NIE";
	return 0;
}
