/**
 *	Author: hyturing
 *	Created: 23 May 2022 20:16:03 IST
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

	vector<int> a(n);
	for (auto &x: a) cin >> x;

	int m;
	cin >> m;

	vector<int> b(m);
	for (auto &x: b) cin >> x;

	int in = 0;

	for (int i = 0; i < m; i++) {
		in = (in+b[i])%n;
	}

	cout << a[in] << "\n";

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
