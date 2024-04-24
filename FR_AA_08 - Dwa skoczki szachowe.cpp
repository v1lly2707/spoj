#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    if ((a[0] - 1 == b[0] && a[1] + 2 == b[1]) || (a[0] + 1 == b[0] && a[1] + 2 == b[1]) || (a[0] + 2 == b[0] && a[1] + 1 == b[1]) || (a[0] + 2 == b[0] && a[1] - 1 == b[1]) || (a[0] + 1 == b[0] && a[1] - 2 == b[1]) || (a[0] - 1 == b[0] && a[1] - 2 == b[1]) || (a[0] - 2 == b[0] && a[1] - 1 == b[1]) || (a[0] - 2 == b[0] && a[1] + 1 == b[1]))
        puts("TAK");
    else puts("NIE");
    return 0;
}
