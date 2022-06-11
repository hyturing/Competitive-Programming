/**
 *	Author: hyturing
 *	Created: 01 Jun 2022 13:25:29 IST
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

	vector<int> p(n+1, 0);
	unordered_map<int,int> m;
	m[0]++;

	int ans = 0;

	for (int i = 1; i <= n; i++) {
		p[i] = int32_t(s[i-1]-'0')-1;
		p[i] += p[i-1];
		ans += m[p[i]];
		m[p[i]]++;
	}

	// int ans = 0;
	// for (auto x: m) {
	// 	int k = x.second;
	// 	ans += (k*k-k)/2;
	// }

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
