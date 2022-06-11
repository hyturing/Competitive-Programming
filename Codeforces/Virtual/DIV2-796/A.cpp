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
	
	int x;
	cin >> x;

	bitset<31> bit(x), ans(0);

	for (int i = 0; i < 31; i++) {
		if (bit[i] == 1) {
			ans[i] = 1;
			break;
		}	
	}

	bool ok = true;

	for (int i = 0; i < 31; i++) {
		if (bit[i] == 1 and ans[i] == 0) {
			ok = false;
			break;
		}
	}

	if (ok) {
		for (int i = 0; i < 31; i++) {
			if (ans[i] == 0) {
				ans[i] = 1;
				break;
			}
		}
	}

	cout << ans.to_ulong() << "\n";

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
