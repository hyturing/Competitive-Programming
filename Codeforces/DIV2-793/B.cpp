/**
 *	Author: hyturing
 *	Created: 22 May 2022 20:22:22 IST
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

	vector<int> p(n);

	// auto a = p;

	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}

	bool ok = true;
	int ans;

	for (int i = 0; i < n; i++) {
		if (p[i] != i) {
			if (ok) {
				ans = i;
				ok = false;
			}
			else {
				ans &= i;
			}
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
