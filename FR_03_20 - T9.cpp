#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    int x, o;
    cin >> x;
    while (x--)
    {
        o = 0;
        cin >> a >> b;
        if (a.size() != b.size())
            cout << "NIE" << endl;
        else
        {
            for (int i = 0; i < b.size(); i++)
            {
                if ((b[i] == '1' && a[i] != '1') || (b[i] == '2' && a[i] != 'A' && a[i] != 'a' && a[i] != 'b' && a[i] != 'B' && a[i] != 'c' && a[i] != 'C' && a[i] != '2') || (b[i] == '3' && a[i] != 'D' && a[i] != 'd' && a[i] != 'E' && a[i] != 'e' && a[i] != 'F' && a[i] != 'f' && a[i] != '3') || (b[i] == '4' && a[i] != 'G' && a[i] != 'g' && a[i] != 'H' && a[i] != 'h' && a[i] != 'I' && a[i] != 'i' && a[i] != '4') || (b[i] == '5' && a[i] != 'J' && a[i] != 'j' && a[i] != 'K' && a[i] != 'k' && a[i] != 'l' && a[i] != 'L' && a[i] != '5') || (b[i] == '6' && a[i] != 'M' && a[i] != 'm' && a[i] != 'N' && a[i] != 'n' && a[i] != 'O' && a[i] != 'o' && a[i] != '6') || (b[i] == '7' && a[i] != 'P' && a[i] != 'p' && a[i] != 'Q' && a[i] != 'q' && a[i] != 'R' && a[i] != 'r' && a[i] != 'S' && a[i] != 's' && a[i] != '7') || (b[i] == '8' && a[i] != 'T' && a[i] != 't' && a[i] != 'U' && a[i] != 'u' && a[i] != 'V' && a[i] != 'v' && a[i] != '8') || (b[i] == '9' && a[i] != 'W' && a[i] != 'w' && a[i] != 'X' && a[i] != 'x' && a[i] != 'Y' && a[i] != 'y' && a[i] != 'Z' && a[i] != 'z' && a[i] != '9'))
                {
                    cout << "NIE" << endl;
                    o = 1;
                    break;
                }
            }
        }
        if (o == 0)
            cout << "TAK - " << a << endl;
    }
    return 0;
}
