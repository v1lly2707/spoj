#include <bits/stdc++.h>

using namespace std;

void f(int a)
{
	if (a == 0)
		return;
	int zamiana = a % 11;
	a /= 11;
	f(a);
	if (zamiana < 10)
		cout << zamiana;
	else
	{
		char znak = zamiana + 55;
		cout << znak;
	}

}
void k(int a)
{
	if (a == 0)
		return;
	int zamiana2 = a % 16;
	a /= 16;
	k(a);
	if (zamiana2 < 10)
		cout << zamiana2;
	else
	{
		char znak2 = zamiana2 + 55;
		cout << znak2;

	}

}
int main()
{
	int x;
	cin >> x;
	int a;
	for (int i = 1; i <= x; i++)
	{
		cin >> a;
		k(a);
		cout << ' ';
		f(a);
		cout << endl;
	}




	return 0;
}
