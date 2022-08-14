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
    
    int n, m; cin >> n >> m;
    int a[n+1];
    for (int i = 1; i <= n; i++) cin >> a[i];

    int pre[n+1] = {0}, suf[n+1] = {0};

	for (int i = 2; i <= n; i++) {
		if (a[i] < a[i-1]) {
			pre[i] = a[i-1]-a[i];

		}
	}

	for (int i = n-1; i > 0; i--) {
		if (a[i] < a[i+1]) {
			suf[i] = a[i+1]-a[i];
		}
	}

	for (int i = 1; i <= n; i++) {
		pre[i] += pre[i-1];
	}

	for (int i = n-1; i > 0; i--) {
		suf[i] += suf[i+1];
	}

	while (m--) {
		int x, y; cin >> x >> y;

		if (x > y) {
			cout << suf[y]-suf[x] << "\n";
		}
		else {
			cout << pre[y]-pre[x] << "\n";
		}
	}

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

