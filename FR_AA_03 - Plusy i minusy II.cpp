#include <bits/stdc++.h>
using namespace std;
int main()
{
	string napis;
	cin >> napis;
	int p=0,o=0;
	for(int i=0;i<napis.size();i++)
	{
		if(napis[i]=='+')
		{
			p++;
			if(p==3)
			{
				cout << 5 << ' ';
				o++;
				p=0;
			}
		}
		else
		{
			p--;
			if(p==-3)
			{
				cout << 1 << ' ';
				o++;
				p=0;
			}
		}
	}
	if(o==0)
	cout << "BRAK";
	return 0;
}
