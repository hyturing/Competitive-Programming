/**
 *	Author: hyturing
 *	Created: 03 Apr 2022 10:39:57 IST
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

	vector<vector<char>> v(n, vector<char>(n));

	int cnt = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) cin >> v[i][j];
		cnt += count(v[i].begin(), v[i].end(), '1');
	}

	int mx = 0;

	for (int i = 0; i < n; i++) {
		int res = 0;

		for (int j = 0; j < n; j++) {
			res += (v[j][(i+j)%n] == '1' ? 1 : 0);
		}

		mx = max(res, mx);
	}

	cout << cnt-mx+n-mx << "\n";

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
