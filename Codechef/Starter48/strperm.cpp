/**
 *    Author: hyturing
 *    Created: 
**/

#include <bits/stdc++.h>
using namespace std; 

#define sz(x) ((int)(x).size())

const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const long long INF = 1e18;

void solve() {

    // code here
    
	int n, m; cin >> n >> m;

	map<int,set<int>, greater<int>> mpp;

	bool ok[n+1] = {0};

	for (int i = 0; i < m; i++) {
		int x, y; cin >> x >> y;

		mpp[y].insert(x);
		ok[x] = true;
	}	

	for (int i = 1; i <= n; i++) {
		if (!ok[i]) mpp[n].insert(i);
	}

	priority_queue<int> pq;

	int ans[n+1];

	for (int i = n; i >= 1; i--) {
		if (mpp.find(i) != mpp.end()) {
			for (auto x: mpp[i]) {
				pq.push(x);
			}
		}

		if (sz(pq) == 0) {
			cout << -1 << "\n";
			return;
		}

		ans[i] = pq.top();
		pq.pop();
	}

	for (int i = 1; i <= n; i++) cout << ans[i] << " "; cout << "\n";

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

