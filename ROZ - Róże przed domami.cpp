#include<bits/stdc++.h> 

using namespace std;

int main()
{
    int x, a1, b1, c1, a2, b2, c2, pom1, pom2, pom3;

    cin >> x;
    cin >> a1 >> b1 >> c1;
    for (int i = 1; i < x; i++)
    {
        cin >> a2 >> b2 >> c2;
        pom1 = a2 + min(b1, c1);
        pom2 = b2 + min(a1, c1);
        pom3 = c2 + min(a1, b1);
        a1 = pom1;
        b1 = pom2;
        c1 = pom3;
    }
    cout << min(a1, min(b1, c1)) << endl;
}
