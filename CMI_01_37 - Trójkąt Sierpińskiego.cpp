#include <bits/stdc++.h>


using namespace std;
int main()
{
    long long int x, pom;

    cin >> x;
    pom = x;
    char tab[1005][1005] = {};

    tab[0][0] = 1;
    tab[1][0] = 1;
    tab[1][1] = 1;

    for (int i = 2; i <= pom; i++)
    {
        for (int j = 0; j <= x; j++)
        {
            if (i == j)
                tab[j][i] = 1;

            if (j == 0)
                tab[j][i] = 1;

            tab[i][j] = tab[i - 1][j - 1] + tab[i - 1][j];
        }
    }
    for (int i = 0; i <= pom; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (tab[i][j] % 2 == 0)
                tab[i][j] = '#';
            else
                tab[i][j] = '.';
        }
    }
    for (int i = 0; i < pom; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << tab[i][j];
        }
        if (i < pom - 1)
            cout << endl;
    }

    return 0;
}
