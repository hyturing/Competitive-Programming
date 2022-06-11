/**
 *	Author: hyturing
 *	Created: 
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
	
	int n; cin >> n;

	vector<int> adj[n+1];
	vector<int> f(n+1,0);

	for (int i = 1; i < n; i++) {
		int u, v;
		cin >> u >> v;
		f[u]++, f[v]++;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	if (n < 3) {
		cout << 0 << "\n";
		return;
	}

	if (f[1] == 1) {
		cout << n-2 << "\n";
		return;
	}

	queue<int> q; q.push(1);
	vector<bool> vis(n+1, false);
	vector<int> dis(n+1, 0);

	vis[1] = true;
	dis[1] = 0;
	while (!q.empty()) {
		int s = q.front(); q.pop();
		for (auto u: adj[s]) {
			if (vis[u]) continue;
			vis[u] = true;
			dis[u] = dis[s]+1;
			q.push(u);
		}
	}

	set<pair<int,int>> s;

	// for (int i = 1; i <= n; i++) cout << dis[i] << " "; cout << endl;
	// for (int i = 1; i <= n; i++) cout << f[i] << " "; cout << endl;

	bool ok = true;

	for (auto x: adj[1]) {
		if (x > 2) ok = false;
	}

	if (ok) {
		cout << n-2 << "\n";
		return;
	}
	
	for (int i = 2; i <= n; i++) {
		if (f[i] < 3) s.insert({dis[i], f[i]});
	}

	pair<int,int> node = *s.begin();

	int ans;

	if (node.second == 2) ans = (node.first-1)*2+2;
	else ans = node.first*2+1;
	
	ans = n-ans;

	cout << max(0LL, ans) << "\n";

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
