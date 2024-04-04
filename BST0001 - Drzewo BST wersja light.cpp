#include <bits/stdc++.h>

using namespace std;

struct tree
{
    int val;
    tree* right, * left;
};
tree* pom, * pocz, * w;
int x, value;
char activity;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> x;
    x--;
    cin >> activity >> value;
    pocz = new tree;
    pom = pocz;
    pocz->val = value;
    pocz->left = NULL;
    pocz->right = NULL;

    while (x--)
    {
        pom = pocz;
        cin >> activity;

        if (activity == 'i')
        {
            cin >> value;
            while ((value < pom->val && pom->left != NULL) || (value > pom->val && pom->right != NULL))
            {
                if (value < pom->val && pom->left != NULL)
                    pom = pom->left;

                if (value > pom->val && pom->right != NULL)
                    pom = pom->right;
            }
            w = new tree;
            w->val = value;
            w->left = NULL;
            w->right = NULL;

            if (value < pom->val)
                pom->left = w;
            if (value > pom->val)
                pom->right = w;
        }
        //--------------------------------------
        if (activity == 's')
        {
            cin >> value;
            while (pom->val != value && (value<pom->val && pom->left != NULL || value>pom->val && pom->right != NULL))
            {
                cout << pom->val << ' ';

                if (value < pom->val)
                    pom = pom->left;
                else if (value > pom->val)
                    pom = pom->right;
            }
            cout << pom->val << "\n";
        }
        //--------------------------------------
        if (activity == 'm')
        {
            while (pom->left != NULL)
                pom = pom->left;

            cout << pom->val << "\n";
        }
        //--------------------------------------
        if (activity == 'M')
        {
            while (pom->right != NULL)
                pom = pom->right;

            cout << pom->val << "\n";
        }
    }


    return 0;
}
