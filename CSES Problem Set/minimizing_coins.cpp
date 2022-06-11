/**
 *	Author: hyturing
 *	Created: 12 Jun 2022 02:01:24 IST
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
	
	int n, x; cin >> n >> x;
	vector<int> c(n);
	for (auto &y: c) cin >> y;

	vector<int> dp(x+1, 0);
	for (auto y: c) {
		if (y <= x) dp[y] = 1;
	}

	// for (auto y: dp) cout << y << " "; cout << endl;
		

	for (int i = 1; i <= x; i++) {
		if (dp[i] == 1) continue;
		int mi = INT_MAX;
		for (int j = 0; j < n; j++) {
			if (i-c[j] < 0) continue;
			if (dp[i-c[j]] == 0) continue;
			mi = min(mi, dp[i-c[j]]);
		}

		if (mi == INT_MAX) {dp[i] == 0; continue;}
		dp[i] = 1+mi;
	}

	// for (auto y: dp) cout << y << " "; cout << endl;

	cout << ((dp[x] == 0) ? -1 : dp[x]) << "\n";

	return;
}

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int tc = 1;
	// cin >> tc;
	
	for (int i = 1; i <= tc; i++) {
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
