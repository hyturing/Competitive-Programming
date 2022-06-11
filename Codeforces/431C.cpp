/**
 *	Author: hyturing
 *	Created: 06 Jun 2022 21:52:52 IST
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
	
	int n, k, d;
	cin >> n >> k >> d;
	
	int dp[n+1][2];

	dp[0][0] = 1;
	dp[0][1] = 0;

	for (int i = 1; i <= n; i++) {
		dp[i][0] = dp[i][1] = 0;

		for (int j = 1; j <= k; j++) {
			if (i-j < 0) break;
			// i-j is the stepback we have to know the total number of ways but if 
			// the step j that we have to take is greater than the current position then it is not possible to reach

			if (j < d) {
				dp[i][0] = (dp[i][0]+dp[i-j][0]) % MOD;
				dp[i][1] = (dp[i][1]+dp[i-j][1]) % MOD;
			} 
			else {
				dp[i][1] = (dp[i][1]+dp[i-j][0]) % MOD;
				dp[i][1] = (dp[i][1]+dp[i-j][1]) %MOD;
			}
		}
	}

	cout << dp[n][1] << "\n";

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
