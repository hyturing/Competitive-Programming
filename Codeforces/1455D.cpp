/**
 *	Author: hyturing
 *	Created: 03 Jun 2022 21:44:26 IST
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
	
	int n, x;
	cin >> n >> x;

	vector<int> a(n);
	for (auto &x: a) cin >> x;

	int ans = 0;

	while (true) {
		int x_ = x;

		if (is_sorted(a.begin(), a.end())) {
			break;
		}

		for (int i = 0; i < n; i++) {
			if (a[i] > x) {
				swap(a[i], x);
				ans++;
				break;
			}
		}

		if (x_ == x) {
			cout << -1 << "\n";
			return;
		}
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
