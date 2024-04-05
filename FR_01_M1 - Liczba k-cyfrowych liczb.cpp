#include <bits/stdc++.h>


using namespace std;

int main()
{
    int x;
    cin >> x;
    unsigned long long int a, b;
    unsigned long long int o = 1;
    while (x--)
    {

        cin >> a >> b;
        if (a == 1)
        {
            cout << b << endl;
        }
        else
        {
            for (int j = 1; j < a; j++)
            {
                o *= b;
            }
            cout << o * (b - 1) << endl;
        }
        o = 1;

    }
    return 0;
}
