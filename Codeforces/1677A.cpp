/**
 *	Author: hyturing
 *	Created: 28 Jun 2022 14:40:07 IST
**/

#include <bits/stdc++.h>
using namespace std; 

#define sz(x) ((int)(x).size())

const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const long long INF = 1e18;

void solve() {

	// code here
	
	int n; cin >> n;
	int p[n];
	for (auto &x: p) cin >> x;

	vector<pair<int,int>> ac, bd;

	for (int i = 0; i < n; i++) {
		for (int j = i+2; j < n; j++) {
			if (p[j] > p[i]) {
				ac.push_back({i,j});
			}
		}
	}

	for (int i = 1; i < n; i++) {
		for (int j = i+2; j < n; j++) {
			if (p[j] < p[i]) {
				bd.push_back({i,j});
			}
		}
	}

	int ans = 0;
	int n1 = sz(ac), n2 = sz(bd);

	int i = 0, j = 0;

	// for (auto x: ac) cout << x.first << x.second << " "; cout << endl;
	// for (auto x: bd) cout << x.first << x.second << " "; cout << endl;

	// int prev = 0;
	// bool ok = false;

	// while (i < n1 and j < n2) {
	// 	int a = ac[i].first, c = ac[i].second;
	// 	int b = bd[j].first, d = bd[j].second;

	// 	if (b > a) {
	// 		if (b < c) {
	// 			if (d > c) {
	// 				ans++;
	// 				j++;
	// 			}
	// 			else {
	// 				j++;
	// 			}
	// 		}
	// 		else {
	// 			i++;
	// 		}
	// 	}
	// 	else {
	// 		j++;
	// 	}
	// }

	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < n2; j++) {
			int a = ac[i].first, c = ac[i].second;
			int b = bd[j].first, d = bd[j].second;

			if (b > a and b < c and d > c) ans++;
		}
	}

	cout << ans << "\n";

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
