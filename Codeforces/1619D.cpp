/**
 *	Author: hyturing
 *	Created: 23 May 2022 18:42:18 IST
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
	
	int m, n;
	cin >> m >> n;

	vector<vector<int>> p(m, vector<int> (n));

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> p[i][j];
		}
	}

	int l = 1, r = MOD;
	int ans;


	while (l < r) {
		vector<bool> v(m, false);
		bool ok = false;

		int x = l + (r-l)/2;

		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if 
			}
		}

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
