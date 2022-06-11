/**
 *	Author: hyturing
 *	Created: 12 Jun 2022 04:02:18 IST
**/

#include <bits/stdc++.h>
using namespace std; 

#define ll long long
const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const ll INF = 1e18;

void solve() {

	// code here
	
	int n, x; cin >> n >> x;
	
	vector<int> c(n+1);
	for (int i = 1; i <= n; i++) cin >> c[i];

	vector<vector<int>> dp(n+1, vector<int>(x+1, 0));

	for (int i = 1; i <= n; i++) {

		for (int sum = 0; sum <= x; sum++) {

			if (sum == 0) {
				dp[i][sum] = 1;
			}
			else {
				int op1 = (c[i] > sum) ? 0 : dp[i][sum-c[i]];
				int op2 = (i == 1) ? 0 : dp[i-1][sum];

				dp[i][sum] = (op1+op2)%MOD;
			}
		}
	}

	cout << dp[n][x]%MOD;

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
