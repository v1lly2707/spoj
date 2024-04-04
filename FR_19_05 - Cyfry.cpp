#include <bits/stdc++.h>
using namespace std;

vector < char > vec;
int main()
{
	int n;
	cin >> n;
	string a;

	while (n--)
	{
		cin >> a;
		for (int i = 0; i < a.size(); i++)
		{
			if (a[i] >= '0' && a[i] <= '9')
				vec.push_back(a[i]);
		}
		if (vec.size() < 2)
			cout << "BRAK\n";
		else
			cout << vec[0] << ' ' << vec[vec.size() - 1] << '\n';;

		vec.clear();
	}

	return 0;
}
