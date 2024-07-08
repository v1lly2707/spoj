#include <bits/stdc++.h>

using namespace std;

struct punkt
{
	string nazwa;

	int x;
	int y;
	double odl;


	bool operator < (const punkt& x)const
	{
		return odl < x.odl;
	}
};
int main()
{
	punkt punkty[10000];
	int a;
	int b;
	cin >> a;
	for (int i = 1; i <= a; i++)
	{
		cin >> b;
		for (int j = 0; j < b; j++)
		{
			cin >> punkty[j].nazwa;
			cin >> punkty[j].x;
			cin >> punkty[j].y;
			punkty[j].odl = sqrt(pow(punkty[j].x, 2) + pow(punkty[j].y, 2));



		}



		sort(punkty, punkty + b);

		for (int j = 0; j < b; j++)
		{
			cout << punkty[j].nazwa << ' ' << punkty[j].x << ' ' << punkty[j].y << endl;
		}


	}



	return 0;
}
