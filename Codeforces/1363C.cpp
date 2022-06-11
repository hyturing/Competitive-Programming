/**
 *	Author: hyturing
 *	Created: 01 Jun 2022 00:10:53 IST
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
	
	int n, x;
	cin >> n >> x;

	if (n == 1) {
		cout << "Ayush\n";
		return;
	}

	vector<int> f(n+1, 0);
	vector<int> adj[n+1];

	for (int i = 1; i < n; i++) {
		int u, v;
		cin >> u >> v;

		f[u]++, f[v]++;
		adj[u].push_back(v), adj[v].push_back(u);
	}

	queue<int> q;
	vector<bool> visited(n+1, 0);
	vector<int> distance(n+1, 0);

	visited[x] = true;
	distance[x] = 0;
	q.push(x);

	while (!q.empty()) {
		int s = q.front(); q.pop();

		for (auto u: adj[s]) {
			if (visited[u]) continue;
			visited[u] = true;
			distance[u] = distance[s]+1;
			q.push(u);
		}
	}

	while (true) {
		if (f[x] == 1) {
			cout << "Ayush\n";
			return;
		}
		else {
			vector<pair<int,int>> v;
			for (int i = 1; i <= n; i++) {
				if (f[i] == 1) v.push_back({distance[i], i});
			}

			sort(v.rbegin(), v.rend());

			f[v[0].second]--;
			for (auto x: adj[v[0].second]) {
				if (f[x] > 0) f[x]--;
			}
		}

		if (f[x] == 1) {
			cout << "Ashish\n";
			return;
		}
		else {
			vector<pair<int,int>> v;
			for (int i = 1; i <= n; i++) {
				if (f[i] == 1) v.push_back({distance[i], i});
			}

			sort(v.rbegin(), v.rend());

			f[v[0].second]--;
			for (auto x: adj[v[0].second]) {
				if (f[x] > 0) f[x]--;
			}
		}
	} 

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
