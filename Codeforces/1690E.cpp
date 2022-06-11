/**
 *	Author: hyturing
 *	Created: 11 Jun 2022 17:40:01 IST
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
	
	int n, k; cin >> n >> k;

	vector<int> a(n);
	for (auto &x: a) cin >> x;

	int ans = 0;
	for (int i = 0; i < n; i++) {
		ans += a[i]/k;
		a[i] %= k;
	}

	multiset<int> s;
	for (auto x: a) s.insert(x);

	// for (auto x: s) cout << x << " "; cout << endl;

	while (!s.empty()) {
		auto i = s.end(); i--;
		int x = *i;
		s.erase(i);

		auto j = s.lower_bound(k-x);
		if (j == s.end()) break;
		ans++;
		s.erase(j);
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
