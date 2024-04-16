#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;



	cin >> a >> b >> c >> d >> e >> f;
	int ac = max(a, c);
	int bd = min(b, d);

	if (min(bd, f) - max(ac, e) >= 0)
		cout << max(ac, e) << " " << min(bd, f) << endl;
	else
		cout << "null" << endl;



	return 0;
}
