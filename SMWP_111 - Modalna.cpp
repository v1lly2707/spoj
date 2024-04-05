#include <bits/stdc++.h>

using namespace std;

int main()
{

    map < string, int > mapa;
    long long int x;
    cin >> x;
    string a;
    string pom1;
    long long int m = 0;
    while (x--)
    {
        cin >> a;
        mapa[a]++;
    }
    map < string, int > ::iterator pom2 = mapa.begin();
    for (int i = 0; i < mapa.size(); i++, pom2++)
    {
        if (pom2->second > m)
        {
            pom1 = pom2->first;
            m = pom2->second;
        }
        else if (m == pom2->second)
        {
            pom1 = "BRAK";
        }
    }
    cout << pom1 << endl;
    return 0;
}
