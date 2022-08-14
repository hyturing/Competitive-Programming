/**
 *	Author: hyturing
 *	Created: 20 Jun 2022 21:56:52 IST
**/

#include <bits/stdc++.h>
using namespace std; 

#define ll long long
const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const ll INF = 1e18;

void solve() {

	// code here
	
	int n, k; cin >> n >> k;

	string s; cin >> s;

	int a = 0, b = n-1;

	while (s[a] == '0') a++;
	while (s[b] == '0') b--;

	if (a == b) {
		if (k >= n-b-1) {
			swap(s[n-1], s[b]);
		}
		else {
			if (k >= a) {
				swap(s[0], s[a]);
			}
		}
	}
	else {
		if (k >= n-b-1) {
			swap(s[n-1], s[b]);
			k -= n-b-1;
		}
		if (k >= a) {
			swap(s[0], s[a]);
		}
	}

	int ans = 0;

	for (int i = 0; i < n-1; i++) {
		if (s[i] == '1' and s[i+1] == '0') ans += 10;
		if (s[i] == '0' and s[i+1] == '1') ans += 1;
		if (s[i] == '1' and s[i+1] == '1') ans += 11;
	}

	cout << ans << "\n";

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
