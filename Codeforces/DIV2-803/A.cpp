/**
 *	Author: hyturing
 *	Created: 
**/

#include <bits/stdc++.h>
using namespace std; 

const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const long long INF = 1e18;

void solve() {

	// code here
	
	int n; cin >> n;
	int a[n];
	for (auto &x: a) cin >> x;

	for (int i = 0; i < n; i++) {
		int x = 0;
		for (int j = 0; j < n; j++) {
			if (j == i) continue;
			x = x^a[j];
		}

		if (x == a[i]) {
			cout << x << "\n";
			return;
		}
	}

	return;
}

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int tc = 1;
	cin >> tc;
	
	for (int i = 1; i <= tc; i++) {
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
