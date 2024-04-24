#include <bits/stdc++.h>
using namespace std;

int main()
{
	string napis;
	cin >> napis;
	int n;

	for (int i = 0; i < napis.size(); i += 2)
	{
		n = (napis[i] - '0') * 10 + (napis[i + 1] - '0');
		if (n < 13)
		{
			n = n * 10 + (napis[i + 2] - '0');
			i++;
		}
		cout << (char)n;




	}


	return 0;
}
