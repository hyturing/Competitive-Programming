/**
 *	Author: hyturing
 *	Created: 
**/

#include <bits/stdc++.h>
using namespace std; 

const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const long long INF = 1e18;

void solve() {

	// code here
	
	int n; cin >> n;

	long long arr[n];
	for (auto &x: arr) cin >> x;

	vector<int> sz;
	int cnt = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] == 0) {
			if (cnt == 0) continue;
			sz.push_back(cnt);
			cnt = 0;
		}
		else {
			cnt++;
		}
	}

	if (cnt != 0) sz.push_back(cnt);

	int ans = sz.size();

	cout << min(ans, 2) << "\n";

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
