#include <bits/stdc++.h>

using namespace std;


int main()
{


	long double a, b, c;



	while (cin >> a >> b >> c)
	{




		if (pow(a, 2) + pow(b, 2) == pow(c, 2) && c > a && c > b && a + b > c && b + c > a && a + c > b)
		{
			cout << "prostokatny" << endl;
		}
		else if (pow(b, 2) + pow(c, 2) == pow(a, 2) && a > b && a > c && a + b > c && b + c > a && a + c > b)
		{
			cout << "prostokatny" << endl;
		}
		else if (pow(a, 2) + pow(c, 2) == pow(b, 2) && b > a && b > c && a + b > c && b + c > a && a + c > b)
		{
			cout << "prostokatny" << endl;
		}
		else if (pow(a, 2) + pow(b, 2) < pow(c, 2) && c > a && c > b && a + b > c && b + c > a && a + c > b)
		{
			cout << "rozwartokatny" << endl;
		}
		else if (pow(a, 2) + pow(c, 2) < pow(b, 2) && b > a && b > c && a + b > c && b + c > a && a + c > b)
		{
			cout << "rozwartokatny" << endl;
		}
		else if (pow(b, 2) + pow(c, 2) < pow(a, 2) && a > b && a > c && a + b > c && b + c > a && a + c > b)
		{
			cout << "rozwartokatny" << endl;
		}

		else if (pow(a, 2) + pow(b, 2) > pow(c, 2) && c >= a && c >= b && a + b > c && b + c > a && a + c > b)
		{
			cout << "ostrokatny" << endl;
		}
		else if (pow(a, 2) + pow(c, 2) > pow(b, 2) && b >= a && b >= c && a + b > c && b + c > a && a + c > b)
		{
			cout << "ostrokatny" << endl;
		}
		else if (pow(b, 2) + pow(c, 2) > pow(a, 2) && a >= b && a >= c && a + b > c && b + c > a && a + c > b)
		{
			cout << "ostrokatny" << endl;
		}
		else if (a + b <= c || b + c <= a || c + a <= b || a <= 0 || b <= 0 || c <= 0)
		{
			cout << "brak" << endl;
		}

	}


	return 0;
}
