/**
 *	Author: hyturing
 *	Created: 02 Apr 2022 17:32:58 IST
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
	
	int x[3], y[3];

	for (int i = 0; i < 3; i++) cin >> x[i] >> y[i];

	int xp, yp;

	if (x[0] == x[1]) xp = x[2];
	if (x[0] == x[2]) xp = x[1];
	if (x[1] == x[2]) xp = x[0];

	if (y[0] == y[1]) yp = y[2];
	if (y[0] == y[2]) yp = y[1];
	if (y[1] == y[2]) yp = y[0];

	cout << xp << " " << yp << "\n";


	return;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tc = 1;
	// cin >> tc;
	
	for (int i = 1; i <= tc; i++) {
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
