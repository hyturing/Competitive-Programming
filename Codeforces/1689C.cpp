/**
 *	Author: hyturing
 *	Created: 20 Jun 2022 23:08:45 IST
**/

#include <bits/stdc++.h>
using namespace std; 

#define ll long long
const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const ll INF = 1e18;

vector<vector<int>> adj;
int lost;

void dfs(int node, int p_node, int depth) {

	int deg = adj[node].size(); 
	if (p_node != 0) deg--;

	if (deg <= 1) {
		lost = min(lost, 2*depth+deg+1);
	}

	for (auto x: adj[node]) {
		if (x != p_node) {
			dfs(x, node, depth+1);
		}
	}
}

void solve() {

	// code here
	
	int n; cin >> n;

	adj = vector<vector<int>> (n+1);

	for (int i = 1; i < n; i++) {
		int u, v; cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	lost = INT_MAX;

	dfs(1, 0, 0);

	cout << n-lost << "\n";

	return;
}

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int tc = 1;
	cin >> tc;
	
	for (int i = 1; i <= tc; i++) {
		// cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}
