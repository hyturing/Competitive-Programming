/**
 *	Author: hyturing
 *	Created: 16 Jun 2022 20:01:52 IST
**/

#include <bits/stdc++.h>
using namespace std; 

#define ll long long
const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const ll INF = 1e18;

vector<vector<ll>> adj;
vector<ll> l, r;
// vector<bool> visited;
ll ans;

int dfs(int v) {
	 ll maxn = 0;

	 for (auto x: adj[v]) {
	 	// if (visited[x]) continue;
	 	// visited[x] = true;
	 	maxn += dfs(x);
	 }

	 if (maxn >= l[v]) {
	 	return min(maxn, r[v]);
	 }

	 ans++;
	 return r[v];
}

void solve() {

	// code here
	
	ans = 0;
	int n; cin >> n;

	adj = vector<vector<ll>> (n+1); 
	l = vector<ll> (n+1);
	r = vector<ll> (n+1);
	// visited = vector<bool> (n+1, false);
	for (int i = 2; i <= n; i++) {
		int x; cin >> x;
		adj[x].push_back(i);
		// adj[i].push_back(x);
	}

	for (int i = 1; i <= n; i++) {
		cin >> l[i] >> r[i];
	}

	dfs(1);

	cout << ans << "\n";
	// adj.clear();
	// weight.clear();
	
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
