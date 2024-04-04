#include <bits/stdc++.h>

using namespace std;

int a, b, x, P, W, S, tab[1000005];
int cnt = 0;
struct graf
{
    bool czyOdw;
    bool kolejka;
    int warstwa;
    vector < int > pol;

}*w;

void BFS(int k)
{
    queue < int > kolejka;
    kolejka.push(k);
    w[k].czyOdw = true;
    while (kolejka.empty() == false)
    {
        k = kolejka.front();

        kolejka.pop();
        for (int i = 0; i < w[k].pol.size(); i++)
        {
            if (!w[w[k].pol[i]].czyOdw)
            {
                w[w[k].pol[i]].warstwa = w[k].warstwa + 1;

                kolejka.push(w[k].pol[i]);
                w[w[k].pol[i]].czyOdw = true;
            }
        }
    }

}

void f()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}




int main()
{
    f();
    cin >> P >> S;
    w = new graf[P + 5];
    for (int i = 0; i <= P; i++)
    {
        w[i].pol.clear();
        w[i].czyOdw = 0;
        w[i].kolejka = 0;
    }
    while (S--)
    {
        cin >> a >> b;
        w[a].pol.push_back(b);
        w[b].pol.push_back(a);
    }
    cin >> W;
    for (int i = 1; i <= W; i++)
        cin >> tab[i];

    cin >> x;

    BFS(x);
    w[x].warstwa = 0;

    for (int i = 1; i <= W; i++)
    {
        if (w[1].warstwa <= w[tab[i]].warstwa)
            cnt++;
    }

    if (cnt == 0)
        cout << "Nie";
    else cout << cnt;

    delete[] w;

    return 0;
}
