#include <bits/stdc++.h>

using namespace std;

int main()
{
    string napis;
    cin >> napis;
    int tab[26] = {};
    int o = 0;
    int p = 0;
    for (int i = 0; i < napis.size(); i++)
    {
        tab[napis[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (tab[i] == 0)
        {
            o++;
        }
    }


    int pom = tab[0];
    for (int i = 0; i < 26; i++)
    {
        if (tab[i] == pom)
        {
            p++;
        }
    }
    if (o == 0 && p == 26)
    {
        cout << "PANGRAM PERFEKCYJNY";
    }

    else if (o == 0 && p != 26)
    {
        cout << "PANGRAM";
    }

    else
        cout << "NIE";

    return 0;
}
