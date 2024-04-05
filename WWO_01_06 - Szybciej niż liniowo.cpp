#include <bits/stdc++.h>
using namespace std;
long long M=1<<18;
long long w[1<<19]={};

void insert(long long x,long long val,long long *w)
{
	int v=M+x;
	w[v]=val;
	while(v!=1)
	{
		v/=2;
		w[v]=w[2*v]+w[2*v+1];
	}
}
void increase(long long a,long long b,long long x)
{
	long long va=a+M;
	long long vb=b+M;

	w[va]+=x;

	if(va!=vb)
	{
		w[vb]+=x;
	}
	while(va/2!=vb/2)
	{
		if(va%2==0)
		w[va+1]+=x;

		if(vb%2==1)
		w[vb-1]+=x;
        //-----------------------------
        va/=2;
		vb/=2;
	}
}

int f(int a)
{
	int o=0;
    int v=a+M;
    while(v!=1)
    {
        o+=w[v];
        v/=2;
    }
    return o;
    
}
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
    ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();

	int n,x;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> w[i+M];
	}
	int q1,q2,s,a,b,v;
	cin >> q1;
	while(q1--)
	{
		cin >> a >> b >> v;
		increase(a,b,v);
	}
	cin >> q2;
	while(q2--)
	{
		cin >> s;
		int pom=f(s);
		
		if(pier(pom)==true)
            cout << "tak\n";
        else 
            cout << "nie\n";
		
		
	}


	return 0;
}
