/**
 *	Author: hyturing
 *	Created: 03 Apr 2022 21:16:46 IST
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

	vector<vector<int>> v(m, vector<int>());

	for (int i = 0; i < m; i++) {
		int k;
		cin >> k;
		while (k--) {
			int x; cin >> x;
			v[i].push_back(x);
		}
	}

	vector<int> freq(n+1, 0);

	for (int i = 0; i < m; i++) {
		if (v[i].size() == 1) {
			freq[v[i][0]]++;
		}
	}

	for (auto x: freq) {
		if (x > m/2+m%2) {
			cout << "NO\n";
			return;
		}
	}

	cout << "YES\n";

	int ans[m] = {0};

	for (int i = 0; i < m; i++) {
		if (v[i].size() == 1) {
			ans[i] = v[i][0];
		}
	}

	for (int i = 0; i < m; i++) {
		if (ans[i] == 0) {
			for (auto x: v[i]) {
				if (freq[x]+1 <= m/2+m%2) {
					ans[i] = x;
					freq[x]++;
					break;
				}
			}
		}
	}

	for (auto x: ans) cout << x << " "; cout << "\n";

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
