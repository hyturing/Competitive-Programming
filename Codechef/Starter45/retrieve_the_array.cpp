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
#define int long long
void solve() {

	// code here
	
	int n; cin >> n;
	int a[n], sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}	

	int val = sum/(n+1LL);

	for (auto &x: a) x -= val;

	for (auto x: a) cout << x << " "; cout << "\n";

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
