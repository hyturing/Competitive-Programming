/**
 *	Author: hyturing
 *	Created: 16 Jun 2022 20:01:24 IST
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
	
	int a, b; cin >> a >> b;

	string s = "";

	if (a > b) {
		while (a > 0 or b > 0) {
			if (a != 0) {
				s += '0';
				a--;
			}
			if (b != 0) {
				s += '1';
				b--;
			}
		}
	}
	else {
		while (a > 0 or b > 0) {
			if (b != 0) {
				s += '1';
				b--;
			}
			if (a != 0) {
				s += '0';
				a--;
			}
		}
	}

	cout << s << "\n";

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
