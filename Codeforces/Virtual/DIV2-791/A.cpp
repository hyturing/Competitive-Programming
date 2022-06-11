/**
 *	Author: hyturing
 *	Created: 24 May 2022 22:47:37 IST
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

	if (n&1 or n < 4) {
		cout << -1 << "\n";

		return;
	}

	if (n%6 == 0) {
		cout << n/6 << " ";
	}
	else {
		cout << n/6+1 << " ";
	}

	cout << n/4 << "\n";

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
