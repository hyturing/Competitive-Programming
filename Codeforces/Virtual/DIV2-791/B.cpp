/**
 *	Author: hyturing
 *	Created: 24 May 2022 23:18:08 IST
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
	
	int n, q;
	cin >> n >> q;

	vector<int> a(n);

	int sum = 0;

	for (auto &x: a) {
		cin >> x;
		sum += x;
	}

	int curr = 0;

	set<int> s;

	bool ok = true;

	while (q--) {
		int ty;
		cin >> ty;

		if (ty == 1) {
			int i, x;
			cin >> i >> x;
			i--;
			if (ok) {
				sum = sum - a[i] + x;
				a[i] = x;
				cout << sum << "\n";
			}
			else {
				if (s.find(i) == s.end()) {
					a[i] = curr;
				}

				sum = sum - a[i] + x;
				a[i] = x;
				cout << sum << "\n";

				s.insert(i);
			}
		} 
		else {
			int x;
			cin >> x;

			ok = false;

			curr = x;

			sum = n*x;
			s.clear();

			cout << sum << "\n";
		}
	}

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
