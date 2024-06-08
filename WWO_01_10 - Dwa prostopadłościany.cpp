#include <bits/stdc++.h>

using namespace std;
int main() 
{
	priority_queue < int > kolejkap;
	int x,y,z,x1,y1,z1;
	int a,b,c,a1,b1,c1;
	cin >> x >> y >> z;
	cin >> a >> b >> c;

	
	if(a>=x && b>=y && c>=z )
	{
		cout << "tak";
	}
	else if(a>=y && b>=z && c>=x)
	{
		cout << "tak";
	}
	else if(a>=z && b>=x && c>=y)
	{
		cout << "tak";
	}
	else if(a>=x && b>=z && c>=y)
	{
		cout << "tak";
	}
	else if(a>=y && b>=x && c>=z)
	{
		cout << "tak";
	}
	else if(a>=z && b>=y && c>=x)
	{
		cout << "tak";
	}

	else if(a<=x && b<=y && c<=z )
	{
		cout << "tak";
	}
	else if(a<=y && b<=z && c<=x)
	{
		cout << "tak";
	}
	else if(a<=z && b<=x && c<=y)
	{
		cout << "tak";
	}	
	else if(a<=x && b<=z && c<=y)
	{
		cout << "tak";
	}
	else if(a<=y && b<=x && c<=z)
	{
		cout << "tak";
	}
	else if(a<=z && b<=y && c<=x)
	{
		cout << "tak";
	}

	else
	{
		cout << "nie";
	}

	

	return 0;
}
