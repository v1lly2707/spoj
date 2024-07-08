#include <bits/stdc++.h>

using namespace std;



int main()
{

    long double tab[100000];
    double srednia, roznica, suma, naj = 0;
    int x;
    int y;
    naj = 100;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        cin >> tab[i];
        suma += tab[i];
    }
    srednia = suma / x;
    for (int j = 0; j < x; j++)
    {
        roznica = srednia - tab[j];
        if (roznica < 0)
        {
            roznica = -(roznica);
        }

        if (roznica < naj)
        {
            naj = roznica;
            y = tab[j];
        }
    }

    cout << y << endl;



    return 0;
}
