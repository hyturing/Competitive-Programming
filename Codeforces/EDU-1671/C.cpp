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
	
	int n, x;
	cin >> n  >> x;

	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}	

	sort(a, a+n);

	int cnt = 0;

	if (a[0] > x) {
		cout << 0 << "\n";
		return;
	}

	// cnt += x-a[0]+1;
	// x -= a[0];

	for (int i = 0; i < n; i++) {
		if (x < a[i]) break;

		cnt += (x-a[i])/(i+1)+1;

		x -= a[i];
	}

	cout << cnt << "\n";

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
