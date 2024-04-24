#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a;
	cin >> a;
	if (a.size() % 2 == 0)
	{
		for (int i = a.size() - 1; i > 0; i -= 2)
			cout << a[i];
		for (int i = 0; i < a.size(); i += 2)
			cout << a[i];
	}
	else
	{
		for (int i = a.size() - 1; i >= 0; i -= 2)
			cout << a[i];
		for (int i = 1; i < a.size(); i += 2)
			cout << a[i];
	}



	return 0;
}
