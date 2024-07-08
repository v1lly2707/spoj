#include <bits/stdc++.h>

using namespace std;


int main()
{
	stack < long long > stos;



	int p;

	cin >> p;

	int a;
	int b;
	char znak;
	int x;
	int y;

	for (int i = 1; i <= p; i++)
	{
		cin >> a;


		if (a == 1)
		{
			cin >> b;
			stos.push(b);

		}
		else if (a == 0)
		{
			cin >> znak;
			x = stos.top();
			stos.pop();


			y = stos.top();
			stos.pop();


			if (znak == '+')
			{
				stos.push(y + x);
			}
			else if (znak == '*')
			{
				stos.push(y * x);
			}
			else if (znak == '-')
			{
				stos.push(y - x);

			}
			else if (znak == '/')
			{
				stos.push(y / x);
			}
		}


	}

	cout << stos.top() << endl;
	stos.pop();
	cout << "ONP" << endl;


	return 0;
}
