#include <bits/stdc++.h>

using namespace std;
unsigned long long nwd(unsigned long long a, unsigned long long  b)
{
	unsigned long long x;
	while (b != 0)
	{
		x = b;
		b = a % b;
		a = x;

	}
	return a;

}
unsigned long long nww(unsigned long long a, unsigned long long b)
{
	return a / nwd(a, b) * b;
}

int main()
{
	char znak;
	unsigned long long li1;
	unsigned long long li2;
	unsigned long long li3;
	unsigned long long mi1;
	unsigned long long mi2;
	unsigned long long mi3;
	unsigned long long x;


	cin >> li1;
	cin >> znak;
	cin >> mi1;

	cin >> li2;
	cin >> znak;
	cin >> mi2;

	mi3 = nww(mi1, mi2);
	x = li3 = mi3 / mi1 * li1 + mi3 / mi2 * li2;
	li3 /= nwd(x, mi3);
	mi3 /= nwd(x, mi3);
	cout << li1 << "/" << mi1 << " + " << li2 << "/" << mi2 << " = " << li3 << znak << mi3;




	return 0;
}
