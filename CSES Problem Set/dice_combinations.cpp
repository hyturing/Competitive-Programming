/**
 *	Author: hyturing
 *	Created: 12 Jun 2022 01:24:05 IST
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
	
	int n; cin >> n;
	vector<int> dp(n+1, 0);
 
	dp[0] = 1;
 
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 6; j++) {
			if (j > i) break;
			dp[i] = (dp[i]+dp[i-j])%MOD;
		}
	}
 
	cout << dp[n]%MOD << "\n";
 
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