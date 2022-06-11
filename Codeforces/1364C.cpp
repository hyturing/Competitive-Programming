/**
 *	Author: hyturing
 *	Created: 04 Jun 2022 16:43:42 IST
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

	vector<int> a(n);
	for (auto &x: a) cin >> x;

	for (int i = 0; i < n; i++) {
		if (a[i] > i+1) {
			cout << -1 << "\n";
			return;
		}
	}

	vector<bool> used(N, 0);

	vector<int> ans(n, -1);

	for (int i = 1; i < n; i++) {
		if (a[i] != a[i-1]) {
			ans[i] = a[i-1];
			used[a[i-1]] = true;
		}
	}

	used[a[n-1]] = true;
	int m = 0;

	for (int i = 0; i < n; i++) {
		while (used[m]) m++;

		if (ans[i] == -1) {
			ans[i] = m;
			used[m] = true;
		}
	} 

	for (auto x: ans) cout << x << " "; cout << "\n";

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
