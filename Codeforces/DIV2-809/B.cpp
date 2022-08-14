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
    
    int n; cin >> n;
    int a[n];
    for (auto &x: a) cin >> x;

    map<int,vector<int>> m;

	for (int i = 0; i < n; i++) {
		m[a[i]].push_back(i);
	}

	int ans[n+1] = {0};

	for (int i = 1; i <= n; i++) {
		if (m.find(i) != m.end()) {
			int cnt = 1;
			vector<int> b = m[i];
			ans[i] = 1;
			for (int j = 1; j < sz(b); j++) {
				if ((b[j]-b[j-1])%2 == 1) {
					cnt++;
					ans[i] = max(ans[i],cnt);
				}
			}
		}
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

