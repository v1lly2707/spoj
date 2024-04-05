#include <bits/stdc++.h>
using namespace std;

int x = 3;
double tab[3] = {};
double pom[3] = {};
void czyszczenie()
{
    for (int i = 0; i < x; i++)
    {
        tab[i] = 0;
        pom[i] = 0;
    }
}

int main()
{
    int o = 0;
    cin.tie();
    cout.tie();
    int t;
    cin >> t;
    int x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6;
    double bok1, bok2, bok3, bok4, bok5, bok6;

    while (t--)
    {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        cin >> x4 >> y4 >> x5 >> y5 >> x6 >> y6;

        bok1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
        bok2 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
        bok3 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));

        tab[0] = bok1;
        tab[1] = bok2;
        tab[2] = bok3;

        bok4 = sqrt(pow(x4 - x5, 2) + pow(y4 - y5, 2));
        bok5 = sqrt(pow(x4 - x6, 2) + pow(y4 - y6, 2));
        bok6 = sqrt(pow(x5 - x6, 2) + pow(y5 - y6, 2));

        pom[0] = bok4;
        pom[1] = bok5;
        pom[2] = bok6;

        sort(tab, tab + 3);
        sort(pom, pom + 3);

        for (int i = 0; i < 3; i++)
        {
            if (tab[i] == pom[i])
                o++;
        }
        if (o == 3)
            cout << "TAK\n";
        else cout << "NIE\n";

        czyszczenie();
        o = 0;

    }




    return 0;
}
