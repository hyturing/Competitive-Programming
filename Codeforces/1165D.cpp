/**
 *	Author: hyturing
 *	Created: 07 Jun 2022 15:39:41 IST
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
	
	int n;
	cin >> n;

	set<int> d;
	int mx = -1, mi = INT_MAX;
	for (int i = 0; i < n; i++) {
		int t; cin >> t;
		mx = max(mx, t);
		mi = min(mi, t);
		d.insert(t);
	}

	int ans = mi*mx;

	set<int> divisor;

	for (int i = 2; i*i <= ans; i++) {
		if (ans%i == 0) {
			divisor.insert(i);
			divisor.insert(ans/i);
		}
	}	

	// for (auto x: d) cout << x << " "; cout << endl;
	// for (auto x: divisor) cout << x << " "; cout << endl;

	if (d == divisor) cout << ans << "\n";
	else cout << -1 << "\n";

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
