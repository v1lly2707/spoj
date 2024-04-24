#include <bits/stdc++.h>
using namespace std;
int arr[1005] = {};
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int a, b, n, c, d, e;
	string word;
	cin >> n >> word;
	if (word == "niedziela")
	{
		arr[1] = 1;
		a = 7;
	}
	if (word == "sobota")
		a = 1;
	if (word == "piatek")
		a = 2;
	if (word == "czwartek")
		a = 3;
	if (word == "sroda")
		a = 4;
	if (word == "wtorek")
		a = 5;
	if (word == "poniedzialek")
		a = 6;

	while (a < 380)
	{
		arr[a] = 1;
		arr[a + 1] = 1;
		a += 7;
	}

	cin >> e;
	while (e--)
	{
		cin >> word;
		if (word == "styczen") b = 0;
		if (word == "luty") b = 31;
		if (word == "marzec") b = 31 + 28;
		if (word == "kwiecien") b = 31 + 28 + 31;
		if (word == "maj") b = 31 + 28 + 31 + 30;
		if (word == "czerwiec") b = 120 + 31;
		if (word == "lipiec") b = 151 + 30;
		if (word == "sierpien") b = 181 + 31;
		if (word == "wrzesien") b = 181 + 31 + 31;
		if (word == "pazdziernik") b = 181 + 31 + 31 + 30;
		if (word == "listopad") b = 181 + 31 + 31 + 30 + 31;
		if (word == "grudzien") b = 181 + 31 + 31 + 30 + 31 + 30;
		cin >> c;
		while (c--)
		{
			cin >> d;
			arr[b + d] = 1;
		}
	}
	arr[366] = arr[367] = arr[368] = arr[369] = arr[370] = arr[371] = arr[372] = arr[373] = 0;
	int cnt = 0;
	int w, j;
	for (int i = 1; i <= 365; i++)
	{
		w = a = 0;
		j = i;
		b = i;
		while (a < n && j <= 365)
		{
			if (arr[j] == 0)
				a++;
			w++;
			j++;

		}
		while (arr[j] == 1)
		{
			w++;
			j++;
		}
		if (a < n)
		{
			j = b - 1;
			while (a < n && j>0)
			{
				if (arr[j] == 0)
					a++;
				w++;
				j--;
			}
			while (arr[j] == 1 && j > 0)
			{
				w++;
				j--;
			}
		}
		if (w > cnt)
			cnt = w;
	}
	cout << cnt;

	return 0;
}
