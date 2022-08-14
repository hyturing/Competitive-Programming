/**
 *	Author: hyturing
 *	Created: 16 Jun 2022 20:01:44 IST
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
	ll arr[n];
	for (auto &x: arr) cin >> x;

	for (int i = 1; i < n; i++) {
		arr[i] += arr[i-1];
	}

	if (arr[n-1] != 0) {
		cout << "No\n";
		return;
	}
	
	for (auto x: arr) {
		if (x < 0) {
			cout << "No\n";
			return;
		}
	}

	while (n > 0 and arr[n-1] == 0) n--;

	for (int i = 0; i < n; i++) {
		if (arr[i] == 0) {
			cout << "No\n";
			return;
		}
	}

	cout << "Yes\n";

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
