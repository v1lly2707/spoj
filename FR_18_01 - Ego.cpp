#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, a;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a;
        if ((a >= 1 && a <= 7) || (a >= 43 && a <= 49))
            cout << "DAWID\n";
        else if ((a >= 8 && a <= 14) || (a >= 50 && a <= 56))
            cout << "GRZESIEK\n";
        else if ((a >= 15 && a <= 21) || (a >= 57 && a <= 63))
            cout << "MACIEK\n";
        else if ((a >= 22 && a <= 28) || (a >= 64 && a <= 70))
            cout << "MARCIN\n";
        else if (a >= 29 && a <= 35)
            cout << "MARIUSZ\n";
        else if (a >= 36 && a <= 42)
            cout << "RAFAL\n";

    }




    return 0;
}
