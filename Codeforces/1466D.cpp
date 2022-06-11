/**
 *	Author: hyturing
 *	Created: 10 Apr 2022 11:20:02 IST
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

	vector<int> w(n);
	for (auto &x: w) cin >> x;

	vector<int> edge(n+1, 0);

	for (int i = 1; i < n; i++) {
		int x, y;
		cin >> x >> y;
		edge[x]++, edge[y]++;
	}

	vector<array<int,2>> v(n);

	int ans = 0;

	for (int i = 0; i < n; i++) {
		v[i][0] = w[i], v[i][1] = edge[i+1]-1, ans += w[i];
	}

	sort(v.rbegin(), v.rend());

	// for (auto x: v) cout << x[0] << " " << x[1] << endl;

	cout << ans << " ";
	int j = 0;

	for (int i = 1; i < n-1; i++) {
		if (v[j][1] == 0) {
			while (v[j][1] == 0) j++;
			ans += v[j][0];
			v[j][1]--;
		}
		else {
			ans += v[j][0];
			v[j][1]--;
		}

		cout << ans << " ";
	}

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
