/**
 *	Author: hyturing
 *	Created: 06 Jun 2022 04:02:58 IST
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

	vector<int> a(n), b(m);
	for (auto &x: a) cin >> x;
	for (auto &x: b) cin >> x;

	sort(a.begin(), a.end());

	if (n < 2) {
		int G;

		for (int i = 0; i < m; i++) {
			for(int j = 0; j < n; j++) {
				if (j == 0) G = a[j]+b[i];
			}

			cout << G << " ";
		}
	}
	else {
		int G = a[1]-a[0];

		for (int i = 2; i < n; i++) {
			G = __gcd(G, a[i]-a[1]);
		}

		for (int i = 0; i < m; i++) {
			cout << __gcd(b[i]+a[0], G) << " ";
		}
	}

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
