#include <bits/stdc++.h>
using namespace std;


int main() {

	string napis;
	int p = 0;
	int t;
	cin >> t;
	while (t--)
	{
		cin >> napis;
		for (int i = 0, j = napis.length() - 1; i < j; i++, j--)
		{
			if (napis[i] != napis[j] && napis[j] != napis[i] - 32 && napis[j] != napis[i] + 32)
			{
				p++;
			}

		}
		cout << p << endl;
		p = 0;
	}

	return 0;
}

