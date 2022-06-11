/**
 *	Author: hyturing
 *	Created: 31 Mar 2022 16:34:24 IST
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
	
	int n;
	cin >> n;

	int c[n];

	for (auto &x: c) cin >> x;

	if (count(c, c+n, 1) == 1) {
		int p;

		for (int i = 0; i < n; i++) {
			if (c[i] == 1) p = i;
		}

		rotate(c, c+p, c+n);

		// for (auto x: c) cout << x << " "; cout << endl;

		for (int i = 1; i < n; i++) {
			if (c[i]-c[i-1] > 1) {
				cout << "NO\n";
				return;
			}
		}

		cout << "YES\n";
		return;
	}

	cout << "NO\n";

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
