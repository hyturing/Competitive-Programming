/**
 *	Author: hyturing
 *	Created: 
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

	vector<int> even, odd;
	for (int i = 0; i < n; i++) {
		int t; cin >> t;
		if (t&1) odd.push_back(t);
		else even.push_back(t);
	}

	if (odd.size() >= 1) {
		cout << even.size() << "\n";
		return;
	}

	for (auto &x: even) {
		int cnt = 0;
		while (true) {
			if (x%2 == 0) {
				cnt++;
				x /= 2;
			}
			else break;	
		}

		x = cnt;
	}

	// for (auto x: even) cout << x << " "; cout << endl;

	int ans = (*min_element(even.begin(), even.end())) + even.size()-1;

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
