#include <bits/stdc++.h>
using namespace std;

vector < string > vec;
int main()
{
	int n;
	string a;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		vec.push_back(a);
	}

	for (int i = 1; i < n; i++)
	{
		if (vec[i] == "ta" && vec[i - 1] == "ta")
		{
			cout << "tata";
			break;
		}
		else if (vec[i] == "ma" && vec[i - 1] == "ma")
		{
			cout << "mama";
			break;
		}
	}
	return 0;
}
