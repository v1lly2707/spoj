#include<bits/stdc++.h> 

using namespace std;
#define pkt pair < int, int >

pair < int, int > start;
stack < pkt > otoczka;


int iloczyn_wektorowy(pkt X, pkt Y, pkt Z)
{
    int x1 = Z.first - X.first;
    int y1 = Z.second - X.second;
    int x2 = Y.first - X.first;
    int y2 = Y.second - X.second;
    return x1 * y2 - x2 * y1;
}


stack < pkt > buduj_otoczke(vector < pkt > P)
{
    stack < pkt > stos;
    stos.push(P[0]);
    pkt X = P[0];
    pkt Y = P[1];
    for (int i = 2; i < P.size(); i++)
    {

        while (iloczyn_wektorowy(X, Y, P[i]) >= 0)
        {
            Y = X;
            stos.pop();
            if (stos.empty())
                break;
            X = stos.top();
        }
        stos.push(Y);
        X = Y;
        Y = P[i];
    }
    return stos;
}

bool porownaj(pkt A, pkt B)
{
    if (A == start)
        return 1;
    if (B == start)
        return 0;

    if ((A.second - start.second) * (B.first - start.first) == (A.first - start.first) * (B.second - start.second))
        return (A.first - start.first) * (A.first - start.first) + (A.second - start.second) * (A.second - start.second) <
        (B.first - start.first) * (B.first - start.first) + (B.second - start.second) * (B.second - start.second);

    return (A.second - start.second) * (B.first - start.first) < (A.first - start.first) * (B.second - start.second);
}



int main()
{
    int n;
    cin >> n;

    vector < pkt > P(n);

    for (int i = 0; i < n; i++)
    {
        cin >> P[i].first >> P[i].second;
        if (i == 0)
            start = P[i];
        else
            if (P[i].second == start.second)
                start.first = min(P[i].first, start.first);
            else
                if (P[i].second < start.second)
                    start = P[i];
    }



    sort(P.begin(), P.end(), porownaj);
    P.push_back(start);

    stack < pkt > stos = buduj_otoczke(P);


    cout << start.first << ' ' << start.second << endl;

    while (stos.empty() == false)
    {
        cout << stos.top().first << ' ' << stos.top().second << endl;
        stos.pop();
    }

    return 0;



}
