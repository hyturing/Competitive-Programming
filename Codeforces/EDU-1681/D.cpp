/**
 *	Author: hyturing
 *	Created: 23 May 2022 20:35:50 IST
**/

#include <bits/stdc++.h>
using namespace std; 

// #define int long long
const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const int INF = 1e18;

void solve() {

	// code here
	
	long long n, x;

	cin >> n >> x;

	queue<long long> q;

	q.push(x);

	map<long long,long long> dist;

	dist[x] = 0;

	while (!q.empty()) {
		long long v = q.front(); q.pop();

		string s = to_string(v);

		if (s.size() == n) {
			cout << dist[v] << "\n";
			return;
		}

		for (auto x: s) {
			if (x == '0' or x == '1') continue;

			long long k = v * int(x - '0');

			if (dist.find(k) == dist.end()) {
				dist[k] = dist[v] + 1;
				q.push(k);
			}
		}
	}

	cout << -1 << "\n";

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
