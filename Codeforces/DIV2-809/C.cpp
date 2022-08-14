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
    
    int n; cin >> n;
    int a[n];
    for (auto &x: a) cin >> x;

    int ans = 0;

    for (int i = 1; i+1 < n; i+=2) {
       ans += max({a[i], a[i-1]+1, a[i+1]+1}) - a[i];
    }

    int cur = ans;

    if (!(n&1)) {
        for (int i = n-2; i > 0; i--) {
            if (i&1) {
                ans -= max({a[i], a[i-1]+1, a[i+1]+1}) - a[i];
            }
            else {
                ans += (max({a[i], a[i-1]+1, a[i+1]+1}) - a[i]);
            }

            cur = min(ans, cur);
        }
    }

    cout << cur << "\n";    

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
