#include <bits/stdc++.h>


using namespace std;

int main()
{

	int a;
	int b;
	int r;
	int data;

	int x;
	int y;


	cin >> a >> b >> r;
	cin >> data;

	for (int i = 1; i <= data; i++)
	{
		cin >> x >> y;

		if (pow((x - a), 2) + pow((y - b), 2) == pow(r, 2))
		{
			cout << "E" << endl;
		}
		else if (pow((x - a), 2) + pow((y - b), 2) > pow(r, 2))
		{
			cout << "O" << endl;
		}
		else if (pow((x - a), 2) + pow((y - b), 2) < pow(r, 2))
		{
			cout << "I" << endl;
		}

	}







	return 0;
}
