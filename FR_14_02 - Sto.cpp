#include <bits/stdc++.h>


using namespace std;

int main()
{
	int x = 1;

	//cin.ignore();
	string napis;
	string wzorzec = "sto";

	//for(int i=1;i<=x;i++)
	//{
	cin >> napis;
	//getline(cin,wzorzec);

	int pozycja = napis.find(wzorzec);

	if (pozycja != string::npos)
	{
		cout << "TAK";
	}
	else
	{
		cout << "NIE";
	}
	//}
	return 0;
}
