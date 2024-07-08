#include <bits/stdc++.h>

using namespace std;

int tab[256];

void f(string napis)
{
    for (int i = 0; i < napis.length(); i++)
    {
        if (napis[i] != ' ')
        {
            tab[int(napis[i])]++;
        }
    }
}

int main()
{
    int x;
    cin >> x;
    cin.ignore();
    while (x--)
    {
        string napis;
        getline(cin, napis);
        f(napis);
    }
    for (int i = 97; i <= 122; i++)
    {
        if (tab[i] != 0)
        {
            cout << char(i) << " " << tab[i] << endl;
        }
    }
    for (int i = 65; i <= 90; i++)
    {
        if (tab[i] != 0)
        {
            cout << char(i) << " " << tab[i] << endl;
        }
    }
    return 0;
}
