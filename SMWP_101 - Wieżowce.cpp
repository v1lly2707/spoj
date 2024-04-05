#include <bits/stdc++.h>

using namespace std;

map < pair < int, int >, int > skyscrapers;

pair < int, int > out;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int xc, yc, r;
    cin >> xc >> yc >> r;

    int t, x, y;
    cin >> t;

    int M = 0; // maximum

    while (t--)
    {
        cin >> x >> y;
        if (sqrt(pow((xc - x), 2) + pow((yc - y), 2)) <= r)
            skyscrapers[{x, y}]++;
    }

    for (auto it = skyscrapers.begin(); it != skyscrapers.end(); ++it) {

        pair <int, int > key = it->first;
        int value = it->second;

        if (value > M)
        {
            M = value;
            out.first = key.first;
            out.second = key.second;
        }
        else if (value == M)
        {
            double dist1 = sqrt(pow((xc - out.first), 2) + pow((yc - out.second), 2));
            double dist2 = sqrt(pow((xc - key.first), 2) + pow((yc - key.second), 2));

            if (dist2 < dist1)
            {
                M = value;
                out.first = key.first;
                out.second = key.second;
            }
        }

    }

    cout << out.first << ' ' << out.second << ' ' << M;
    return 0;
}
