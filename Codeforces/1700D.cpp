/**
 *	Author: hyturing
 *	Created: 25 Jun 2022 02:01:37 IST
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

	int arr[n];
	long long sum = 0; 
	for (auto &x: arr) {
		cin >> x;
		// sum += x;
	}

	int r = 1e9+2, l = 0, mid;
	long long min_time = 0;

	// using dp
	for (int i = 0; i < n; i++) {
		sum += arr[i];

		min_time = max(min_time, (sum+i)/(i+1LL));
	}

	// using binary search
	
	// while (l < r) {
	// 	mid = r - (r-l)/2;

	// 	bool ok = true;

	// 	long long extra = mid-arr[0];
	// 	for (int i = 1; i < n; i++) {
	// 		if (extra < 0) {
	// 			ok = false;
	// 			break;
	// 		}

	// 		extra += mid;

	// 		extra -= arr[i];
	// 	}

	// 	if (ok) {
	// 		min_time = mid;
	// 		r = mid-1;
	// 	}
	// 	else {
	// 		l = mid;
	// 	}
	// }

	int q; cin >> q;
	while (q--) {
		int x; cin >> x;

		if (x < min_time) cout << -1 << "\n";
		else {
			cout << (sum+x-1)/x << "\n";
		}
	}

	return;
}

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int tc = 1;
	// cin >> tc;
	
	for (int i = 1; i <= tc; i++) {
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
