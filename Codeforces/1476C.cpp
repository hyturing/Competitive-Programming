/**
 *	Author: hyturing
 *	Created: 16 May 2022 22:54:12 IST
**/

#include <bits/stdc++.h>
using namespace std; 

#define int long long
const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const int INF = 1e18;

int a[N], b[N], c[N];

void solve() {

	// code here
	
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) cin >> c[i];
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) cin >> b[i];

	vector<int> dp(n);

	dp[1] = abs(a[1]-b[1])+c[1]-1+2;

	for (int i = 2; i < n; i++) {
		if (a[i] == b[i]) {
			dp[i] = c[i]-1+2;
		}
		else {
			dp[i] = dp[i-1]-abs(a[i]-b[i])+2+c[i]-1;
		}

		dp[i] = max(dp[i], abs(a[i]-b[i])+c[i]-1+2);
	}

	cout << *max_element(dp.begin(), dp.end()) << "\n";

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
