/**
 *	Author: hyturing
 *	Created: 31 Mar 2022 20:09:06 IST
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

	bool ok = false;

	sort(a, a+n);

	if (n == 1) {
		if (a[0] > 1) {
			cout << "NO\n";
		}
		else cout << "YES\n";

		return;
	}

	if (a[n-1]-a[n-2] <= 1) ok = true;
	else ok = false;

	if (ok) cout << "YES\n";
	else cout << "NO\n";

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
