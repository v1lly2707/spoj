#include <bits/stdc++.h>

using namespace std;

int main()
{
    double x, v1, v2, srednia;

    cin >> x;

    while (x--)
    {
        cin >> v1 >> v2;
        srednia = (2 * v1 * v2) / (v1 + v2);
        cout << srednia << endl;
    }
    return 0;
}
