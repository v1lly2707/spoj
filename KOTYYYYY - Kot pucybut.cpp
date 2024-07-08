#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a, b, c, d;
    int x;

    cin >> x;
    while (x--)
    {
        cin >> a >> b >> c >> d;

        if (a > c)
        {
            if (((int)abs(d - b) + 1) % 3 == 2)
                cout << 0 << endl;
            else
                cout << 1 << endl;
        }
        else
        {
            if (((int)abs(d - b) + 1) % 3 == 2)
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
    }
    return 0;
}
