#include <bits/stdc++.h>

using namespace std;
int main()
{
	long long int x;
	cin >> x;
	long long int o = 0;
	long long int j = 1;
	long long int a;
	for (int i = 1; i <= x; i++)
	{
		cin >> a;
		long double d = log(a);
		long double e = log(3);
		long double f = d / e;
		if (ceil(f) == floor(f) & a != 0)
		{
			cout << '1' << endl;
		}
		else if (a == 0)
		{
			cout << '0' << endl;
		}
		else
		{
			while (j <= a)
			{
				j *= 3;
			}
			if (j > a)
			{
				j /= 3;
			}

			while (j > 0)
			{
				if (a - j >= 0)
				{
					a -= j;
					o++;
					j /= 3;
				}
				else
				{
					j /= 3;


				}
			}






			cout << o << endl;
		}



		o = 0;
		j = 1;
	}


	return 0;
}
