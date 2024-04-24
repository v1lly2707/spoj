#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, a;
    cin >> x;
    int tab[1005];
    int pom[1005];
    double o = 0;;
    for (int i = 0; i < x; i++)
    {
        cin >> a;

        cin >> tab[0] >> pom[0];

        for (int j = 1; j < a; j++)
        {
            cin >> tab[j] >> pom[j];
            o += sqrt((tab[j] - tab[j - 1]) * (tab[j] - tab[j - 1]) + (pom[j] - pom[j - 1]) * (pom[j] - pom[j - 1]));
        }

        o /= 1000;
        cout << fixed << setprecision(2) << o << endl;
        o = 0;
    }
    return 0;
}
