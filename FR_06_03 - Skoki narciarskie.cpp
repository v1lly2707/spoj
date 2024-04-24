#include <bits/stdc++.h>

using namespace std;

struct zawodnik
{
    string imie, nazwisko;
    double pkt;
    double d, p, a;
    double nota[5];

    bool operator < (const zawodnik& x)const
    {
        if (pkt == x.pkt)
        {
            return nazwisko < x.nazwisko;
        }
        return pkt > x.pkt;
    }
}; zawodnik tab[1005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t, k, s, n;
    double w, b;
    double max = 0;
    double min = 20;
    cin >> t;
    while (t--)
    {
        cin >> w >> b >> k >> s >> n;
        for (int i = 0; i < n; i++)
        {
            tab[i].pkt = 60;
            cin >> tab[i].imie >> tab[i].nazwisko >> tab[i].d >> tab[i].p >> tab[i].a;
            for (int j = 0; j < 5; j++)
            {
                cin >> tab[i].nota[j];

            }
            sort(tab[i].nota, tab[i].nota + 5);
            for (int j = 1; j <= 3; j++)
                tab[i].pkt += tab[i].nota[j];
            if (tab[i].d > k)
            {
                if (k >= 60 && k <= 100)
                    tab[i].pkt += abs((tab[i].d - k)) * 2.0;
                else if (k > 100 && k <= 160)
                    tab[i].pkt += abs((tab[i].d - k)) * 1.8;
                else
                    tab[i].pkt += abs((tab[i].d - k)) * 1.2;
            }
            else
            {
                if (k >= 60 && k <= 100)
                    tab[i].pkt -= abs((tab[i].d - k)) * 2.0;
                else if (k > 100 && k <= 160)
                    tab[i].pkt -= abs((tab[i].d - k)) * 1.8;
                else
                    tab[i].pkt -= abs((tab[i].d - k)) * 1.2;
            }



            if (tab[i].p > 0)
            {
                tab[i].pkt += abs(tab[i].p) * w;
            }
            else if (tab[i].p < 0)
            {
                tab[i].pkt -= abs(tab[i].p) * w;
            }
            if (tab[i].a > s)
            {
                tab[i].pkt -= abs(s - tab[i].a) * b;
            }
            else if (tab[i].a < s)
            {
                tab[i].pkt += abs(s - tab[i].a) * b;
            }
        }
        sort(tab, tab + n);

        for (int i = 0; i < n; i++)
            cout << tab[i].imie << " " << tab[i].nazwisko << " " << fixed << setprecision(1) << tab[i].pkt << "\n";
    }
    return 0;
}
