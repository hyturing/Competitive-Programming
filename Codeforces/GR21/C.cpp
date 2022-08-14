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
	long long m; cin >> m;

	long long a[n]; 
	for (int i = 0; i < n; i++) cin >> a[i];

	int k; cin >> k;
	long long b[k];
	for (int i = 0; i < k; i++) cin >> b[i];	

	if (a == b) {
		cout << "Yes\n";
		return;
	}

	vector<pair<long long, long long>> x;
	
	long long fr = 0, se = 0;
	for (int i = 0; i < n; i++) {
		long long t = a[i];
		while (t%m == 0) {
			t /= m;
		} 

		if (t == a[i]) {
			if (fr == 0 and se == 0) {
				fr = t; se = 1;
				continue;
			}

			if (fr == t) {
				se++;
			}
			else {
				x.push_back({fr, se});
				fr = t; se = 1;
			}

			continue;
		}

		if (fr == 0 and se == 0) {
			fr = t; se = a[i]/t;
			continue;
		}

		if (fr == t) {
			se += a[i]/t;
		}
		else {
			x.push_back({fr, se});
			fr = t; se = a[i]/t;
		}
	}

	x.push_back({fr, se});

	vector<pair<long long, long long>> y;

	fr = 0, se = 0;
	for (int i = 0; i < k; i++) {
		long long t = b[i];
		while (t%m == 0) {
			t /= m;
		} 

		if (t == b[i]) {
			if (fr == 0 and se == 0) {
				fr = t; se = 1;
				continue;
			}

			if (fr == t) {
				se++;
			}
			else {
				y.push_back({fr, se});
				fr = t; se = 1;
			}

			continue;
		}

		if (fr == 0 and se == 0) {
			fr = t; se = b[i]/t;
			continue;
		}

		if (fr == t) {
			se += b[i]/t;
		}
		else {
			y.push_back({fr, se});
			fr = t; se = b[i]/t;
		}
	}

	y.push_back({fr, se});

	// for (auto i: x) cout << i.first << " " << i.second << endl; cout << endl;
	// for (auto i: y) cout << i.first << " " << i.second << endl;

	if (x == y) {
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
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
