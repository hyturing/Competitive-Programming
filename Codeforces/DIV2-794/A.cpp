/**
 *	Author: hyturing
 *	Created: 25 May 2022 23:04:55 IST
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

	int a[n];

	int sum = 0;

	for (auto &x: a) {
		cin >> x;
		sum += x;
	}	

	for (int i = 0; i < n; i++) {
		if ((sum-a[i])%(n-1) == 0 and (sum-a[i])/(n-1) == a[i]) {
			// cout << i << endl;
			cout << "Yes\n";
			return;
		}
	}

	cout << "No\n";

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
