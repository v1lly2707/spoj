#include <bits/stdc++.h>

using namespace std;

struct budynki
{
    int x, y, nr, liczbaM;
};
budynki tab[55] = {};

struct naloty
{
    int x, y, r;
};
naloty pom[55] = {};

int main()
{
    int p, n;
    string elo = "";
    cin >> p;
    int o = 0;
    int a[1005][1005] = {};
    vector < int > vec;
    for (int i = 0; i < p; i++)
    {
        cin >> tab[i].x >> tab[i].y >> tab[i].nr >> tab[i].liczbaM;
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> pom[i].x >> pom[i].y >> pom[i].r;

        for (int j = 0; j < p; j++)
        {
            double w = sqrt(pow(tab[j].x - pom[i].x, 2) + pow(tab[j].y - pom[i].y, 2));

            if (w <= pom[i].r && a[tab[j].x][tab[j].y] == 0)
            {
                vec.push_back(tab[j].nr);


                o += tab[j].liczbaM;
                a[tab[j].x][tab[j].y] = 1;
            }
        }
        if (vec.size() > 0)
        {
            for (int i = 0; i < vec.size(); i++)
                cout << vec[i] << ' ';

            cout << "\n";
            cout << o << "\n";
        }
        else cout << "NULL\n";

        vec.clear();
        o = 0;
    }
    return 0;
}
