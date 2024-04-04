#include <bits/stdc++.h>

using namespace std;

int tab[100000005];
int pom[100000005];
int t[100000005];
int a;
void f()
{
    for (int i = 1; i <= 1000005; i++)
    {
        pom[i] = 0;
        t[i] = 0;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    int x;
    cin >> x;
    int o = 0;
    while (x--)
    {
        cin >> a;
        for (int i = 1; i <= a; i++)
        {
            cin >> tab[i];
            t[tab[i]]++;

        }
        for (int i = 1; i <= a; i++)
        {
            if (pom[tab[i]] == 0)
            {
                pom[tab[i]]++;
            }
            else
            {
                for (int j = 1; j < 10000005; j++)
                {
                    if (t[j] == 0)
                    {
                        tab[i] = j;
                        pom[j]++;
                        t[j]++;
                        o++;
                        break;

                    }
                }
            }
        }
        if (o == 0)
        {
            cout << "OK\n";
            o = 0;
            f();
        }

        else
        {
            for (int i = 1; i <= a; i++)
            {
                cout << tab[i] << ' ';
            }
            cout << "\n";
            o = 0;
            f();
        }


    }

    return 0;
}
