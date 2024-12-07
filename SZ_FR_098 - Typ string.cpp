#include <bits/stdc++.h>

using namespace std;

int main ()
{
    string wyraz;
    cin >> wyraz;
    
    cout << wyraz.size() << endl;
    cout << wyraz[wyraz.size()-1] << endl;
    cout << wyraz[1] << endl;
    
    for(int i=wyraz.size()-1;i>=0;i--)
    	cout << wyraz[i];


    return 0;
}
