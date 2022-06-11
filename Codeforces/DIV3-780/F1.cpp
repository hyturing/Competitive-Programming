/**
 *	Author: hyturing
 *	Created: 31 Mar 2022 20:59:16 IST
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

	int pos[n+1] = {0}, neg[n+1] = {0};

	for (int i = 1; i <= n; i++) {
		if (s[i-1] == '+') {
			pos[i] = pos[i-1]+1;
			neg[i] = neg[i-1];
		}
		else {
			neg[i] = neg[i-1]+1;
			pos[i] = pos[i-1];
		}
	}

	int ans = 0;

	for (int i = 1; i < n; i++) {
		for (int j = i+1; j <= n; j++) {
			int pp = pos[j]-pos[i-1], nn = neg[j]-neg[i-1];

			// cout << nn << " " << pp << endl;
			if (pp == nn) ans++;
			if (nn > pp and (nn-pp)%3 == 0) ans++;
		}
	}

	cout << ans << "\n";

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