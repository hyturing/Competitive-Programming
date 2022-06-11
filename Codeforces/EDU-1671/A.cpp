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
	
	string s;
	cin >> s;

	int n = s.size();

	for (int i = 1; i < n-1; i++) {
		if (s[i] != s[i-1] and s[i] != s[i+1]) {
			cout << "NO\n";
			return;
		}
	}

	if (n == 1) {
		cout << "NO\n";
		return;
	}

	if (s[0] != s[1] or s[n-1] != s[n-2]) {
		cout << "NO\n";
		return;
	}

	cout << "YES\n";

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
