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
	vector<int> a(n+1), pos(n+1);
	for (int i = 1; i <= n; i++) cin >> a[i];

	for (int i = 1; i <= n; i++) {
		pos[a[i]] = i;
	}    

	vector<int> g;

	for (int i = 1; i <= n; i++) {
		if (a[i] == i) continue;

		g.push_back(abs(i-pos[i]));

		int next = a[i];
		swap(a[i], a[pos[i]]);

		pos[a[i]] = a[i];
	}

	int ans;

	for (int i = 0; i < sz(g); i++) {
		if (i == 0) {
			ans = g[i];
			continue;
		}
		ans = __gcd(ans, g[i]);
	}

	cout << ans << "\n";

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

