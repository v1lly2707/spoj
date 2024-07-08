#include <bits/stdc++.h>

using namespace std;

int czy(int rok)
{
    return ((rok % 4 == 0 && rok % 100 != 0) || rok % 400 == 0);
}
int f[13] = { 0,31,59,90,120,151,181,212,243,273,304,334 };
string jaki[8] = { "Poniedzialek","Wtorek","Sroda","Czwartek","Piatek","Sobota","Niedziela" };

int ktory(int dzien, int miesiac, int rok)
{
    int dzienRoku, wynik, pom1, pom2, pom3;

    dzienRoku = dzien + f[miesiac - 1];
    if (czy(rok) == 1 && miesiac > 2)
        dzienRoku++;

    pom1 = (rok - 1) % 100;
    pom2 = (rok - 1) - pom1;
    pom3 = pom1 + (pom1 / 4);
    wynik = (((((pom2 / 100) % 4) * 5) + pom3) % 7);
    wynik += dzienRoku - 1;
    wynik %= 7;
    return wynik;
}
int main()
{
    int dzien, miesiac, rok, t, dzien2 = 31, miesiac2 = 12;
    cin >> t;
    char znak;
    bool out = false;
    while (t--)
    {
        cin >> rok;
        dzien = 01;
        miesiac = 01;
        string pocz, pocz2;
        string kon, kon2;


        int x = ktory(dzien, miesiac, rok);
        pocz = jaki[x];

        int q = ktory(dzien2, miesiac2, rok);
        kon = jaki[q];

        for (int i = rok + 1; i <= 3500; i++)
        {
            int a = ktory(dzien, miesiac, i);
            pocz2 = jaki[a];

            int b = ktory(dzien2, miesiac2, i);
            kon2 = jaki[b];

            if (pocz == pocz2 && kon == kon2)
            {
                cout << i - rok << '\n';
                break;
            }
        }



    }




    return 0;
}
