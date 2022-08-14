/**
 *	Author: hyturing
 *	Created: 14 Jun 2022 00:38:47 IST
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

	vector<vector<char>> g(n+1, vector<char>(n+1, 0));
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> g[i][j];
		}
	}

	vector<vector<int>> dp(n+1, vector<int>(n+1, 0));

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == 1 and j == 1 and g[i][j] == '.') {
				dp[1][1] = 1;
				continue;
			}

			if (g[i][j] == '*') continue;

			int op1 = 0, op2 = 0;
			if (i > 1) op1 = (g[i-1][j] == '.') ? dp[i-1][j] : 0;
			if (j > 1) op2 = (g[i][j-1] == '.') ? dp[i][j-1] : 0;

			dp[i][j] = (op1+op2)%MOD;
		}
	}

	// for (int i = 1; i <= n; i++) {
	// 	for (int j = 1; j <= n; j++) {
	// 		cout << dp[i][j] << " " ;
	// 	} cout << endl;
	// }

	cout << dp[n][n] << "\n";

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
