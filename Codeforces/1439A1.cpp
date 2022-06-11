/**
 *	Author: hyturing
 *	Created: 11 Apr 2022 21:37:12 IST
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
	
	int n, m;
	cin >> n >> m;

	char a[n][m];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) cin >> a[i][j];
	}

	vector<array<int,6>> ans;

	for (int i = 0; i < n-1; i++) {
		if (m&1) {

		}
		else {
			for (int j = 0; j < m; j += 2) {
				int cnt = 0;
				vector<int> pos;
				if (a[i][j] == '1') {
					pos.push_back(i+1), pos.push_back(j+1);
				}
				if (a[i][j+1] == '1') {
					pos.push_back(i+1), pos.push_back(j+2);
				}
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
