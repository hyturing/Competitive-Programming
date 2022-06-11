/**
 *	Author: hyturing
 *	Created: 04 Jun 2022 03:20:47 IST
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
	
	int n, m;
	cin >> n >> m;

	int a[n], b[m];
	for (auto &x: a) cin >> x;
	for (auto &x: b) cin >> x;

	

	for (int ans = 0; ans < 1<<9; ans++) {
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (((a[i]&b[j])|ans) == ans) {
					cnt++;
					break;
				}
			}
		}

		if (cnt == n) {
			cout << ans << "\n";
			return;
		}
	}

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
