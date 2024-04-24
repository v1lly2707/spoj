#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    char x;
    int o = 0;
    cin >> a >> x >> b;

    while (a > 0)
    {
        if (a >= 5)
        {
            a -= 5;
            o++;
        }
        else
        {
            if (a >= 2)
            {
                a -= 2;
                o++;
            }
            else
            {
                if (a >= 1)
                {
                    a -= 1;
                    o++;
                }
            }
        }
    }
    while (b > 0)
    {
        if (b >= 50)
        {
            b -= 50;
            o++;
        }
        else
        {
            if (b >= 20)
            {
                b -= 20;
                o++;
            }
            else
            {
                if (b >= 10)
                {
                    b -= 10;
                    o++;
                }
                else
                {
                    if (b >= 5)
                    {
                        b -= 5;
                        o++;
                    }
                    else
                    {
                        if (b >= 2)
                        {
                            b -= 2;
                            o++;
                        }
                        else
                        {
                            b -= b;
                            o++;
                        }
                    }
                }
            }
        }
    }
    cout << o;
    return 0;
}
