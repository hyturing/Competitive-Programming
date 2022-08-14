/**
 *	Author: hyturing
 *	Created: 18 Jun 2022 01:13:10 IST
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
	
	int n, k; cin >> n >> k; k++;
	vector<int> a(n);
	for (auto &x: a) cin >> x;

	vector<vector<int>> v;
	vector<int> t;

	for (int i = 0; i < n; i++) {
		if (i == 0) {
			t.push_back(a[i]);
			continue;
		}

		if (a[i]*2 <= a[i-1]) {
			v.push_back(t);
			t.clear();
		}

		t.push_back(a[i]);

		if (i == n-1) {
			v.push_back(t);
		}
	}

	int ans = 0;

	for (auto x: v) {
		int len = x.size();

		if (k > len) continue;

		ans += len-k+1;
	}

	cout << ans << "\n";

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
