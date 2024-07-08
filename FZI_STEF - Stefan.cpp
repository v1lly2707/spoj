#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int x, a;
    long long int o = 0;
    long long int max = 0;
    cin >> x;
    while (x--)
    {
        cin >> a;
        o += a;
        if (o > max)
            max = o;
        else if (o < 0)
            o = 0;
    }

    cout << max << endl;

    return 0;

}
