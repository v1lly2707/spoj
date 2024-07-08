#include <bits/stdc++.h>

using namespace std;
int NWD(int a, int b)
{
	int pom;
	b = 1260;

	while (b != 0)
	{
		pom = b;
		b = a % b;
		a = pom;
	}

	return a;
}

struct Srt
{
	int a;
	int NWD1;


	bool operator < (const Srt& x)const
	{
		if (NWD1 == x.NWD1)
		{
			return a < x.a;
		}
		return NWD1 > x.NWD1;
	}
};
Srt Euklides[1000000];

int main()
{
	int x;
	int b = 1260;


	cin >> x;
	for (int i = 0; i < x; i++)
	{
		cin >> Euklides[i].a;
		Euklides[i].NWD1 = NWD(Euklides[i].a, b);

	}

	sort(Euklides, Euklides + x);
	for (int i = 0; i < x; i++)
	{
		cout << Euklides[i].a << ' ';
	}
	return 0;
}
