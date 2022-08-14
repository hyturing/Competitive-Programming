/**
 *	Author: hyturing
 *	Created: 13 Jun 2022 00:29:01 IST
**/

#include <bits/stdc++.h>
using namespace std; 

#define ll long long
const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const ll INF = 1e18;

void solve() {

	// code here
	
	int n; cin >> n;

	vector<int> a(n), b(n);
	for (auto &x: a) cin >> x;
	for (auto &x: b) cin >> x;

	multiset<int> s;

	int i = n-1, j = n-1;

	while (i >= 0) {

		if (b[j] == b[j-1] and j > 0) {
			s.insert(b[j]);
			j--;
			continue;
		}
		if (a[i] == b[j] and j >= 0) {
			i--; j--;
			continue;
		}

		if (s.find(a[i]) == s.end()) {
			cout << "NO\n";
			return;
		}
		else {
			auto it = s.find(a[i]);
			s.erase(it);
			i--;
		}
	}



	if (i < 0 and j < 0) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}

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
