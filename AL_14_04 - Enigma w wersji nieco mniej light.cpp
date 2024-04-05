#include <bits/stdc++.h>
using namespace std;

void deszyfruj(string napis)
{
    char spol[105], samo[105], pom1[105], pom2[105];
    int p = 0;

    for (int i = 0; i < napis.size(); i++)
    {
        if (napis[i] != 'A' && napis[i] != 'E' && napis[i] != 'O' && napis[i] != 'U' && napis[i] != 'I' && napis[i] != 'Y' && napis[i] != ' ')
            spol[i] = napis[i];

        else
            spol[i] = '0';
    }

    for (int i = 0; i < napis.size(); i++)
    {
        if (napis[i] == 'A' || napis[i] == 'E' || napis[i] == 'O' || napis[i] == 'U' || napis[i] == 'I' || napis[i] == ' ' || napis[i] == 'Y')
        {
            samo[p] = napis[i];
            p++;
        }
    }
    if (p > 1)
    {
        p--;
        char k, l;
        for (int i = 0; i < p; i++)
        {
            k = samo[i];
            l = samo[i + 1];
            samo[i] = l;
            samo[i + 1] = k;
        }

        pom2[0] = samo[p - 1];
        pom2[1] = samo[p];
        for (int i = 2; i <= p; i++)
            pom2[i] = samo[i - 2];


        p = 0;
        for (int i = 0; i < napis.size(); i++)
        {
            if (spol[i] == '0')
            {
                pom1[i] = pom2[p];
                p++;
            }
            else
                pom1[i] = spol[i];
        }
        for (int i = 0; i < napis.size(); i++)
            cout << pom1[i];

        cout << "\n";
    }
    else
        cout << napis << "\n";
}

int main()
{
    string napis;
    while (getline(cin, napis))
    {
        if (napis.size() >= 3)
            deszyfruj(napis);
        else if (napis.size() == 1)
            cout << napis << "\n";
        else if (napis.size() == 2)
        {
            int o = 0;
            if (napis[0] == 'A' || napis[0] == 'E' || napis[0] == 'O' || napis[0] == 'U' || napis[0] == 'I' || napis[0] == ' ' || napis[0] == 'Y')
            {
                if (napis[1] == 'A' || napis[1] == 'E' || napis[1] == 'O' || napis[1] == 'U' || napis[1] == 'I' || napis[1] == ' ' || napis[1] == 'Y')
                    cout << napis[1] << napis[0] << "\n";
                else
                    cout << napis[0] << napis[1] << "\n";
                o++;
            }
            else if ((napis[1] == 'A' || napis[1] == 'E' || napis[1] == 'O' || napis[1] == 'U' || napis[1] == 'I' || napis[1] == ' ' || napis[1] == 'Y') && o == 0)
            {
                if (napis[0] == 'A' || napis[0] == 'E' || napis[0] == 'O' || napis[0] == 'U' || napis[0] == 'I' || napis[0] == ' ' || napis[0] == 'Y')
                    cout << napis[1] << napis[0] << "\n";
                else
                    cout << napis[0] << napis[1] << "\n";
            }
            else if (napis[0] != 'A' && napis[0] != 'E' && napis[0] != 'O' && napis[0] != 'U' && napis[0] != 'I' && napis[0] != 'Y' && napis[0] != ' ')
            {
                if (napis[1] != 'A' && napis[1] != 'E' && napis[1] != 'O' && napis[1] != 'U' && napis[1] != 'I' && napis[1] != 'Y' && napis[1] != ' ')
                    cout << napis[0] << napis[1] << "\n";
            }

        }
    }
    return 0;
}
