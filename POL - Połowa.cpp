
#include<bits/stdc++.h>
using namespace std;

int main()
{

	int x;
	cin >> x;

	string napis;
	string napis2;

	for (int i = 1; i <= x; i++)
	{
		cin >> napis;



		int dlugosc = napis.length();

		napis2 = napis.substr(0, dlugosc / 2);

		cout << napis2 << endl;

	}



	return 0;
}
