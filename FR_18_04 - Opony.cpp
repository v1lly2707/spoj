#include <bits/stdc++.h>

using namespace std;

map < pair < string, string >, int > tires;


int main()
{
    string size1, size2;

    while (cin >> size1 >> size2)
        tires[{size1, size2}]++;

    for (auto it = tires.begin(); it != tires.end(); ++it)
    {
        pair < string, string > key = it->first;
        int value = it->second;

        if (value % 2 != 0)
        {
            cout << key.first << ' ' << key.second;
            break;
        }
    }


    return 0;
}
