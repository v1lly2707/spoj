#include <bits/stdc++.h>

using namespace std;


struct tree
{
	int o;
	tree* up, * left, * right;

};
int main()
{
	int x;
	ios_base::sync_with_stdio;
	cin.tie(NULL);
	tree* wezel = new tree;
	tree* a, * b;
	wezel->o = 1;
	wezel->up = wezel->right = wezel->left = NULL;
	cin >> x;
	string kierunek;
	for (int i = 1; i <= x; i++)
	{
		cin >> kierunek;

		if (kierunek == "left")
		{
			if (wezel->left == NULL)
			{
				a = new tree;
				a->up = wezel;
				wezel->left = a;
				wezel = wezel->left;
				wezel->o = 1;
				wezel->left = wezel->right = NULL;
				cout << wezel->o << ' ';
			}
			else
			{
				wezel = wezel->left;
				wezel->o++;
				cout << wezel->o << ' ';
			}
		}
		else if (kierunek == "right")
		{
			if (wezel->right == NULL)
			{
				a = new tree;
				a->up = wezel;
				wezel->right = a;
				wezel = wezel->right;
				wezel->o = 1;
				wezel->left = wezel->right = NULL;
				cout << wezel->o << ' ';
			}
			else
			{
				wezel = wezel->right;
				wezel->o++;
				cout << wezel->o << ' ';
			}
		}
		else if (kierunek == "up")
		{
			if (wezel->up == NULL)
			{
				wezel->o++;
				cout << wezel->o << ' ';


			}
			else
			{
				wezel = wezel->up;
				wezel->o++;
				cout << wezel->o << ' ';
			}
		}
	}




	return 0;
}
