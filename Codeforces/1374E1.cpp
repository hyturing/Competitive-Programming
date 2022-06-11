/**
 *	Author: hyturing
 *	Created: 04 Jun 2022 15:53:10 IST
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
	
	int n, k;
	cin >> n >> k;

	int c1 = 0, c2 = 0;

	vector<int> a, b, c;

	for (int i = 0; i < n; i++) {
		int t, x, y;
		cin >> t >> x >> y;

		if (x == 1) c1++;
		if (y == 1) c2++;

		if (x == 1 and y == 1) a.push_back(t);
		if (x == 1 and y == 0) b.push_back(t);
		if (x == 0 and y == 1) c.push_back(t);
	}

	if (c1 < k or c2 < k) {
		cout << -1 << "\n";
		return;
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	sort(c.begin(), c.end());

	int ans = 0;

	if (b.size() < c.size()) {
		for (int i = 0; i < b.size(); i++) {
			b[i] += c[i];
		}
	}
	else {
		for (int i = 0; i < c.size(); i++) {
			c[i] += b[i];
		}
		b = c;	
	}

	int cnt = 0, i = 0, j = 0;

	while (cnt < k) {
		if (i == a.size()) {
			ans += b[j];
			j++; cnt++; continue;
		}	

		if (j == b.size()) {
			ans += a[i];
			i++; cnt++; continue;
		}

		if (a[i] <= b[j]) {
			ans += a[i];
			i++;
		}
		else {
			ans += b[j];
			j++;
		}

		cnt++;

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
