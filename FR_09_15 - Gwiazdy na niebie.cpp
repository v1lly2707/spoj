#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int x;
	cin >> x;
	string napis;
	double a, b;
	vector < pair < double, string > > vec;
	pair < double, string > para;
	pair < int, int > p;
	for (int i = 0; i < x; i++)
	{
		cin >> napis >> a >> b;
		para.first = a / b;
		para.second = napis;
		vec.push_back(para);

	}
	sort(vec.begin(), vec.end());
	for (int i = 0; i < x; i++)
	{
		cout << vec[i].second << endl;
	}
	return 0;
}
