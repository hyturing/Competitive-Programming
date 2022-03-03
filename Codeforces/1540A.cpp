/**
 *	Author: hyturing
 *	Created: 26 Feb 2022 07:40:20 IST
 *	Description: 
**/

#include <bits/stdc++.h>
using namespace std; 

#define ll long long
const ll  M = 1e9+7;
const ll MM = 998244353;
const int N = 1e5+5;

void solve(){

	// code here
	
	int n;
	cin >> n;

	long long d[n];
	for(auto &x: d) cin >> x;

	int rem = n-2;
	long long ans = 0;

	sort(d, d+n);

	for(int i = 0; i < n-1; i++){
		ans += (d[i]*(n-i-1)); 
	}

	for(int i = n-1; i > 0; i--){
		ans -= (d[i]*(long long)i);
	}

	cout << ans+d[n-1] << "\n";

	return;
}

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tc = 1;
	cin >> tc;
	for(int i = 1; i <= tc; i++){
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
