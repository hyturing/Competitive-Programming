/**
 *	Author: hyturing
 *	Created: 
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

	vector<int> a(n), b(n), c(m);

	for (auto &x: a) cin >> x;
	for (auto &x: b) cin >> x;
	for (auto &x: c) cin >> x;

	vector<vector<int>> need(n+1), want(n+1);

	for (int i = 0; i < n; i++) {
		want[b[i]].push_back(i);

		if (a[i] != b[i]) {
			need[b[i]].push_back(i);
		}
	}

	vector<int> ans(m, -1);

	if (want[c.back()].empty()) {
		cout << "NO\n";
		return;
	}

	for (int i = m-1; i >= 0; i--) {
		if (!need[c[i]].empty()) {
			ans[i] = need[c[i]].back();
			need[c[i]].pop_back();
		}
		else if (!want[c[i]].empty()) {
			ans[i] = want[c[i]].back();
		}
		else {
			ans[i] = ans.back();
		}
	}

	for (int i = 0; i <= n; i++) {
		if (!need[i].empty()) {
			cout << "NO\n";
			return;
		}
	}

	cout << "YES\n";
	for (auto x: ans) cout << x+1 << " "; cout << "\n";

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
