/**
 *	Author: hyturing
 *	Created: 21 May 2022 23:50:41 IST
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
	
	int n, k;
	cin >> n >> k;

	vector<int> a(n);

	for (auto &x: a) cin >> x;

	int need = k + (n-k)/2+((n-k)%2);

	auto f = a;

	sort(f.begin(), f.end());

	int x = -1, y = n+1;

	for (int i = 0; i <= n-need; i++) {
		int L = f[i];
		int R = f[i+need-1];

		if (R-L < y-x) {
			x = L, y = R;
		}
	}

	cout << x << " " << y << "\n";

	int cnt = 0, curr = 0, in = 0, mx = 0;

	for (int i = 0; i < n; i++) {
		curr += (a[i] >= x and a[i] <= y ? 1 : -1);

		if (curr > mx) {
			mx = curr;

			if (curr >= 1 and curr <= k-1) {
				cout << in+1 << " " << i+1 << "\n";
				in = i+1;
			}
		}
	}

	cout << in+1 << " " << n << "\n";

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
