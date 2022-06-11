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
	cin >> n >> x;

	int a[n], curr = 0, mi = INF, mx = -INF;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		mi = min(a[i], mi);
		mx = max(a[i], mx);
	}

	for (int i = 0; i < n-1; i++) {
		curr += abs(a[i]-a[i+1]);
	}

	int ans = curr;

	// cout << ans << endl;

	if (1 >= mi and x <= mx) {
		cout << ans << "\n";
		return;
	}

	if (a[0] == mi or a[n-1] == mi) {
		ans += mi-1;
	}
	else {
		ans += min(2*(mi-1), min(a[n-1], a[0])-1);
	}

	if (x > mx) {
		if (a[0] == mx or a[n-1] == mx) {
			ans += abs(mx-x);
		}
		else {
			ans += min(2*(x-mx), x-max(a[0], a[n-1]));
		}
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
