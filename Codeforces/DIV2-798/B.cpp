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
	
	int n;
	cin >> n;

	vector<int> a(n);
	for (auto &x: a) cin >> x;

	if (n == 1) {
		cout << -1 << "\n";
		return;
	}

	vector<int> b(n);
	for (int i = 0; i < n; i++) b[i] = i+1;

	for (int i = 0; i < n; i++) {
		if (i == n-1) {
			if (a[i] == b[i]) {
				swap(b[i], b[i-1]);
			}
			continue;
		}
		if (a[i] == b[i]) swap(b[i],b[i+1]);
	}

	for (auto x: b) cout << x << " "; cout << "\n";

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
