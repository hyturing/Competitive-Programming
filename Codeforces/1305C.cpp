/**
 *	Author: hyturing
 *	Created: 05 Jun 2022 21:40:43 IST
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
	
	int n, m;
	cin >> n >> m;

	vector<int> a(n);
	for (auto &x: a) cin >> x;

	if (n > m) {
		cout << 0 << "\n";
		return;
	}

	sort(a.begin(), a.end());
	vector<int> s = {0};
	for (int i = 0; i < n-1; i++) {
		s.push_back(abs(a[i]-a[i+1]));
	}

	int ans = 1;
	for (int i = 1; i < n; i++) {
		ans = (ans*s[i])%m;
	}

	for (int i = 1; i < n; i++) s[i] += s[i-1];

	for (int sz = 1; sz < n; sz++) {
		for (int i = 1; i < n-sz; i++) {
			ans = (ans * (s[i+sz]-s[i-1]))%m;
		}
	}

	cout << ans << "\n";

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
