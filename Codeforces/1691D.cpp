/**
 *	Author: hyturing
 *	Created: 09 Jun 2022 18:24:38 IST
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

	for (int i = 0; i < n-1; i++) {
		if (max(a[i],a[i+1]) < a[i]+a[i+1]) {
			cout << "NO\n";
			return;
		}
	}

	for (int i = 0; i < n-2; i++) {
		if (max(a[i],max(a[i+1],a[i+2])) < a[i]+a[i+1]+a[i+2]) {
			cout << "NO\n";
			return;
		}
	}

	cout << "YES\n";

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
