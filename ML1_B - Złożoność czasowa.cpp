#include <bits/stdc++.h>
using namespace std;
int main()
{
	stack < int > stos;
	int x;
	cin >> x;
	string co;
	int o = 0;
	int max = 0;
	while (x--)
	{
		cin >> co;
		if (co == "for")
		{
			stos.push(1);
		}
		else if (co == "end")
			stos.push(0);
	}
	if (stos.empty() == true)
		cout << "O(1)";
	else
	{
		while (stos.empty() == false)
		{
			if (stos.top() == 0)
			{
				o++;
				if (o > max)
				{
					max = o;
				}
				stos.pop();
			}
			if (stos.top() == 1)
			{
				o--;
				stos.pop();
			}
		}
		if (max == 1)
			cout << "O(n)";
		else
			cout << "O(n^" << max << ')';
	}
	return 0;
}
