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
    
    int n, x; cin >> n >> x;
    vector<int> a(n);

    for (auto &x: a) cin >> x;

    int mi = a[0], mx = a[0];
    int ans = 0;

    for (int i = 0; i < n; i++) {
        mi = min(mi, a[i]);
        mx = max(mx, a[i]);

        if (mx-mi > 2*x) {
            ans++;
            mi = a[i], mx = a[i];
        }
    }

    cout << ans << endl;

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
