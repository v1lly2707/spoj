#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a, out = "";
	getline(cin, a);
	int sum = 0;
	int o = 0;
	a += '.';
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] >= 48 && a[i] <= 57)
		{
			out += a[i];
		}
		else
		{
			if (out != "")
			{
				for (int j = out.size() - 1; j >= 0; j--)
				{
					sum += ((int)out[j] - 48) * pow(10, o);
					o++;
				}
			}
			o = 0;
			out = "";
		}
	}
	cout << sum;
	return 0;
}
