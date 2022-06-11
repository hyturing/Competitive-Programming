/**
 *	Author: hyturing
 *	Created: 07 Jun 2022 23:40:16 IST
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
		cout << 1 << " " << 1 << "\n" << 0 << "\n";
		cout << 1 << " " << 1 << "\n" << 0 << "\n";
		cout << 1 << " " << 1 << "\n" << -a[0] << "\n";
	}
	else {
		cout << 1 << " " << 1 << "\n";
		cout << -a[0] << "\n";
		cout << 1 << " " << n << "\n";
		for (int i = 0; i < n; i++) {
			if (i == 0) {
				cout << 0 << " "; continue;
			}
			cout << -n*a[i] << " ";
		} 
		cout << "\n";
		cout << 2 << " " << n << "\n";
		for (int i = 1; i < n; i++) {
			cout << (n-1)*a[i] << " ";
		} 
		cout << "\n";
	}


	return;
}

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int tc = 1;
	// cin >> tc;
	
	for (int i = 1; i <= tc; i++) {
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
