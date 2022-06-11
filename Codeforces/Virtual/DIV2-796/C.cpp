/**
 *	Author: hyturing
 *	Created: 08 Jun 2022 21:22:12 IST
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

	vector<int> a(26, 0);

	for (int i = 0; i < 2*n+1; i++) {
		string s;
		cin >> s;

		for (auto x: s) a[x-'a']++;
	}

	// for (auto x: a) cout << x << " "; cout << endl;

	for (int i = 0; i < 26; i++) {
		if (a[i]&1) {
			char ans = 'a';
			for (int j = 0; j < i; j++) ans++;
			cout << ans << "\n";
			return;
		}
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
