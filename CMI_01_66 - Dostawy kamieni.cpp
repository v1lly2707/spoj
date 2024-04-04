#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();
	int tab[20005] = {};
	priority_queue <pair <int, int>, vector <pair <int, int> >, greater <pair <int, int> > > kolejka;
	pair < int, int > para;
	pair < int, int > pom;
	int n, d, w, c;
	cin >> n >> d;
	for (int i = 0; i < n; i++)
	{
		para.first = 0;
		para.second = i;
		kolejka.push(para);

	}
	while (d--)
	{
		cin >> w >> c;
		while (w--)
		{

			pom = kolejka.top();
			pom.first += c;
			kolejka.pop();
			kolejka.push(pom);

		}
	}

	while (kolejka.empty() == false)
	{
		tab[kolejka.top().second] = kolejka.top().first;
		kolejka.pop();
	}
	for (int i = 0; i < n; i++)
	{
		cout << tab[i] << "\n";
	}
	return 0;
}
