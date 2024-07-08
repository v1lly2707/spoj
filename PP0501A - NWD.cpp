#include<bits/stdc++.h>

using namespace std;

int nwd(int a, int b)


{
    while (a != b)
        if (a > b)
            a -= b;
        else
            b -= a;
    return a;
}

int main()
{
    int x;
    cin >> x;
    int a, b;






    for (int i = 1; i <= x; i++)

    {
        cin >> a >> b;

        cout << nwd(a, b) << endl;
    }




    return 0;
}
