#include <bits/stdc++.h>

using namespace std;


int main() 
{
	int xa;
	int xb;
	int ya;
	int yb;
	int xc;
	int yc;
	
	cin >> xa >> ya >> xb >> yb >> xc >> yc;
	
	double ab=sqrt(pow((xb-xa),2)+pow((yb-ya),2));
	double bc=sqrt(pow((xc-xb),2)+pow((yc-yb),2));
	double ca=sqrt(pow((xa-xc),2)+pow((ya-yc),2));
	double p=0.5*(ab+bc+ca);
	
	
	double r=((ab*bc*ca)/sqrt((p*(p-ab)*(p-bc)*(p-ca))));
	double r4=r/4;
	
	cout << fixed  << setprecision(2) <<  r4;
	return 0;
}
