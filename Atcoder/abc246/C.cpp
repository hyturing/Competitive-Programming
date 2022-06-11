/**
 *	Author: hyturing
 *	Created: 02 Apr 2022 18:04:12 IST
**/

#include <bits/stdc++.h>
using namespace std; 

#define int long long
const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const int INF = 1e18;

void solve() {

	// code here
	
	int n, k, x;
	cin >> n >> k >> x;

	int a[n];
	for (auto &x: a) cin >> x;

	sort(a, a+n, greater<int>());

	int ans = 0;

	for (auto &y: a) {
		if (k > 0) {
			int r = y/x;
			
			if (r > k) {
				k = 0;
				y = y-k*x;
			}
			else {
				k -= r;
				y = y-r*x;
			}
		
		}
	}

	sort(a, a+n, greater<int>());

	for (auto y: a) {
		if (k > 0) {
			k--;
		}
		else ans += y;
	}

	// for (auto y: a) cout << y << " "; cout << endl;

	cout << ans << "\n";

	return;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tc = 1;
	// cin >> tc;
	
	for (int i = 1; i <= tc; i++) {
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
