/**
 *	Author: hyturing
 *	Created: 23 May 2022 20:04:43 IST
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

	sort(a.rbegin(), a.rend());
	sort(b.rbegin(), b.rend());

	// Alice

	if (a[0] >= b[0]) {
		cout << "Alice\n";
	}
	else {
		cout << "Bob\n";
	}

	// Bob

	if (b[0] >= a[0]) {
		cout << "Bob\n";
	}
	else {
		cout << "Alice\n";
	}

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
