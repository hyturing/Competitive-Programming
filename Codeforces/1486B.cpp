/**
 *	Author: hyturing
 *	Created: 21 Mar 2022 08:02:34 IST
**/

#include <bits/stdc++.h>
using namespace std; 

#define int long long
const int  M = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const int INF = 1e18;

void solve(){

	// code here
	
	int n;
	cin >> n;

	int x[n], y[n];

	for(int i = 0; i < n; i++) cin >> x[i] >> y[i];

	sort(x, x+n); sort(y, y+n);

	cout << (x[n/2]-x[(n-1)/2]+1)*(y[n/2]-y[(n-1)/2]+1) << "\n";

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
