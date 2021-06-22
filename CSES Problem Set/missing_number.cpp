#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main()
{	
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
 
	ll n;
	cin >> n;
	ll arr[n-1], sum(0);
	for (int i = 0; i < n-1; i++) {cin >> arr[i]; sum += arr[i];}
 
	cout << (n*(n+1))/2 - sum;
 
 
	return 0;
}