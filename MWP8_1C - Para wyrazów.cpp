#include <bits/stdc++.h>

using namespace std;


bool czyPalindrom(string napis)
{
    int i, j;
    transform(napis.begin(), napis.end(), napis.begin(), ::tolower);
    for (i = 0, j = napis.length() - 1; i < j; i++, j--)
    {
        if (napis[i] != napis[j])
            break;


    }
    if (i < j)
        return false;
    else return true;
}
int main()
{
    int x, y;
    string napis1[1005], napis2[1005], pom = "";
    cin >> x;
    string a, b;
    for (int i = 1; i <= x; i++)
    {
        cin >> napis1[i];
    }
    cin >> y;
    for (int i = 1; i <= y; i++)
    {
        cin >> napis2[i];
    }

    for (int i = 1; i <= x; i++)
        for (int j = 1; j <= y; j++)
        {
            a = napis1[i] + napis2[j];
            b = napis2[j] + napis1[i];
            if (a.size() > pom.size() && czyPalindrom(a) == true)
                pom = a;

            if (b.size() > pom.size() && czyPalindrom(b) == true)
                pom = b;
        }
    if (pom != "")
        cout << pom.size() << "\n" << pom;
    else cout << 0;


    return 0;
}
