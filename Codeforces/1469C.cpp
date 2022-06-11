/**
 *	Author: hyturing
 *	Created: 18 May 2022 23:33:55 IST
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
	
	int n, k;
	cin >> n >> k;

	vector<int> h(n);

	for (auto &x: h) cin >> x;

	int r, l;

	bool ok = true;

	for (int i = 0; i < n; i++) {
		if (i == 0) {
			r = l = h[0];
		}
		else {
			l = max(l - k + 1, h[i]);
			r = min(r + k - 1, h[i] + k - 1);
		}

		if (l > r) ok = false;

		if ( i == n-1 and l != h[n-1]) ok = false;
	}

	if (ok) cout << "YES\n";
	else cout << "NO\n";

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
