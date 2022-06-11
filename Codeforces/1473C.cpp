/**
 *	Author: hyturing
 *	Created: 08 Apr 2022 13:35:00 IST
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

	int ans[k] = {0}, a[n];

	for (int i = 0; i < k; i++) {
		a[i] = i+1;
	}

	int num = k-1;
	for (int i = k; i < n; i++) {
		a[i] = num;
		num--;
	}

	// for (auto x: a) cout << x << " "; cout << endl;

	int i = n-1, j = k-1;

	while (j >= 0) {
		if (a[i] == k) {
			ans[j] = a[i];
			break;
		}

		ans[j] = a[i];
		j--;
		i--;
	}

	for (int it = 0; it < k; it++) {
		if (ans[it] == 0) ans[it] = it+1;
	}

	for (auto x: ans) cout << x << " ";
	cout << "\n";

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
