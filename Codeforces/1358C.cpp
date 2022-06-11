/**
 *	Author: hyturing
 *	Created: 03 Jun 2022 03:49:47 IST
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
	
	int x1, x2, y1, y2;
	cin >> x1 >> y1 >> x2 >> y2;

	int a = abs(x1-x2), b = abs(y1-y2);

	cout << a*b+1 << endl;

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
