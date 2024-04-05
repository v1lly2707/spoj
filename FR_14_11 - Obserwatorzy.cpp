#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);

    stack < pair < int, int > > stos;
    int idx[1000005] = {};

    pair < int, int > para;
    int n, m;
    cin >> n;
    int a[1000005] = {};
    for (int i = 1; i <= n; i++)
        cin >> a[i];




    int j = 1;
    for (int i = n; i >= 1; i--)
    {
        while (stos.empty() == false && stos.top().first <= a[i])
            stos.pop();

        if (stos.empty() == false)
        {
            idx[i] = stos.top().first;
            //cout << idx[i] << ' ';

        }

        else
        {

            idx[i] = -1;
            //cout << idx[i] << ' ';

        }


        para.first = a[i];
        para.second = i;

        stos.push(para);

    }

    cin >> m;
    int w;

    //cout << idx[1] << '\n';
    while (m--)
    {
        cin >> w;
        int t = n - w;
        if (idx[w] == -1) cout << "nie ma\n";
        else cout << idx[w] << '\n';
    }
    // cout << idx[9];*/

    return 0;
}
