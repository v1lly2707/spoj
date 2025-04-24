#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[1005][1005] = {};
	int a, b, x, q;
	int sum = 0;
	
	cin >> a >> b;
	
	for(int i = 0; i < a; i++)
	{
		for(int j = 0; j < b; j++)
		{
			cin >> arr[i][j];
			
		}
	}
		
			
			
	cin >> x;
	
	for(int i = 0; i < b; i++)
		sum += arr[x][i];
		
	cout << sum;	
	
	return 0;
}
