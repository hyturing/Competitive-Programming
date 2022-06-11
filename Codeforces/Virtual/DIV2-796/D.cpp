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
	
	int n, k;
	cin >> n >> k;

	vector<int> a(n+1, 0);
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		a[i] += a[i-1];
	}

	if (k < n) {
		int sum = -1;
		for (int i = 1; i <= n-k+1; i++) {
			sum = max(sum, a[i+k-1]-a[i-1]);
		}

		cout << sum + (k*k-k)/2 << "\n";
	}
	else {
		cout << a[n] + n*k - (n*n+n)/2 << "\n";
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
