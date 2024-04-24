#include <bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue < int > p;
    queue < int > kolejka;
    stack < int > stos;

    int x;
    cin >> x;
    int tab[1000000005];
    for (int i = 1; i <= x; i++)
    {
        cin >> tab[i];
    }
    for (int i = 1; i <= x; i += 3)
    {
        stos.push(tab[i]);
    }
    for (int i = 2; i <= x; i += 3)
    {
        kolejka.push(tab[i]);
    }
    for (int i = 3; i <= x; i += 3)
    {
        p.push(tab[i]);
    }
    while (x--)
    {
        if (stos.empty() == false)
        {
            cout << stos.top() << ' ';
            stos.pop();
        }
        if (kolejka.empty() == false)
        {
            cout << kolejka.front() << ' ';
            kolejka.pop();

        }
        if (p.empty() == false)
        {
            cout << p.top() << ' ';
            p.pop();
        }
    }

    return 0;
}
