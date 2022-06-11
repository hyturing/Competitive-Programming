/**
 *	Author: hyturing
 *	Created: 02 Jun 2022 21:30:48 IST
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

	priority_queue<array<int, 3>> p;

	vector<int> ans(n+1, 0);

	p.push({n, -1, -n});

	for (int i = 1; i <= n; i++) {
		auto x = p.top(); p.pop();
		int sz = x[0];
		int l = -x[1];
		int r = -x[2];

		// cout << "DEBUG " << i << " " << sz << " " << l << " " << r << endl; 

		if (sz&1) {
			int j = (l+r)/2;
			ans[j] = i;
			int l1 = l, l2 = j+1, r1 = j-1, r2 = r;
			p.push({j-l, -l1, -r1});
			p.push({r-j, -l2, -r2});
		}
		else {
			int j = (l+r-1)/2;
			ans[j] = i;
			int l1 = l, l2 = j+1, r1 = j-1, r2 = r;
			p.push({j-l, -l1, -r1});
			p.push({r-j, -l2, -r2});
		}

		// for (int i = 1; i <= n; i++) cout << ans[i] << " "; cout << endl;
	}

	for (int i = 1; i <= n; i++) cout << ans[i] << " ";
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
