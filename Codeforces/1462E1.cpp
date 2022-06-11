/**
 *	Author: hyturing
 *	Created: 10 Apr 2022 16:31:44 IST
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

	int k = (n < 3 ? 3 : n);
	int cnt[k+1] = {0};

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		cnt[x]++;
	}

	int ans = 0;

	// x, x, x
	for (int i = 1; i < n+1; i++) {
		ans += (cnt[i]*(cnt[i]-1)*(cnt[i]-2))/6;
	}

	// x, x+1, x+2
	for (int i = 3; i < n+1; i++) {
		ans += cnt[i]*cnt[i-1]*cnt[i-2];
	}

	// x, x+1, x+1
	for (int i = 2; i < n+1; i++) {
		ans += cnt[i-1]*((cnt[i]*(cnt[i]-1))/2);
	}

	// x, x+2, x+2
	for (int i = 3; i < n+1; i++) {
		ans += cnt[i-2]*((cnt[i]*(cnt[i]-1))/2);
	}

	// x, x, x+1
	for (int i = 2; i < n+1; i++) {
		ans += cnt[i]*((cnt[i-1]*(cnt[i-1]-1))/2);
	}

	// x, x, x+2
	for (int i = 3; i < n+1; i++) {
		ans += cnt[i]*((cnt[i-2]*(cnt[i-2]-1))/2);
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
