/**
 *	Author: hyturing
 *	Created: 01 Jun 2022 22:06:01 IST
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

	if (n < 4) {
		cout << -1 << "\n";
		return;
	}

	vector<int> odd, even;

	for (int i = 1; i <= n; i++) {
		if (i&1) odd.push_back(i);
		else even.push_back(i);
	}

	reverse(odd.begin(), odd.end());

	swap(even[0], even[1]);

	for (auto x: odd) cout << x << " ";
	for (auto x: even) cout << x << " ";

	cout << "\n";

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
