/**
 *	Author: hyturing
 *	Created: 22 May 2022 20:03:36 IST
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

	string s;
	cin >> s;

	if (n&1) {
		char a = s[n/2];

		int ans = 1;

		for (int i = n/2-1; i >= 0; i--) {
			if (s[i] == a) {
				ans += 2;
			}
			else break;
		}

		cout << ans << "\n";
	}
	else {
		char a = s[n/2-1];

		int ans = 2;

		for (int i = n/2-2; i >= 0; i--) {
			if (s[i] == a) {
				ans += 2;
			}
			else break;
		}
		cout << ans << "\n";
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
