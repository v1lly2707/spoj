#include <bits/stdc++.h>

using namespace std;
int a(string d)

{
	int x=strtol(d.c_str(), NULL, 2);
	return x;
	
}
int main() 
{
	string q,b,c,w;
	
	cin >> q >> b >> c >> w;
	string q1,b1,c1,d1;
	cout << a(q) << a(b) << ':' << a(c) << a(w);
	
	return 0;
}
