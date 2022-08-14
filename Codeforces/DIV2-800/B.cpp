/**
 *	Author: hyturing
 *	Created: 16 Jun 2022 20:01:34 IST
**/

#include <bits/stdc++.h>
using namespace std; 

#define ll long long
const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const ll INF = 1e18;

void solve() {

	// code here
	
	int n; cin >> n;
	string s; cin >> s;

	ll ans = n;

	for (int i = 1; i < n; i++) {
		if (s[i] != s[i-1]) ans += i;
	}

	cout << ans << "\n";

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
