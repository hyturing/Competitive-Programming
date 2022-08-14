/**
 *	Author: hyturing
 *	Created: 
**/

#include <bits/stdc++.h>
using namespace std; 

const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const long long INF = 1e18;

void solve() {

	// code here
	
	int n; cin >> n;
	int arr[n];
	for (auto &x: arr) cin >> x;

	int b[n];

	if (arr[0] == 1) {
		b[0] = 1, b[1] = 0;
	}	
	else {
		b[0] = 0, b[1] = 0;
	}

	for (int i = 2; i < n; i++) {
		if (arr[i-1] == 1) {
			b[i] = (b[i-1]+1)%2;
		}
		else {
			b[i] = b[i-1]%2;
		}
	}

	// for (auto x: b) cout << x << " "; cout << endl;

	if (arr[n-1] == ((b[0]+b[n-1])%2)) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}

	return;
}

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int tc = 1;
	cin >> tc;
	
	for (int i = 1; i <= tc; i++) {
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
