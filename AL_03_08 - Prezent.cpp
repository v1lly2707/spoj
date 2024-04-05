#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio;
	cin.tie(NULL);
	int a;
	vector < int > vec;
	while (cin >> a)
	{
		if (a != 0)
		{
			vec.push_back(a);
		}
		else
			break;
	}
	sort(vec.begin(), vec.end());

	if (vec[vec.size() - 1] == vec[0])
		cout << vec[vec.size() - 1] << endl;
	else
	{
		for (int i = vec.size() - 1; i >= 0; i--)
		{
			if (vec[i] != vec[vec.size() - 1])
			{
				cout << vec[i] << endl;
				break;
			}
		}
	}



	return 0;
}
