/**
 *	Author: hyturing
 *	Created: 03 Apr 2022 14:01:13 IST
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
	
	string s;
	cin >> s;

	vector<bool> ok(26, false);

	int n = s.size();
	int cnt = 0;

	for (int i = 0; i < n; i++) {
		if (ok[s[i]-'a']) {
			cnt += 2;
			for (int i = 0; i < 26; i++) ok[i] = false;
		}
		else {
			ok[s[i]-'a'] = true;
		}
	}

	cout << n-cnt << "\n";

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
