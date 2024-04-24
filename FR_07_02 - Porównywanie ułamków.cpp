#include <bits/stdc++.h>

using namespace std;

int main() 
{
	int x;
	cin >> x;
	double a,b,a1,b1;
	char k,k1;
	for(int i=1;i<=x;i++)
	{
		cin >> a >> k >> b;
		cin >> a1 >> k1 >> b1;
		
		
		
		if((a/b)>(a1/b1))
		{
			cout << '1' << endl;
		}
		else if((a/b)<(a1/b1))
		{
			cout << '2' << endl;
		}
		else if((a/b)==(a1/b1))
		{
			cout << '0' << endl;
		}
	}

	return 0;
}
