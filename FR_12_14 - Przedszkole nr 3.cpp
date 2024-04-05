#include<bits/stdc++.h>
using namespace std;



priority_queue < pair < int, int > > kolejkap;
stack < int > stos[100005];

int main()
{
	int x, a, b, o = 0;
	pair < int, int > para;
	cin >> x;
	int q;
	int p = 3000000;
	for (int i = 1; i <= x; i++)
	{
		cin >> a;
		para.first = 0;
		para.second = i;

		for (int j = 0; j < a; j++)
		{
			cin >> b;
			para.first += b;
			stos[i].push(b);
		}

		if (p > para.first)
		{
			p = para.first;

		}

		kolejkap.push(para);
	}

	while (kolejkap.top().first != p)
	{
		q = stos[kolejkap.top().second].top();
		stos[kolejkap.top().second].pop();
		para.first = kolejkap.top().first - q;
		para.second = kolejkap.top().second;
		kolejkap.pop();
		kolejkap.push(para);

		if (p > para.first)
		{
			p = para.first;
		}

		o++;
	}
	cout << o << endl;

	return 0;
}
