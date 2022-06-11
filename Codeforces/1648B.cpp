/**
 *	Author: hyturing
 *	Created: 26 Mar 2022 12:44:27 IST
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
	
	int n, c;
	cin >> n >> c;

	vector<int> cnt(c+1, 0), sum(c+1, 0);

	for (int i = 1; i <= n; i++) {
		int x; cin >> x;
		cnt[x]++;
	}

	for (int i = 1; i <= c; i++) sum[i] = sum[i-1]+cnt[i];

	for (int i = 1; i <= c; i++) {
		if (cnt[i] == 0) continue;

		for (int j = i; j <= c; j+=i) {
			int l = j;
			int r = min(j+i-1, c);

			if (sum[r]-sum[l-1] > 0 and cnt[j/i] == 0) {
				cout << "NO\n";
				return;
			}
		} 
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
