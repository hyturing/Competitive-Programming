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
	
	int n;
	cin >> n;

	int a[n];

	for(auto &x: a) cin >> x;

	int x = 0, y = 0, mi = a[0], mx = a[0];

	for(int i = 0; i < n; i++){
		if(a[i] > mx) mx = a[i], y = i;
		if(a[i] < mi) mi = a[i], x = i;
	}

	cout << x+1 << " " << y+1 << "\n";

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
