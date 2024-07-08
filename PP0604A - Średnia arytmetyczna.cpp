#include <bits/stdc++.h>

using namespace std;



int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long double tab[1005];
        double srednia = 0, roznica = 0, suma = 0, naj = 0;
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
    }




    return 0;
}
