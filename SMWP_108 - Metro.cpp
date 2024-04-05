#include <bits/stdc++.h>
using namespace std;

int main()
{
	priority_queue<long long> kp;
	long long int t, b, c, d;
	char a;
	cin >> t;
	while (t--)
	{
		cin >> a;
		if (a == 'a')
		{
			cin >> b;
			while (b--)
			{
				cin >> c;
				kp.push(c);
			}
		}
		else if (a == 'r')
		{
			cin >> d;
			while (d--)
			{
				if (kp.empty() == false)
					kp.pop();
			}

		}
		else if (a == 'c')
		{
			cout << kp.size() << endl;
		}
		else if (a == 'p')
		{
			if (kp.empty() == false)
				cout << kp.top() << endl;
			else cout << "0" << endl;
		}
	}
	return 0;
}
