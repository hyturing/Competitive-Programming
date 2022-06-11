/**
 *	Author: hyturing
 *	Created: 06 Jun 2022 22:53:35 IST
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

	map<int,int> f;
	vector<int> adj[n+1];

	for (int i = 1; i < n; i++) {
		int u, v;
		cin >> u >> v;
		if (u > 1) f[u]++;
		if (v > 1) f[v]++;

		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	set<int> industry;

	return;
}

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int tc = 1;
	// cin >> tc;
	
	for (int i = 1; i <= tc; i++) {
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
