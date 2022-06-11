/**
 *	Author: hyturing
 *	Created: 20 May 2022 14:01:49 IST
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
	
	int a, b, c;
	cin >> a >> b >> c;

	int x = b*MOD+a, y = b, z = c;

	cout << x << " " << y << " " << z << "\n";

	// if (x%y == a and y%z == b and z%x == c) cout << "YES\n";
	// else cout << "NO\n";

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
