#include <bits/stdc++.h>
using namespace std;


int main()
{
	double m16;
	double k16;
	double m36;
	double k36;

	int a;
	int b;
	int c;
	int d;

	cin >> m16;
	cin >> k16;
	cin >> m36;
	cin >> k36;

	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	double k16k36 = ((k16 * b) + (k36 * d)) / (b + d);
	double m16m36 = ((m16 * a) + (m36 * c)) / (a + c);
	double m16k16m36k36 = ((m16 * a) + (k16 * b) + (m36 * c) + (k36 * d)) / (a + b + c + d);


	cout << "K16K36" << ':' << ' ';
	cout << fixed << setprecision(2) << k16k36 << endl;
	cout << "M16M36" << ':' << ' ';
	cout << fixed << setprecision(2) << m16m36 << endl;
	cout << "M16K16M36K36" << ':' << ' ';
	cout << fixed << setprecision(2) << m16k16m36k36 << endl;


	return 0;
}
