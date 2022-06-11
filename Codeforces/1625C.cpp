/**
 *	Author: hyturing
 *	Created: 23 May 2022 14:07:53 IST
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
	
	int n, l, k;
	cin >> n >> l >> k;

	vector<int> a(n+2), d(n+2);

	for (int i = 1; i <= n; i++) cin >> d[i];
	for (int i = 1; i <= n; i++) cin >> a[i];

	vector<vector<int>> dp(n+2, vector<int> (n+2, INF));

	dp[1][0] = 0;
	d[n+1] = l;

	for (int i = 2; i <= n+1; i++) {

		for (int j = 0; j <= k; j++) {

			if (j == 0) {
				
				dp[i][j] = dp[i-1][j] + (d[i]-d[i-1]) * a[i-1];
			}
			else {
				
				for (int prev = i-1; prev > 0; prev--) {
				
					int remove = i - 1 - prev;

					if (remove > j) continue;

					dp[i][j] = min(dp[i][j], dp[prev][j-remove] + (d[i]-d[prev])*a[prev]);
				}
			}
		}
	}

	int ans = INF;

	for (int i = 0; i <= k; i++) {
		ans = min(ans, dp[n+1][i]);
	}

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
