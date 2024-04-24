#include <bits/stdc++.h>
using namespace std;
int main()
{
    int  t;
    //    ios::sync_with_stdio(false);
    //    cin.tie(NULL);
    int  a, b, c, d;
    scanf("%d", &t);
    while (t--)
    {
        //cin>>a>>b>>c>>d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        printf("%.2f\n",
            sqrt(a * a + d * d - ((a * a + (d + c) * (d + c) - b * b)) / (double)(c + d) * d));
    }


    return 0;
}
