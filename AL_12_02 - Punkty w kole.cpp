#include <bits/stdc++.h>

using namespace std;

long long ile(long long r)
{
    long long s = 0;
    long long rr = r * r;
    for (int i = 1; i < r; i++)
    {
        s += sqrt(r * r - i * i);
    }
    return 4 * s + 4 * r + 1;

}

int main()
{
    long long a;
    long long r;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        cin >> r;
        long long s = ile(r);
        cout << s << endl;
        s = 0;
    }

    return 0;
}
