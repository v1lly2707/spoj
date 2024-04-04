#include <bits/stdc++.h>
using namespace std;

struct G
{
	bool odw;
	vector < int >pol;

}*w;
void DFS(int k)
{

	w[k].odw = true;
	for (int i = 0; i < w[k].pol.size(); i++)

		if (w[w[k].pol[i]].odw == false)
			DFS(w[k].pol[i]);
}
int main()
{
	string napis;
	char a;
	while (cin >> napis)
	{
		w = new G[105];
		for (int k = 0; k <= 100; k++)
		{
			w[k].pol.clear();
			w[k].odw = 0;

		}



		for (int j = 0; j < napis.size(); j++)
		{
			if (napis[j] == 'O')
			{
				if (j == 0)
				{
					if (napis[j + 1] == 'O')
					{
						w[j].pol.push_back(j + 1);
						w[j + 1].pol.push_back(j);
					}
					if (napis[j + 10] == 'O')
					{
						w[j].pol.push_back(j + 10);
						w[j + 10].pol.push_back(j);

					}


				}
				else if (j == 9)
				{
					if (napis[j - 1] == 'O')
					{
						w[j].pol.push_back(j - 1);
						w[j - 1].pol.push_back(j);

					}
					if (napis[j + 10] == 'O')
					{
						w[j].pol.push_back(j + 10);
						w[j + 10].pol.push_back(j);

					}


				}
				else if (j == 90)
				{
					if (napis[j + 1] == 'O')
					{
						w[j].pol.push_back(j + 1);
						w[j + 1].pol.push_back(j);

					}
					if (napis[j - 10] == 'O')
					{
						w[j].pol.push_back(j - 10);
						w[j - 10].pol.push_back(j);

					}
				}
				else if (j == 99)
				{
					if (napis[j - 1] == 'O')
					{
						w[j].pol.push_back(j - 1);
						w[j - 1].pol.push_back(j);

					}
					if (napis[j - 10] == 'O')
					{
						w[j].pol.push_back(j - 10);
						w[j - 10].pol.push_back(j);

					}
				}
				else if ((j == 10 || j == 20 || j == 30 || j == 40 || j == 50 || j == 60 || j == 70 || j == 80))
				{
					if (napis[j + 1] == 'O')
					{
						w[j].pol.push_back(j + 1);
						w[j + 1].pol.push_back(j);

					}
					if (napis[j + 10] == 'O')
					{
						w[j].pol.push_back(j + 10);
						w[j + 10].pol.push_back(j);
					}
					if (napis[j - 10] == 'O')
					{
						w[j].pol.push_back(j - 10);
						w[j - 10].pol.push_back(j);

					}
				}
				else if ((j == 19 || j == 29 || j == 39 || j == 49 || j == 59 || j == 69 || j == 79 || j == 89))
				{
					if (napis[j - 1] == 'O')
					{
						w[j].pol.push_back(j - 1);
						w[j - 1].pol.push_back(j);

					}
					if (napis[j + 10] == 'O')
					{
						w[j].pol.push_back(j + 10);
						w[j + 10].pol.push_back(j);

					}
					if (napis[j - 10] == 'O')
					{
						w[j].pol.push_back(j - 10);
						w[j - 10].pol.push_back(j);

					}
				}
				else if ((j == 91 || j == 92 || j == 93 || j == 94 || j == 95 || j == 96 || j == 97 || j == 98))
				{
					if (napis[j - 1] == 'O')
					{
						w[j].pol.push_back(j - 1);
						w[j - 1].pol.push_back(j);

					}
					if (napis[j + 1] == 'O')
					{
						w[j].pol.push_back(j + 1);
						w[j + 1].pol.push_back(j);

					}
					if (napis[j - 10] == 'O')
					{
						w[j].pol.push_back(j - 10);
						w[j - 10].pol.push_back(j);

					}
				}
				else if ((j == 1 || j == 2 || j == 3 || j == 4 || j == 5 || j == 6 || j == 7 || j == 8))
				{
					if (napis[j + 1] == 'O')
					{
						w[j].pol.push_back(j + 1);
						w[j + 1].pol.push_back(j);

					}
					if (napis[j - 1] == 'O')
					{
						w[j].pol.push_back(j - 1);
						w[j - 1].pol.push_back(j);

					}
					if (napis[j + 10] == 'O')
					{
						w[j].pol.push_back(j + 10);
						w[j + 10].pol.push_back(j);

					}
				}
				else
				{

					if (napis[j + 1] == 'O')
					{
						w[j].pol.push_back(j + 1);
						w[j + 1].pol.push_back(j);

					}
					if (napis[j - 1] == 'O')
					{
						w[j].pol.push_back(j - 1);
						w[j - 1].pol.push_back(j);

					}
					if (napis[j + 10] == 'O')
					{
						w[j].pol.push_back(j + 10);
						w[j + 10].pol.push_back(j);

					}
					if (napis[j - 10] == 'O')
					{
						w[j].pol.push_back(j - 10);
						w[j - 10].pol.push_back(j);
					}

				}
			}

		}
		DFS(0);
		if (w[99].odw == true)
			cout << 1 << endl;
		else
			cout << 0 << endl;
	}


	return 0;

}
