/**
 *	Author: hyturing
 *	Created: 20 May 2022 13:39:47 IST
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

	int ans = INT_MAX;

	int k = n, cnt = 0;

	while (n > 0) {
		if (n%10 < ans) {
			ans = n%10;
		}

		n /= 10;

		cnt++;
	}

	if (cnt == 2) {
		cout << k%10 << "\n";
		return;
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
