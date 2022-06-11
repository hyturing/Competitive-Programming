/**
 *	Author: hyturing
 *	Created: 02 Apr 2022 22:29:53 IST
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
	
	int l, r;
	cin >> l >> r;

	int n = r+1;
	int a[n];

	for (auto &x: a) cin >> x;

	int bit[n+1][17];

	memset(bit, 0, sizeof(bit));

	for (int i = 0; i < n; i++) {
		int j = 16;

		while (a[i] > 0) {
			if (a[i]&1) {
				bit[i][j] = 1;
			}
			a[i] /= 2;
			j--;	
		} 
	}

	for (int i = 0; i < 17; i++) {
		
		int cnt = 0;

		for (int j = 0; j < n; j++) {
			if (bit[j][i] == 1) cnt++;
		}

		if (cnt > n-cnt) bit[n][i] = 1;
		else bit[n][i] = 0;
	}

	int ans = 0, prod = 1;

	for (int i = 16; i >= 0; i--) {
		ans += bit[n][i]*prod;
		prod *= 2;
	}

	cout << ans << "\n";

	return;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tc = 1;
	cin >> tc;
	
	for (int i = 1; i <= tc; i++) {
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
