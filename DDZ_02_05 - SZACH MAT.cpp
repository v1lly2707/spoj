#include <bits/stdc++.h>
using namespace std;

struct s
{
	char a;
	string b;
	bool operator < (const s& x)const
	{
		if (a == x.a)
		{

			return b > x.b;
		}
		return a > x.a;
	}
};
s pom1[1005];
s pom2[1005];
int main()
{
	int m, n;
	cin >> m >> n;
	char f;
	char tab1[10][10], tab2[10][10];
	for (int i = 1; i <= 8; i++)
	{
		for (int j = 1; j <= 8; j++)
			tab1[i][j] = '0';
	}
	for (int i = 1; i <= 8; i++)
	{
		for (int j = 1; j <= 8; j++)
			tab2[i][j] = '0';
	}
	vector < pair < char, string > > vec1;
	pair < char, string > para1;
	pair < char, string > para2;
	vector < pair < char, string > > vec2;
	string wsp;
	for (int i = 1; i <= m; i++)
	{
		cin >> f >> wsp;
		para1.first = f;
		para1.second = wsp;
		vec1.push_back(para1);

		tab1[wsp[1] - 48][wsp[0] - 96] = f;

	}
	sort(vec1.begin(), vec1.end());


	for (int i = 1; i <= n; i++)
	{

		cin >> f >> wsp;
		para2.first = f;
		para2.second = wsp;
		vec2.push_back(para2);


		tab2[wsp[1] - 48][wsp[0] - 96] = f;
	}
	sort(vec2.begin(), vec2.end());


	for (int i = 8; i >= 1; i--)
	{
		for (int j = 1; j <= 8; j++)
			cout << tab2[i][j];

		cout << endl;

	}
	for (int i = 0; i < vec2.size(); i++)
		cout << vec2[i].first << ' ' << vec2[i].second << endl;


	for (int i = 8; i >= 1; i--)
	{
		for (int j = 1; j <= 8; j++)
			cout << tab1[i][j];

		cout << endl;

	}
	for (int i = 0; i < vec1.size(); i++)
		cout << vec1[i].first << ' ' << vec1[i].second << endl;



	return 0;
}
