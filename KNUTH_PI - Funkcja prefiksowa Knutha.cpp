#include <bits/stdc++.h>
using namespace std;

int arr[1000005] = {};
void KMP(string word)
{
	int i, j; // counters
	i = 0;


	arr[1] = 0;
	int k;
	for (k = 2; k < word.size(); k++)
	{

		while (i > 0 && word[i + 1] != word[k])
			i = arr[i];

		if (word[i + 1] == word[k])
			i++;


		arr[k] = i;

	}


	for (int q = 1; q < word.size(); q++) // out
		cout << arr[q] << ' ';
	cout << "\n";
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int x;
	string word;

	cin >> x;

	while (x--)
	{
		cin >> word;
		string h = "0" + word;
		KMP(h);
	}

}
