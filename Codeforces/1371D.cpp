/**
 *	Author: hyturing
 *	Created: 04 Jun 2022 04:43:08 IST
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
	
	int n, k;
	cin >> n >> k;

	if (k%n == 0) {
		cout << 0 << "\n";
	}
	else {
		cout << 2 << "\n";
	}

	int grid[n][n];

	memset(grid, 0, sizeof(grid));

	int p = 0, q = 0;

	for (int i = 0; i < k; i++) {
		grid[p][q] = 1;
		p = p+1; q = (q+1)%n;

		if (p == n) {
			p = 0;
			q = (q+1)%n;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << grid[i][j];
		}
		cout << "\n";
	}

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
