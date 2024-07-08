#include <bits/stdc++.h>


using namespace std;

string wyraz;
int p;

int main()
{
    string napis;
    int x;

    cin >> x;

    for (int j = 1; j <= x; j++)
    {

        cin >> napis;
        int dlug = napis.size();
        int o = 1;
        for (int i = 0; i < dlug; i++)
        {
            if (napis[i] == napis[i + 1])
            {
                o++;
            }
            else
            {
                if (o < 2)
                {
                    cout << napis[i];
                    o = 1;
                }
                else if (o == 2)
                {
                    cout << napis[i - 1] << napis[i];
                    o = 1;
                }
                else
                {
                    cout << napis[i] << o;
                    o = 1;
                }
            }
        }
        cout << endl;


    }


    return 0;
}
