#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, a, b, pom1, pom2;
    int o = 0;
    int tab[10005];
    cin >> x;
    pom1 = x;
    for (int i = 0; i < x; i++)
    {
        cin >> a;
        tab[a]++;
    }
    cin >> y;
    pom2 = y;
    for (int i = 0; i < y; i++)
    {
        cin >> b;
        tab[b]++;
    }
    for (int i = 0; i < 1005; i++)
    {
        if (tab[i] > 0)
            cout << i << ' ';
    }
    cout << "\n";
    for (int i = 0; i < 1005; i++)
    {
        if (tab[i] == 2)
        {
            cout << i << ' ';
            o++;
        }

    }
    if (o == 0)
        cout << "NULL\n";

    return 0;
}
