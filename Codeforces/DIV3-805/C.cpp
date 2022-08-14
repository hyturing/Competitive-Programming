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
#define int long long
void solve() {

    // code here
    
	int n, k; cin >> n >> k;

	map<int, pair<int,int>> m;

	for (int i = 0; i < n; i++) {
		int x; cin >> x;

		if (m.find(x) == m.end()) {
			m[x].first = i;
			m[x].second = i;
		}
		else {
			m[x].second = i;
		}
	}

	while (k--) {
		int a, b; cin >> a >> b;

		if (m.find(a) == m.end() or m.find(b) == m.end() or m[a].first > m[b].second) {
			cout << "NO\n";
		}
		else {
			cout << "YES\n";
		}
	}

	// cout << endl;
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

