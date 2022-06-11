/**
 *	Author: hyturing
 *	Created: 05 Jun 2022 16:28:20 IST
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
	
	int n, m, k;
	cin >> n >> m >> k;

	vector<pair<int,int>> a(k), b(k);
	for (auto &x: a) cin >> x.first >> x.second;
	for (auto &x: b) cin >> x.first >> x.second;

	vector<char> ans;

	for (int i = 1; i < m; i++) ans.push_back('L');
	for (int i = 1; i < n; i++) ans.push_back('U');

	bool ok = true; // true means right and false means left;

	for (int i = 0; i < n; i++) {
		if (ok) {
			for (int i = 1; i < m; i++) ans.push_back('R');
			if (i < n-1) ans.push_back('D');
			ok = false;
		}
		else {
			for (int i = 1; i < m; i++) ans.push_back('L');
			if (i < n-1) ans.push_back('D');
			ok = true;
		}
	}

	cout << ans.size() << "\n";
	for (auto x: ans) cout << x; cout << "\n";

	return;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tc = 1;
	// cin >> tc;
	
	for (int i = 1; i <= tc; i++) {
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
