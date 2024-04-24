#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int wynik = 2 * b - a;
	if (wynik >= 15 && wynik <= 30)
		cout << wynik;
	else cout << "NIE DA SIE";
	return 0;
}
