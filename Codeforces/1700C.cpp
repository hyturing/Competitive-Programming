/**
 *	Author: hyturing
 *	Created: 25 Jun 2022 05:31:46 IST
**/

#include <bits/stdc++.h>
using namespace std; 

#define i64 long long
const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const long long INF = 1e18;
     
void solve() {

	// code here
	
	int n; cin >> n;

	vector<i64> a(n); 
	for (auto &x: a) cin >> x;

	i64 curh = a[0], ans = 0;

	for (int i = 0; i < n-1; i++) {
		ans += abs(a[i]-a[i+1]);

		if (a[i] > a[i+1]) {
			curh -= abs(a[i]-a[i+1]);
		}
	}

	cout << ans + abs(curh) << "\n";

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
