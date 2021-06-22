#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main()
{	
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
 
	int n;
	cin >> n;
	ll arr[n];
	for (int i = 0; i < n; ++i) cin >> arr[i];
	ll ans(0);
 
	for (int i = 1; i < n; ++i){
		if (arr[i]<arr[i-1]) {ans += arr[i-1]-arr[i]; arr[i] = arr[i-1];}
	}
 
	cout << ans;
 
 
	return 0;
}