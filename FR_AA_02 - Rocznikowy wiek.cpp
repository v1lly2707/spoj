#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long a, b;
	cin >> a >> b;
	long long pom;
	pom = (a % 10) * 2;
	pom = pom + 5;
	pom = pom * 50;
	pom = pom + 1771;
	pom = pom - b;
	long long c = pom;
	cout << pom % 100;
	return 0;
}
