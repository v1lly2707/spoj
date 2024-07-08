#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int T, n;
	cin >> T;
	int arr[1005] = {};
	arr[0] = 1;
	arr[1] = 8;
	arr[2] = 34;
	arr[3] = 104;
	arr[4] = 259;
	arr[5] = 560;
	arr[6] = 1092;
	arr[7] = 1968;
	arr[8] = 3333;
	arr[9] = 5368;
	arr[10] = 8034;
	arr[11] = 11224;
	arr[12] = 14775;
	arr[13] = 18480;
	arr[14] = 22100;
	arr[15] = 25376;
	arr[16] = 28041;
	arr[17] = 29832;
	arr[18] = 30502;
	while (T--)
	{

		cin >> n;
		if (n <= 18)
			cout << arr[n] << '\n';
		else if (n <= 36)
			cout << arr[36 - n] << '\n';
		else cout << 0 << '\n';

	}







}
