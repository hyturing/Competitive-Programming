/**
 *	Author: hyturing
 *	Created: 02 Apr 2022 17:43:50 IST
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
	
	double x, y;
	cin >> x >> y;

	if (x == 0 or y == 0) {
		if (x == 0) {
			cout << 0 << " " << 1;
		}
		else {
			cout << 1 << " " << 0;
		}

		return;
	}

	double k = y/x;

	double xp = 1/(1+k*k);

	// cout << xp << endl;

	xp = sqrt(xp);

	double yp = sqrt(1-(xp*xp));

	cout << fixed << setprecision(10);

	cout << xp << " " << yp << "\n";

	// cout << xp*xp+yp*yp << endl;

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
