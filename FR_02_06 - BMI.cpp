#include <bits/stdc++.h>

using namespace std;

struct osoba
{
	string imie;
	double masa;
	double wzrost;

};


int main()
{
	int x;
	cin >> x;

	osoba os[1005];


	for (int i = 1; i <= x; i++)
	{
		cin >> os[i].imie >> os[i].masa >> os[i].wzrost;
		os[i].wzrost = os[i].wzrost / 100;
	}


	cout << "niedowaga" << endl;

	for (int i = 0; i < x + 1; i++)

	{

		double bmi = os[i].masa / pow(os[i].wzrost, 2);



		if (bmi < 18.5)
		{
			cout << os[i].imie << endl;
		}

	}
	cout << endl;
	cout << "wartosc prawidlowa" << endl;

	for (int i = 0; i < x + 1; i++)
	{

		double bmi = os[i].masa / pow(os[i].wzrost, 2);

		if (bmi >= 18.5 && bmi < 25.0)
		{
			cout << os[i].imie << endl;
		}



	}
	cout << endl;
	cout << "nadwaga" << endl;

	for (int i = 0; i < x + 1; i++)
	{

		double bmi = os[i].masa / pow(os[i].wzrost, 2);

		if (bmi >= 25.0)
		{
			cout << os[i].imie << endl;

		}



	}
	cout << endl;
	return 0;
}
