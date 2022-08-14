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
    
    int n, q; cin >> n >> q;
    int a[n+1];
    for (int i = 1; i <= n; i++) cin >> a[i];

    int cur = 1, index = n;

	for (int i = n; i >= 2; i--) {
		if (a[i-1] <= cur) {
			index = i-1;
		}
		else {
			if (cur == q) {
				break;
			}
			cur++;
			index = i-1;
		}
	}

	int ans[n+1] = {0};

	for (int i = 1; i < index; i++) {
		if (a[i] <= q) {
			ans[i] = 1;
		}
	}

	for (int i = index; i <= n; i++) {
		ans[i] = 1;
	}

	for (int i = 1; i <= n; i++) {
		cout << ans[i];
	}

	cout << "\n";

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

