/**
 *	Author: hyturing
 *	Created: 14 Jun 2022 02:46:14 IST
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
 
	vector<int> h(n+1), s(n+1);
	for (int i = 1; i <= n; i++) cin >> h[i];
	for (int i = 1; i <= n; i++) cin >> s[i];
 
	vector<vector<int>> dp(n+1, vector<int>(x+1, 0));
 
	for (int i = 1; i <= n; i++) {
 
		for (int money = 0; money <= x; money++) {
 
			if (money == 0) {
				dp[i][money] = 0;
			}
			else {
				int op1 = (i == 1) ? 0 : dp[i-1][money];
				int op2 = (money < h[i]) ? 0 : s[i] + dp[i-1][money - h[i]];
 
				dp[i][money] = max(op1,op2);
			}
		}
	}
 
	cout << dp[n][x];
 
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