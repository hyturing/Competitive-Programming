/**
 *	Author: hyturing
 *	Created: 27 Mar 2022 10:12:36 IST
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
	
	int n, m, k, q;
	cin >> n >> m >> k >> q;

	vector<pair<int,int>> v(q);
	for (auto &x: v) cin >> x.first >> x.second;

	set<int> r, c;
	int cnt = 0;

	for (int i = q-1; i >= 0; i--) {
		int ri = v[i].first, ci = v[i].second;

		if ((c.size() == m or r.count(ri)) and (r.size() == n or c.count(ci))) continue;
		cnt++;
		r.insert(ri);
		c.insert(ci);
	}

	int ans = 1;

	while (cnt > 0) {

		if (cnt&1) {
			ans = (k*ans)%MM;
		}

		k = (k*k)%MM;

		cnt >>= 1;
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
