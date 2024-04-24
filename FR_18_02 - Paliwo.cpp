#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n, b;
    cin >> n >> b;
    double vat = (b - n) / 2;
    double p = n + vat;
    cout << fixed << setprecision(2) << vat << ' ' << p;





    return 0;
}
