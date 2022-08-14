/**
 *	Author: hyturing
 *	Created: 
**/

#include <bits/stdc++.h>
using namespace std; 

const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const long long INF = 1e18;

void solve() {

	// code here
	
	int n, k; cin >> n >> k;
	int a[n];
	for (auto &x: a) cin >> x;

	int ans = 0;

	for (int i = 1; i < n-1; i++) {
		if (a[i] > a[i-1]+a[i+1]) ans++;
	}	

	if (k == 1) {
		ans = (n-1)/2;
	}

	cout << ans << "\n";

	return;
}

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int tc = 1;
	cin >> tc;
	
	for (int i = 1; i <= tc; i++) {
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
