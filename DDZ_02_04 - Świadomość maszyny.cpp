#include <bits/stdc++.h>

using namespace std;
bool pier(int n)
{
	if(n<2)
		return false;

	for(int i=2;i*i<=n;i++)
		if(n%i==0)
			return false;
	return true;
}

int main()
{
    int tab[10];
    int o;
    for(int i=0;i<5;i++)
        cin >> tab[i];

    int p=0;
    for(int i=0;i<120;i++)
    {
        next_permutation(tab,tab+5);
        o=(tab[0]*10000)+(tab[1]*1000)+(tab[2]*100)+(tab[3]*10)+tab[4];
        if(pier(o)==true)
            p++;
    }
    cout << p;
    return 0;
}
