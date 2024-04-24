#include <bits/stdc++.h>

using namespace std;

struct zaw
{
	string imie;
	string nazwisko;
	long long int czas;

};
zaw zawodnik[100005];
int main()
{
	queue < string > kolejka;
	int x;
	cin >> x;
	long long int min;
	long long int sek;
	long long int max = 10000000000000;
	char slash;
	for (int i = 0; i < x; i++)
	{

		cin >> zawodnik[i].imie >> zawodnik[i].nazwisko >> min >> slash >> sek;
		zawodnik[i].czas = min * 60 + sek;
		if (zawodnik[i].czas < max)
		{
			max = zawodnik[i].czas;

		}

	}
	for (int i = 0; i < x; i++)
	{
		if (zawodnik[i].czas == max)
		{
			cout << zawodnik[i].imie << ' ' << zawodnik[i].nazwisko << endl;
		}
	}




	return 0;
}
