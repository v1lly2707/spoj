#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x;
	cin >> x;
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;



	while (x--)
	{
		cin >> a >> b >> c >> d >> e >> f;




		int sumin;
		int M = max(max(max(max(max(a, b), c), d), e), f);
		int m = min(min(min(min(min(a, b), c), d), e), f);

		if (m == 0)
		{
			sumin = 1;
		}


		while (m > 0)
		{
			switch (m % 10)
			{
			case 0:
				sumin = sumin + 1;
				break;




			case 6:
				sumin = sumin + 1;
				break;




			case 8:
				sumin = sumin + 2;
				break;

			case 9:
				sumin = sumin + 1;
				break;


			}
			m /= 10;
		}

		cout << sumin << ' ';
		sumin = 0;


		if (M == 0)
		{
			sumin = 1;
		}

		while (M > 0)
		{
			switch (M % 10)
			{
			case 0:
				sumin = sumin + 1;
				break;



			case 6:
				sumin = sumin + 1;
				break;


			case 8:
				sumin = sumin + 2;
				break;

			case 9:
				sumin = sumin + 1;
				break;


			}
			M /= 10;
		}

		cout << sumin << endl;
		sumin = 0;
	}
	return 0;
}
