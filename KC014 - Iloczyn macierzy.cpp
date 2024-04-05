#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int x;
    int p = 0;
    int tab1[15][15] = {};
    int tab2[15][15] = {};
    while (cin >> x)
    {
        for (int i = 0; i < x; i++)
            for (int j = 0; j < x; j++)
                cin >> tab1[i][j];

        for (int i = 0; i < x; i++)
            for (int j = 0; j < x; j++)
                cin >> tab2[i][j];


        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < x; j++)
            {
                p = 0;
                for (int o = 0; o < x; o++)
                {
                    p += tab1[i][o] * tab2[o][j];
                }
                cout << p << ' ';
            }

        }
        cout << "\n";


    }
    return 0;
}
