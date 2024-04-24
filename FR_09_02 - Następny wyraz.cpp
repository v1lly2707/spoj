#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    string napis;
    int o = 0;
    cin >> x;
    while (x--)
    {
        o = 0;
        cin >> napis;
        for (int i = 0; i < napis.size(); i++)
        {
            if (napis[i] == 'z')
                o++;
        }
        if (o == napis.size())
            cout << napis << 'a' << endl;
        else
        {
            napis[napis.size() - 1]++;

            for (int i = napis.size() - 1; i > 0; i--)
            {
                if (napis[i] > 'z')
                {
                    napis[i - 1]++;
                    napis[i] -= 26;
                }
            }



            cout << napis << endl;

        }
    }

    return 0;
}
