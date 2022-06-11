/**
 *	Author: hyturing
 *	Created: 04 Jun 2022 01:40:48 IST
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

	vector<array<int, 2>> a;
	for (int i = 0; i < n; i++) {
		int x, y; cin >> x >> y;
		a.push_back({x, y});
	}

	int ans = 0;
	int mi = INF, index = -1;

	for (int i = 0; i < n; i++) {
		int x = a[(i+1)%n][0], y = a[i%n][1];
		if (mi > x - max(0LL, x-y)) {
			mi = x - max(0LL, x-y);
			index = (i+1)%n;
		}
	}

	int i = index, j = 0;

	while (j < n) {
		if (i == n) i = 0;
		if (a[i][0] > 0) ans += a[i][0];

		if (i == n-1) {
			a[0][0] -= a[n-1][1];
		}
		else {
			a[i+1][0] -= a[i][1];
		}

		i++;
		j++;
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
