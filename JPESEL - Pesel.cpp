#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	cin >> x;
	string pesel;
	int o = 0;
	while (x--)
	{
		cin >> pesel;
		for (int i = 0; i < pesel.size(); i++)
		{
			o += (pesel[0] - 48) * 1;
			o += (pesel[1] - 48) * 3;
			o += (pesel[2] - 48) * 7;
			o += (pesel[3] - 48) * 9;
			o += (pesel[4] - 48) * 1;
			o += (pesel[5] - 48) * 3;
			o += (pesel[6] - 48) * 7;
			o += (pesel[7] - 48) * 9;
			o += (pesel[8] - 48) * 1;
			o += (pesel[9] - 48) * 3;
			o += (pesel[10] - 48) * 1;

		}
		if (o % 10 == 0)
		{
			cout << "D\n";
			o = 0;
		}

		else
		{
			cout << "N\n";
			o = 0;
		}

	}
	return 0;
}
