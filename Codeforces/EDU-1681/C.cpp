/**
 *	Author: hyturing
 *	Created: 23 May 2022 20:24:21 IST
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

	vector<int> a(n), b(n);
	for (auto &x: a) cin >> x;
	for (auto &x: b) cin >> x;

	vector<pair<int,int>> ans;

	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if (a[i] >= a[j] and b[i] >= b[j]) {
				swap(a[i], a[j]);
				swap(b[i], b[j]);
				ans.push_back({i+1,j+1});
			}
		}	
	}

	for (int i = 1; i < n; i++) {
		if (a[i] < a[i-1]) {
			cout << -1 << "\n";
			return;
		}
	}

	for (int i = 1; i < n; i++) {
		if (b[i] < b[i-1]) {
			cout << -1 << "\n";
			return;
		}
	}

	cout << ans.size() << "\n";

	for (auto x: ans) {
		cout << x.first << " " << x.second << "\n";
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
