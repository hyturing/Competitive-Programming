/**
 *	Author: hyturing
 *	Created: 14 Jun 2022 01:40:50 IST
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
	
	int n; cin >> n;

	vector<int> dp(n+1, 0);

	for (int i = 1; i <= n; i++) {
		int mi = INT_MAX;

		int num = i;
		while (num > 0) {
			int k = num%10; num /= 10;
			if (k == 0) continue;
			mi = min(mi, dp[i-k]);
		}

		dp[i] = mi+1;
	}

	cout << dp[n];

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
