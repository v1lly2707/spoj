#include <bits/stdc++.h>
using namespace std;

int arr[4194304] = {};
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int p, q, a;

	cin >> p;

	for (int i = pow(2, p - 1); i <= pow(2, p) - 1; i++)
		cin >> arr[i];


	cin >> q;
	int pot = pow(2, p - 1);
	while (q--)
	{
		cin >> a;
		int pom = pot + a - 1;


		for (int i = pom; i >= 1; i /= 2)
		{
			if (i % 2 == 0)
				arr[i / 2] = arr[i] + arr[i + 1];
			else
				arr[i / 2] = arr[i] + arr[i - 1];

			cout << arr[i] << ' ';
		}


		cout << '\n';
		
	}

	return 0;
}
