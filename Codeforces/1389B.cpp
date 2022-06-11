/**
 *	Author: hyturing
 *	Created: 31 May 2022 04:54:05 IST
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
	
	int n, k, z;
	cin >> n >> k >> z;

	vector<int> a(n+1);
	for (int i = 1; i <= n; i++) cin >> a[i];

	int ans = 0;

	for (int i = 0; i <= z; i++) {
		int maxSum = -1;
		int pos = k - 2*i + 1;

		if (pos < 1) continue;

		for (int j = 1; j <= pos; j++) {
			if (a[j]+a[j+1] > maxSum) {
				maxSum = a[j]+a[j+1];
			}
		}

		int sum = 0;

		for (int j = 1; j <= pos; j++) {
			sum += a[j];
		}
		

		ans = max(ans, sum + maxSum * i);
	}

	cout << ans << "\n";

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
