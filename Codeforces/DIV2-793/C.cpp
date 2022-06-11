/**
 *	Author: hyturing
 *	Created: 22 May 2022 21:24:23 IST
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

	int a[n];

	for (auto &x: a) cin >> x;

	map<int,int> f;

	for (int i = 0; i < n; i++) {
		if (f.find(a[i]) == f.end()) {
			f[a[i]]++;
		}
		else if (f[a[i]] == 1) {
			f[a[i]]++;
		}
	}

	int ans = 0, cnt = 0;

	for (auto x: f) {
		if (x.second == 2) ans++;
		else {
			cnt++;
		}
	}

	ans += cnt/2;

	if (cnt&1) {
		auto it = f.end();
		it--;

		if (it->second == 1 or f.begin()->second) ans++;
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
