#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, h, n, current_length = 1, max_length = -1;
    cin >> t;
    int arr[1000005] = {};
    bool ok = false;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> arr[i];

        h = arr[2] - arr[1];
        for (int i = 1, j = i + 1; i <= n, j <= n; i++, j++)
        {


            if (arr[j] - arr[i] == h)
            {
                current_length++;
                if (current_length > max_length)
                    max_length = current_length;

            }
            else
            {

                if (current_length > max_length)
                    max_length = current_length;
                h = arr[j] - arr[i];

                i--;
                j--;

                current_length = 1;
            }
        }
        if (n == 1)
            cout << "1\n";
        else if (ok == false && n != 1) cout << max_length << '\n';

        current_length = 1;
        max_length = -1;
        ok = false;
    }
    return 0;
}






