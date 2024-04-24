#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x;
	cin >> x;
	string napis;
	int max;
	int min;

	for (int i = 1; i <= x; i++)
	{
		cin >> napis;
		max = min = napis[0];
		for (int j = 0; j < napis.size(); j++)
		{

			if (napis[j] > max)
			{
				max = napis[j];
			}
			if (napis[j] < min)
			{
				min = napis[j];
			}
		}
		cout << max - min << endl;
		max = 0;
		min = 0;

	}
}
