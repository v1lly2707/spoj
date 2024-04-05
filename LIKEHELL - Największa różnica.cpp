#include <bits/stdc++.h>
using namespace std;

int M = 1 << 18;
int w[1 << 19] = {};
int Ma[1 << 19] = {};
int Mi[1 << 19] = {};
int arr[1 << 19] = {};

void Insert(int a, int b)
{

	int v = M + a;
	Ma[v] = b;
	Mi[v] = b;
	arr[v] = -1;
	while (v != 1)
	{
		v /= 2;
		Ma[v] = max(Ma[2 * v], Ma[2 * v + 1]);
		Mi[v] = min(Mi[2 * v], Mi[2 * v + 1]);
		arr[v] = -1;
		arr[v] = max(max(arr[2 * v], arr[2 * v + 1]), Ma[2 * v + 1] - Mi[2 * v]);

	}
}

int query()
{
	return arr[1];
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, Q, a, p, v, x;
	char option;
	cin >> N >> Q;
	for (int i = 0; i <= (1 << 19); i++)
	{
		arr[i] = -1;
		Ma[i] = -1;
		Mi[i] = 1000000005;
	}
	for (int i = 0; i < N; i++)
	{
		cin >> a;
		Insert(i, a);
	}
	while (Q--)
	{
		cin >> option;
		if (option == 'q')
			cout << query() << '\n';

		if (option == 'u')
		{
			cin >> p >> v;
			Insert(p - 1, v);
		}
	}
	return 0;
}
