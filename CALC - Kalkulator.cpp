#include <bits/stdc++.h>

using namespace std;


int main()
{
	char znak;
	int a;
	int b;

	while (cin >> znak)
	{
		cin >> a >> b;


		switch (znak)
		{
		case '+':
			cout << a + b << endl;
			break;

		case '*':
			cout << a * b << endl;
			break;

		case '/':
			cout << a / b << endl;
			break;

		case '%':
			cout << a % b << endl;
			break;

		case'-':
			cout << a - b << endl;
		}

	}




	return 0;
}
