#include <bits/stdc++.h>

using namespace std;

void nt(long long a)
{
    if (a > 0)
    {
        nt(a / 2);
        cout << a % 2;
    }
}
long long f(string a)
{
    long long  b = strtol(a.c_str(), NULL, 2);

    return b;
}
int main()
{
    int k, n;
    char a;
    string m = "";
    string w = "";
    cin >> k >> n;
    while (k--)
    {
        cin >> a;
        m += a;

    }
    while (n--)
    {
        cin >> a;
        w += a;
    }
    nt(f(w) + f(m));
    return 0;
}
