#include <bits/stdc++.h>
using namespace std;
int main()
{

	string a;
	string b;
	int x;
	cin >> x;
	int j = 0;

	while (x--)
	{
		cin >> a >> b;

		for (int i = 0; i < a.length(); i++)
		{
			if (a[i] == b[j])
			{
				j++;
			}
			if (j == b.length())
				break;

		}
		if (j == b.length())
			cout << "Tak" << endl;
		else
			cout << "Nie" << endl;
		j = 0;



	}
	return 0;
}
