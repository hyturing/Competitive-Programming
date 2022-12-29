/**
 *    Author: hyturing
 *    Created: 
**/

#include <bits/stdc++.h>
using namespace std; 

#define int long long
#define sz(x) ((int)(x).size())
#define all(x) x.begin(),x.end()
#define endl "\n"
#define pb push_back

const int  MOD = 1e9+7;
const int MM = 998244353;
const int N = 1e5+5;
const long long INF = 1e18;

void solve() {

    // code here
    
    int n; cin >> n;

    vector<int> a(n);
    for (auto &x: a) cin >> x;

    int mx = 0, mi = 1000;

	for (auto x: a) {
		mx = max(mx, x);
		mi = min(mi, x);
	}

	if (a[n-1] == mx or a[0] == mi) {
		cout << mx-mi << endl;
	}
	else {
		int ans = 0;

		for (int i = 0; i < n; i++) {
			ans = max(ans, a[i]-a[(i+1)%n]);
		}

		ans = max(ans, mx - a[0]);
		ans = max(ans, mi - a[0]);
		ans = max(ans, a[n-1] - mx);
		ans = max(ans, a[n-1] - mi);

		cout << ans << endl;
	}

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

/*-------------------------------------------------------------------------------------------------------*/
