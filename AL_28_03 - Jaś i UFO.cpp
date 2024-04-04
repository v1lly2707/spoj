#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int x;
    cin >> x;
    int a;
    char b;
    int m = 0;
    int cnt = 0;
    while (x--)
    {
        cin >> a;
        for (int i = 1; i <= a; i++)
        {
            cnt = 0;
            for (int j = 1; j <= a; j++)
            {
                cin >> b;
                if (b == '.')
                {
                    cnt++;
                }
                else
                {
                    if (cnt > m)
                        m = cnt;
                    cnt = 0;
                }
            }
            if (cnt > m)
                m = cnt;
        }
        cout << m * m << "\n";
        m = 0;

    }


    return 0;
}
