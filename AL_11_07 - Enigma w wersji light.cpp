#include <bits/stdc++.h>
using namespace std;

int main()
{
	string zdanie;
	int a;
	while (getline(cin, zdanie))
	{
		if (zdanie.size() % 2 != 0)
		{
			for (int i = 1; i < zdanie.size(); i += 2)
			{
				cout << zdanie[i] << zdanie[i - 1];
			}
			cout << zdanie[zdanie.size() - 1] << endl;
		}
		else
		{
			for (int i = 1; i < zdanie.size(); i += 2)
			{
				cout << zdanie[i] << zdanie[i - 1];
			}
			cout << endl;
		}

	}





	return 0;

}
