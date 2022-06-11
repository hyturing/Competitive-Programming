/**
 *	Author: hyturing
 *	Created: 10 Apr 2022 17:49:48 IST
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
	
	int p, q;

	cin >> p >> q;

	if (p%q == 0) {

		map<int,int> f;

		for (int i = 2; i*i <= q; i++) {
			while (q%i == 0) {
				f[i]++;
				q /= i;
			}
		}

		if (q > 1) f[q]++;

		int ans = 1;

		for (auto x: f) {
			int fr = x.first;
			int sc = x.second;

			int num = p;

			while (num % fr == 0) {
				num /= fr;
			}

			for (int i = 0; i < sc-1; i++) {
				num *= fr;
			}

			ans = max(ans, num);
		}

		cout << ans << "\n";

	}
	else {
		cout << p << "\n";
	}

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
