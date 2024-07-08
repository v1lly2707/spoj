#include <bits/stdc++.h>
using namespace std;



int main() {

	int tab[100000] = {};
	int x;

	int a;
	int b;
	char znak;
	int y;
	int p;
	int t;



	while (cin >> znak)
	{

		if (znak == 'z')
		{
			cin >> t;
			cin >> b;
			tab[t] = tab[t] + b;

		}
		else if (znak == '+')
		{
			cin >> x >> y;

			cout << tab[x] + tab[y] << endl;
		}
		else if (znak == '-')
		{
			cin >> x >> y;
			cout << tab[x] - tab[y] << endl;
		}
		else if (znak == '*')
		{
			cin >> x >> y;
			cout << tab[x] * tab[y] << endl;
		}
		else if (znak == '/')
		{
			cin >> x >> y;
			cout << tab[x] / tab[y] << endl;
		}
		else if (znak == '%')
		{
			cin >> x >> y;
			cout << tab[x] % tab[y] << endl;
		}



	}



	return 0;
}
