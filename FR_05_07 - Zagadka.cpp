#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    int tab[10005];
    cin >> x;
    int m;
    int o, a;
    while (x--)
    {
        cin >> a;
        for (int i = 0; i < a; i++)
        {
            cin >> tab[i];
        }
        m = tab[0];
        for (int i = 0; i < m; i++)
        {

            for (int j = 0; j < a; j++)
            {
                if (tab[j] > i)
                {
                    o++;
                }
            }
            cout << o << ' ';
            o = 0;

        }
    }

    return 0;
}
